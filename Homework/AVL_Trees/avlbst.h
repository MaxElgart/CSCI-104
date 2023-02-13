#ifndef RBBST_H
#define RBBST_H

#include <iostream>
#include <exception>
#include <cstdlib>
#include <algorithm>
#include "bst.h"

struct KeyError { };

/**
* A special kind of node for an AVL tree, which adds the balance as a data member, plus
* other additional helper functions. You do NOT need to implement any functionality or
* add additional data members or helper functions.
*/
template <typename Key, typename Value>
class AVLNode : public Node<Key, Value>
{
public:
    // Constructor/destructor.
    AVLNode(const Key& key, const Value& value, AVLNode<Key, Value>* parent);
    virtual ~AVLNode();

    // Getter/setter for the node's height.
    char getBalance () const;
    void setBalance (char balance);
    void updateBalance(char diff);

    // Getters for parent, left, and right. These need to be redefined since they
    // return pointers to AVLNodes - not plain Nodes. See the Node class in bst.h
    // for more information.
    virtual AVLNode<Key, Value>* getParent() const override;
    virtual AVLNode<Key, Value>* getLeft() const override;
    virtual AVLNode<Key, Value>* getRight() const override;

protected:
    char balance_;
};

/*
  -------------------------------------------------
  Begin implementations for the AVLNode class.
  -------------------------------------------------
*/

/**
* An explicit constructor to initialize the elements by calling the base class constructor and setting
* the color to red since every new node will be red when it is first inserted.
*/
template<class Key, class Value>
AVLNode<Key, Value>::AVLNode(const Key& key, const Value& value, AVLNode<Key, Value> *parent) :
    Node<Key, Value>(key, value, parent), balance_(0)
{

}

/**
* A destructor which does nothing.
*/
template<class Key, class Value>
AVLNode<Key, Value>::~AVLNode()
{

}

/**
* A getter for the balance of a AVLNode.
*/
template<class Key, class Value>
char AVLNode<Key, Value>::getBalance() const
{
    return balance_;
}

/**
* A setter for the balance of a AVLNode.
*/
template<class Key, class Value>
void AVLNode<Key, Value>::setBalance(char balance)
{
    balance_ = balance;
}

/**
* Adds diff to the balance of a AVLNode.
*/
template<class Key, class Value>
void AVLNode<Key, Value>::updateBalance(char diff)
{
    balance_ += diff;
}

/**
* An overridden function for getting the parent since a static_cast is necessary to make sure
* that our node is a AVLNode.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getParent() const
{
    return static_cast<AVLNode<Key, Value>*>(this->parent_);
}

/**
* Overridden for the same reasons as above.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getLeft() const
{
    return static_cast<AVLNode<Key, Value>*>(this->left_);
}

/**
* Overridden for the same reasons as above.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getRight() const
{
    return static_cast<AVLNode<Key, Value>*>(this->right_);
}


/*
  -----------------------------------------------
  End implementations for the AVLNode class.
  -----------------------------------------------
*/


template <class Key, class Value>
class AVLTree : public BinarySearchTree<Key, Value>
{
public:
    virtual void insert (const std::pair<const Key, Value> &new_item); // TODO
    virtual void remove(const Key& key);  // TODO
protected:
    virtual void nodeSwap( AVLNode<Key,Value>* n1, AVLNode<Key,Value>* n2);

    // Add helper functions here
    bool isLeftChild(AVLNode<Key,Value>* node, AVLNode<Key,Value>* parent);
    bool isRightChild(AVLNode<Key,Value>* node, AVLNode<Key,Value>* parent);
    void rotateLeft(AVLNode<Key,Value>* node);
    void rotateRight(AVLNode<Key,Value>* node);
    void insertFix(AVLNode<Key,Value>* current, AVLNode<Key,Value>* parent);
    void removeFix(AVLNode<Key,Value>* current, char diff);
};

template<class Key, class Value>
bool AVLTree<Key, Value>::isLeftChild(AVLNode<Key,Value>* node, AVLNode<Key,Value>* parent)
{
    if (node == parent->getLeft())
    {
        return true;
    }
    
    return false;
}

template<class Key, class Value>
bool AVLTree<Key, Value>::isRightChild(AVLNode<Key,Value>* node, AVLNode<Key,Value>* parent)
{
    if (node == parent->getRight())
    {
        return true;
    }
    
    return false;
}

