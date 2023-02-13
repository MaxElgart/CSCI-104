#include <iostream>
#include <fstream>
#include <stdexcept>
#include <cctype>
#include "md_parser.h"
#include "util.h"

using namespace std;

typedef enum { NORMALTEXT, LINKTEXT, ISLINK, LINKURL } PARSE_STATE_T;

// To be completed
void MDParser::parse(std::istream& istr, std::set<std::string>& allSearchableTerms, std::set<std::string>& allOutgoingLinks)
{

    // Remove any contents of the sets before starting to parse.
    allSearchableTerms.clear();
    allOutgoingLinks.clear();

    // Complete your code below
    
    
    // Initialize the current term and link as empty strings.
    string term = "";
    
    string link = "";

    // Get the first character from the file.
    char c = istr.get();
    int state = 0;
    
    //search the file
    while (!istr.fail())
    {
        if (state == 0)
        {
            if(c == '[')
            {
                state = 1;
                c = istr.get();
                if(term != "")
                {
                    term = conv_to_lower(term);
                    allSearchableTerms.insert(term);
                }
                term = "";
            }
            else if(!isalnum(c))
            {
                if(term != "")
                {
                    term = conv_to_lower(term);
                    allSearchableTerms.insert(term);
                }
                term = "";
                if (link != "")
                {
                    link = conv_to_lower(link);
                    allOutgoingLinks.insert(link);
                }
                link = "";
                c = istr.get();
            }
            else
            {
                term += c;
                c = istr.get();
            }
        }
        else if(state == 1)
        {
            if (c == ']')
            {
                state = 2;
                if(term != "")
                {
                    term = conv_to_lower(term);
                    allSearchableTerms.insert(term);
                }
                term = "";
                c = istr.get();
            }
            else if(!isalnum(c))
            {
                if(term != "")
                {
                    term = conv_to_lower(term);
                    allSearchableTerms.insert(term);
                }
                term = "";
                c = istr.get();
            }
            else
            {
                term += c;
                c = istr.get();
            }
        }
        else if(state == 2)
        {
            if(c == '(')
            {
                state = 3;
                c = istr.get();
            }
            else
            {
                state = 0;
            }
        }
        else if(state == 3)
        {
            if(c == ')')
            {
                state = 0;
            }
            else
            {
                link += c;
                c = istr.get();
            }
        }
    }
    
    if(term != "")
    {
        term = conv_to_lower(term);
        allSearchableTerms.insert(term);
    }
    term = "";
    if (link != "")
    {
        link = conv_to_lower(link);
        allOutgoingLinks.insert(link);
    }
    link = "";
        
}

// To be completed
std::string MDParser::display_text(std::istream& istr)
{
    std::string retval;

    char c = istr.get();
    char b = c;
    bool checkLink = false;

    // Continue reading from the file until input fails.
    while (!istr.fail())
    {
        if (b == ']' && c == '(' && checkLink == false)
        {
            checkLink = true;
        }
        else if(checkLink == true)
        {
            if(c == ')')
            {
                checkLink = false;
                c = istr.get();
            }
            else
            {
                c = istr.get();
            }
        }
        else
        {
            retval += c;
            b = c;
            c = istr.get();
        }
    }
    return retval;

}


