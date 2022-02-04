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


}

// Add private helper function implementations here