template<class Key, class Value>
void AVLTree<Key, Value>::rotateLeft(AVLNode<Key,Value>* node)
{
    AVLNode<Key,Value>* child = node->getRight();
    if (child->getLeft() == nullptr)
    {
        child->setLeft(node);
        child->setParent(node->getParent());
        if (node->getParent() != nullptr)
        {
            if (node == node->getParent()->getLeft())
            {
                node->getParent()->setLeft(child);
            }
            else
            {
                node->getParent()->setRight(child);
            }
        }
        node->setParent(child);
        node->setRight(nullptr);
        if (node == this->root_)
        {
            this->root_ = child;
        }
    }
    else
    {
        node->setRight(child->getLeft());
        child->getLeft()->setParent(node);
        child->setLeft(node);
        child->setParent(node->getParent());
        if (node->getParent() != nullptr)
        {
            if (node == node->getParent()->getLeft())
            {
                node->getParent()->setLeft(child);
            }
            else
            {
                node->getParent()->setRight(child);
            }
        }
        node->setParent(child);
        if (node == this->root_)
        {
            this->root_ = child;
        }
    }
}

template<class Key, class Value>
void AVLTree<Key, Value>::rotateRight(AVLNode<Key,Value>* node)
{
    AVLNode<Key,Value>* child = node->getLeft();
    if (child->getRight() == nullptr)
    {
        child->setRight(node);
        child->setParent(node->getParent());
        if (node->getParent() != nullptr)
        {
            if (node == node->getParent()->getLeft())
            {
                node->getParent()->setLeft(child);
            }
            else
            {
                node->getParent()->setRight(child);
            }
        }
        node->setParent(child);
        node->setLeft(nullptr);
        if (node == this->root_)
        {
            this->root_ = child;
        }
    }
    else
    {
        node->setLeft(child->getRight());
        child->getRight()->setParent(node);
        child->setRight(node);
        child->setParent(node->getParent());
        if (node->getParent() != nullptr)
        {
            if (node == node->getParent()->getLeft())
            {
                node->getParent()->setLeft(child);
            }
            else
            {
                node->getParent()->setRight(child);
            }
        }
        node->setParent(child);
        if (node == this->root_)
        {
            this->root_ = child;
        }
    }
}

/*
 * Recall: If key is already in the tree, you should 
 * overwrite the current value with the updated value.
 */
template<class Key, class Value>
void AVLTree<Key, Value>::insert (const std::pair<const Key, Value> &new_item)
{
    // TODO
    if (this->root_ == nullptr)
    {
        AVLNode<Key, Value>* newNode = new AVLNode<Key, Value>(new_item.first, new_item.second, nullptr);
        this->root_ = newNode;
        return;
    }
    
//    this->insert(new_item);
    
    AVLNode<Key, Value>* temp = static_cast<AVLNode<Key, Value>*>(this->root_);

    while (temp != nullptr)
    {
        if (new_item.first > temp->getKey())
        {
            if (temp->getRight() == nullptr)
            {
                AVLNode<Key, Value>* newNode = new AVLNode<Key, Value>(new_item.first, new_item.second, temp);
                temp->setRight(newNode);
                if (temp->getBalance() == 0)
                {
                    temp->updateBalance(1);
                    temp = temp->getRight();
                    AVLNode<Key, Value>* parent = temp->getParent();
                    insertFix(temp, parent);
                }
                else
                {
                    temp->setBalance(0);
                }
                break;
            }
            temp = temp->getRight();
        }
        else if(new_item.first == temp->getKey())
        {
            temp->setValue(new_item.second);
            break;
        }
        else
        {
//            temp->updateBalance(1);
            if (temp->getLeft() == nullptr)
            {
                AVLNode<Key, Value>* newNode = new AVLNode<Key, Value>(new_item.first, new_item.second, temp);
                temp->setLeft(newNode);
                if (temp->getBalance() == 0)
                {
                    temp->updateBalance(-1);
                    temp = temp->getLeft();
                    AVLNode<Key, Value>* parent = temp->getParent();
                    insertFix(temp, parent);
                }
                else
                {
                    temp->setBalance(0);
                }
                break;
            }
            temp = temp->getLeft();
        }
    }
}

