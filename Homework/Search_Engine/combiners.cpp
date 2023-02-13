#include "searcheng.h"
#include "combiners.h"

// Complete the necessary code

WebPageSet AndWebPageSetCombiner::combine(const WebPageSet& setA, const WebPageSet& setB)
{
    WebPageSet temp = setA;
    for (std::set<WebPage*>::iterator it = setA.begin();
         it != setA.end(); it++)
    {
        if(setB.find(*it) == setB.end())
        {
            temp.erase(*it);
        }
    }
    return temp;
}


WebPageSet OrWebPageSetCombiner::combine(const WebPageSet& setA, const WebPageSet& setB)
{
    WebPageSet temp = setB;
    for (std::set<WebPage*>::iterator it = setA.begin();
         it != setA.end(); it++)
    {
        if(setB.find(*it) == setB.end())
        {
            temp.insert(*it);
        }
    }
    return temp;
}


WebPageSet DiffWebPageSetCombiner::combine(const WebPageSet& setA, const WebPageSet& setB)
{
    WebPageSet temp = setA;
    for (std::set<WebPage*>::iterator it = setA.begin();
         it != setA.end(); it++)
    {
        if(setB.find(*it) != setB.end())
        {
            temp.erase(*it);
        }
    }
    return temp;
}
