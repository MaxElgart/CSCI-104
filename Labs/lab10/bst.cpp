#include "bst.h"

#include <stack>
#include <queue>
#include <set>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>


bool isBalanced(Node *root) {
	//Get the heights of the left and right subtrees - helper func?
	//Determine if this node is balanced! If not ret false!

	//Check if there are subtrees under us
	//Are they balanced?
    
	//If all nodes are balanced return true!
    if (root == nullptr)
    {
        return true;
    }
    
    if(abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int height(Node* node)
{
    if (node == nullptr)
    {
        return 0;
    }
    
    int left_height = height(node->left);
    int right_height = height(node->right);
    
    if (left_height >= right_height)
    {
        return left_height + 1;
    }
    else
    {
        return right_height + 1;
    }
}