template<class Key, class Value>
void AVLTree<Key, Value>::insertFix(AVLNode<Key,Value>* current, AVLNode<Key,Value>* parent)
{
    if (parent == nullptr)
    {
        return;
    }
    
    if (parent->getParent() == nullptr)
    {
        return;
    }
    
    AVLNode<Key,Value>* gParent = parent->getParent();
    
    if (isLeftChild(parent, gParent))
    {
        gParent->updateBalance(-1);
        if (gParent->getBalance() == 0)
        {
            return;
        }
        else if (gParent->getBalance() == -1)
        {
            insertFix(parent, gParent);
        }
        else if(gParent->getBalance() == -2)
        {
                //if parent is grandparents left child and child is parents then zig zig
                if (isLeftChild(current, parent))
                {
                    rotateRight(gParent);
                    gParent->setBalance(0);
                    parent->setBalance(0);
                }
                //else zig zag
                else
                {
                    rotateLeft(parent);
                    rotateRight(gParent);
                    if (current->getBalance() == -1)
                    {
                        parent->setBalance(0);
                        current->setBalance(0);
                        if (current->getRight() != nullptr)
                        {
                            current->getRight()->setBalance(1);
                        }
                    }
                    else if(current->getBalance() == 0)
                    {
                        parent->setBalance(0);
                        current->setBalance(0);
                        if (current->getRight() != nullptr)
                        {
                            current->getRight()->setBalance(0);
                        }
                    }
                    else
                    {
                        parent->setBalance(-1);
                        current->setBalance(0);
                        if (current->getRight() != nullptr)
                        {
                            current->getRight()->setBalance(0);
                        }
                    }
                }
        }
    }
    else
    {
        parent->getParent()->updateBalance(1);
        if (parent->getParent()->getBalance() == 0)
        {
            return;
        }
        else if (parent->getParent()->getBalance() == 1)
        {
            insertFix(parent, parent->getParent());
        }
        else if(parent->getParent()->getBalance() == 2)
        {
            //zig zig
            if (isRightChild(current, parent))
            {
                parent->getParent()->setBalance(0);
                rotateLeft(parent->getParent());
                parent->setBalance(0);
            }
            //zig zag
            else
            {
                rotateRight(parent);
                rotateLeft(current->getParent());
                if (current->getBalance() == 1)
                {
                    parent->setBalance(0);
                    current->setBalance(0);
                    if (current->getLeft() != nullptr)
                    {
                        current->getLeft()->setBalance(-1);
                    }
                }
                else if(current->getBalance() == 0)
                {
                    parent->setBalance(0);
                    current->setBalance(0);
                    if (current->getLeft() != nullptr)
                    {
                        current->getLeft()->setBalance(0);
                    }
                }
                else
                {
                    parent->setBalance(1);
                    current->setBalance(0);
                    if (current->getLeft() != nullptr)
                    {
                        current->getLeft()->setBalance(0);
                    }
                }
            }
        }
    }
    
    
}

/*
 * Recall: The writeup specifies that if a node has 2 children you
 * should swap with the predecessor and then remove.
 */
template<class Key, class Value>
void AVLTree<Key, Value>:: remove(const Key& key)
{
    // TODO
    AVLNode<Key, Value>* remNode = static_cast<AVLNode<Key, Value>*>(this->internalFind(key));
    
    if (remNode == NULL)
    {
        return;
    }
    
    
    if(remNode->getRight() != nullptr && remNode->getLeft() != nullptr)
    {
        AVLNode<Key, Value>* temp = static_cast<AVLNode<Key, Value>*>(this->predecessor(remNode));
        if (remNode == this->root_)
        {
            nodeSwap(remNode, temp);
            this->root_ = temp;
        }
        else
        {
            nodeSwap(remNode, temp);
        }
    }
    
    if (remNode->getRight() == nullptr && remNode->getLeft() == nullptr)
    {
        if (remNode == this->root_)
        {
            delete remNode;
            this->root_ = nullptr;
        }
        else if(remNode == remNode->getParent()->getLeft())
        {
            AVLNode<Key,Value>* parent = remNode->getParent();
            remNode->getParent()->setLeft(nullptr);
            delete remNode;
            removeFix(parent, 1);
        }
        else
        {
            AVLNode<Key,Value>* parent = remNode->getParent();
            remNode->getParent()->setRight(nullptr);
            delete remNode;
            removeFix(parent, -1);
        }
    }
    else if(remNode->getRight() != nullptr && remNode->getLeft() == nullptr)
    {
        if (remNode == this->root_)
        {
            remNode->getRight()->setParent(nullptr);
            this->root_ = remNode->getRight();
            delete remNode;
        }
        else if (remNode == remNode->getParent()->getLeft())
        {
            AVLNode<Key,Value>* parent = remNode->getParent();
            remNode->getParent()->setLeft(remNode->getRight());
            remNode->getRight()->setParent(remNode->getParent());
            delete remNode;
            removeFix(parent, 1);
        }
        else
        {
            AVLNode<Key,Value>* parent = remNode->getParent();
            remNode->getParent()->setRight(remNode->getRight());
            remNode->getRight()->setParent(remNode->getParent());
            delete remNode;
            removeFix(parent, -1);
        }
    }
    else if(remNode->getRight() == nullptr && remNode->getLeft() != nullptr)
    {
        if (remNode == this->root_)
        {
            remNode->getLeft()->setParent(nullptr);
            this->root_ = remNode->getLeft();
            delete remNode;
        }
        else if (remNode == remNode->getParent()->getLeft())
        {
            AVLNode<Key,Value>* parent = remNode->getParent();
            remNode->getParent()->setLeft(remNode->getLeft());
            remNode->getLeft()->setParent(remNode->getParent());
            delete remNode;
            removeFix(parent, 1);
        }
        else
        {
            AVLNode<Key,Value>* parent = remNode->getParent();
            remNode->getParent()->setRight(remNode->getLeft());
            remNode->getLeft()->setParent(remNode->getParent());
            delete remNode;
            removeFix(parent, -1);
        }
    }
}

