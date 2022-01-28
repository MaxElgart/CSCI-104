#include "labellist.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

typedef std::vector<LabelList::MsgType> MsgVec;

int main()
{
    MsgVec msgs = {"m0", "m1", "m2", "m3"};
    const size_t NUM_MSGS = 4;

    LabelList list1;
    LabelList::MsgToken tokens[NUM_MSGS];
    // Add base messages and save tokens
    for(size_t i = 0U; i != NUM_MSGS; i++)
    {
        tokens[i] = list1.add(msgs[i]);
    }

    // Add a few sample labels
    list1.label(tokens[1], "a");
    
    list1.label(tokens[2], "b");

    list1.label(tokens[3], "a");
    
    list1.label(tokens[1], "c");
    
    list1.label(tokens[1], "b");


    // vector of vectors of expected messages for each label
    std::vector< LabelList::LabelType > labels = {"a", "b", "c"};
    std::vector< MsgVec > expectedMsgs = { {"m1", "m3"}, {"m2"}, {"m1"} };
    for(size_t i = 0; i < labels.size(); i++)
    {
        std::stringstream messageStream;
        list1.print(messageStream, labels[i]);
        LabelList::MsgType msg;
        size_t j = 0;
    }
    return 0;
}
