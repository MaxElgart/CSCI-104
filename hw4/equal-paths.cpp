#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here

bool equalPathsHelper(Node * root, int* count, int len)
{
    if (root == nullptr)
    {
        return true;
    }
    
    if (root->left == nullptr && root->right == nullptr)
    {
        if (*count == 0)
        {
            *count = len;
        }
        else
        {
            bool same = false;
            if (*count == len)
            {
                same = true;
            }
            return same;
        }
    }
        //each have their individual lengths and a global count
    bool good = equalPathsHelper(root->left, count, len + 1);
    bool good2 = equalPathsHelper(root->right, count, len + 1);
    
    return good && good2;
    
}


bool equalPaths(Node * root)
{
    // Add your code below
    int count = 0;
    int len = 0;
    return equalPathsHelper(root, &count, len);
}