template<class Key, class Value>
void AVLTree<Key, Value>::removeFix(AVLNode<Key,Value>* current, char diff)
{
    if (current == nullptr)
    {
        return;
    }
    
    char ndiff;
    
    if (current->getParent() != nullptr)
    {
        if (isLeftChild(current, current->getParent()))
        {
             ndiff = 1;
        }
        else
        {
            ndiff = -1;
        }
    }
    
    if (diff == -1)
    {
        if (current->getBalance() + diff == -2)
        {
            AVLNode<Key,Value>* parent = current->getParent();
            AVLNode<Key,Value>* child = current->getLeft();
            if (child->getBalance() == -1)
            {
                rotateRight(current);
                current->setBalance(0);
                child->setBalance(0);
                removeFix(parent, ndiff);
            }
            else if(child->getBalance() == 0)
            {
                rotateRight(current);
                current->setBalance(-1);
                child->setBalance(1);
            }
            else if(child->getBalance() == 1)
            {
                AVLNode<Key,Value>* gChild = child->getRight();
                rotateLeft(child);
                rotateRight(current);
                if (gChild->getBalance() == 1)
                {
                    current->setBalance(0);
                    child->setBalance(-1);
                    gChild->setBalance(0);
                }
                else if(gChild->getBalance() == 0)
                {
                    current->setBalance(0);
                    child->setBalance(0);
                    gChild->setBalance(0);
                }
                else if(gChild->getBalance() == -1)
                {
                    current->setBalance(1);
                    child->setBalance(0);
                    gChild->setBalance(0);
                }
                removeFix(parent, ndiff);
            }
        }
        else if(current->getBalance() + diff == -1)
        {
            current->setBalance(-1);
        }
        else if(current->getBalance() + diff == 0)
        {
            AVLNode<Key,Value>* parent = current->getParent();
            current->setBalance(0);
            removeFix(parent, ndiff);
        }
    }
    else if(diff == 1)
    {
        if (current->getBalance() + diff == 2)
        {
            AVLNode<Key,Value>* parent = current->getParent();
            AVLNode<Key,Value>* child = current->getRight();
            if (child->getBalance() == 1)
            {
                rotateLeft(current);
                current->setBalance(0);
                child->setBalance(0);
                removeFix(parent, ndiff);
            }
            else if(child->getBalance() == 0)
            {
                rotateLeft(current);
                current->setBalance(1);
                child->setBalance(-1);
            }
            else if(child->getBalance() == -1)
            {
                AVLNode<Key,Value>* gChild = child->getLeft();
                rotateRight(child);
                rotateLeft(current);
                if (gChild->getBalance() == -1)
                {
                    current->setBalance(0);
                    child->setBalance(1);
                    gChild->setBalance(0);
                }
                else if(gChild->getBalance() == 0)
                {
                    current->setBalance(0);
                    child->setBalance(0);
                    gChild->setBalance(0);
                }
                else if(gChild->getBalance() == 1)
                {
                    current->setBalance(-1);
                    child->setBalance(0);
                    gChild->setBalance(0);
                }
                removeFix(parent, ndiff);
            }
        }
        else if(current->getBalance() + diff == 1)
        {
            current->setBalance(1);
        }
        else if(current->getBalance() + diff == 0)
        {
            AVLNode<Key,Value>* parent = current->getParent();
            current->setBalance(0);
            removeFix(parent, ndiff);
        }
    }
    
}

template<class Key, class Value>
void AVLTree<Key, Value>::nodeSwap( AVLNode<Key,Value>* n1, AVLNode<Key,Value>* n2)
{
    BinarySearchTree<Key, Value>::nodeSwap(n1, n2);
    char tempB = n1->getBalance();
    n1->setBalance(n2->getBalance());
    n2->setBalance(tempB);
}


#endif
