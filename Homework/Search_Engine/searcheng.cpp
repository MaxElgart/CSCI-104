#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <fstream>
#include "searcheng.h"

using namespace std;

// Helper function that will extract the extension of a filename
std::string extract_extension(const std::string& filename);

std::string extract_extension(const std::string& filename)
{
    size_t idx = filename.rfind(".");
    if (idx == std::string::npos) {
        return std::string();
    }
    return filename.substr(idx + 1);
}


// To be updated as needed 
SearchEng::SearchEng()
{

}

// To be completed
SearchEng::~SearchEng()
{
    for (std::map<std::string, WebPage*>::iterator it = pages_.begin();
         it != pages_.end(); it++)
    {
        delete pages_[it->first];
    }
    
    for (std::map<std::string, PageParser*>::iterator it = parsers_.begin();
         it != parsers_.end(); it++)
    {
        delete parsers_[it->first];
    }
}

// Complete
void SearchEng::register_parser(const std::string& extension, PageParser* parser)
{
    if (parsers_.find(extension) != parsers_.end())
    {
        throw std::invalid_argument("parser for provided extension already exists");
    }
    parsers_.insert(make_pair(extension, parser));
}

// Complete
void SearchEng::read_pages_from_index(const std::string& index_file)
{
    ifstream ifile(index_file.c_str());
    if(ifile.fail()) {
        cerr << "Unable to open index file: " << index_file << endl;
    }

    // Parse all the files
    string filename;
    while(ifile >> filename) {
#ifdef DEBUG
        cout << "Reading " << filename << endl;
#endif
        read_page(filename);
    }
    ifile.close();
}

// To be completed
void SearchEng::read_page(const string& filename)
{
    ifstream ifile(filename.c_str());
    
    string ext = extract_extension(filename);
    
    if(parsers_.find(ext) == parsers_.end())
    {
        throw std::logic_error("File extension has no parser");
    }
    
    if(ifile.fail())
    {
        throw std::invalid_argument("File doesn't exist");
    }
    
    parsers_[ext]->parse(ifile, allSearchableTerms, allOutgoingLinks);
    
    
    WebPage* currentPage;
    WebPage* secondPage;
    
    if (pages_.find(filename) == pages_.end())
    {
        WebPage* newWebPage = new WebPage(filename);
        newWebPage->all_terms(allSearchableTerms);
        currentPage = newWebPage;
        pages_.insert(make_pair(filename, currentPage));
    }
    else
    {
        currentPage = pages_[filename];
        currentPage->all_terms(allSearchableTerms);
    }
    
    for (std::set<std::string>::iterator it = allOutgoingLinks.begin();
         it != allOutgoingLinks.end(); it++)
    {
        if(pages_.find(*it) == pages_.end())
        {
            WebPage* newWebPage2 = new WebPage(*it);
            secondPage = newWebPage2;
            secondPage->add_incoming_link(currentPage);
            pages_.insert(make_pair(*it, secondPage));
        }
        else
        {
            secondPage = pages_[*it];
            if(secondPage == currentPage)
            {
                secondPage->add_incoming_link(currentPage);
                currentPage->add_incoming_link(secondPage);
                continue;
            }
            secondPage->add_incoming_link(currentPage);
        }
        currentPage->add_outgoing_link(secondPage);
    }
    
    for (std::set<std::string>::iterator it = allSearchableTerms.begin();
         it != allSearchableTerms.end(); it++)
    {
        if(termWeb.find(*it) == termWeb.end())
        {
            std::set<WebPage*> empty;
            termWeb.insert(make_pair(*it, empty));
        }
        termWeb[*it].insert(currentPage);
    }
    

    
    ifile.close();

}

// To be completed
WebPage* SearchEng::retrieve_page(const std::string& page_name) const
{
    if(pages_.find(page_name) == pages_.end())
    {
        return NULL;
    }
    
    return pages_.at(page_name);
}

// To be completed
void SearchEng::display_page(std::ostream& ostr, const std::string& page_name) const
{
    ifstream ifile(page_name.c_str());
    
    if(ifile.fail())
    {
        throw std::invalid_argument("File doesn't exist");
    }
    string ext = extract_extension(page_name);
    
    if(parsers_.find(ext) == parsers_.end())
    {
        throw std::logic_error("File extension has no parser");
    }
    
    ostr << parsers_.at(ext)->display_text(ifile);
}

// To be completed
WebPageSet SearchEng::search(const std::vector<std::string>& terms, WebPageSetCombiner* combiner) const
{
    std::set<WebPage*> firstWeb;
    if(termWeb.find(terms[0]) != termWeb.end())
    {
        firstWeb = termWeb.at(terms[0]);
    }
    for (int i = 1; i < terms.size(); i++)
    {
        if(termWeb.find(terms[i]) != termWeb.end())
        {
            firstWeb = combiner->combine(firstWeb, termWeb.at(terms[i]));
        }
    }
        
    return firstWeb;
    
}

// Add private helper function implementations here

