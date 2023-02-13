#include <iostream>
#include <fstream>
#include <functional>
#include "llrec.h"
using namespace std;

/**
 * Reads integers (separated by whitespace) from a file
 * into a linked list.
 *
 * @param[in] filename
 *  The name of the file containing the data to read
 * @return
 *  Pointer to the linked list (or NULL if empty or the
 *  file is invalid)
 */
Node* readList(const char* filename);

/**
 * Prints the integers in a linked list pointed to
 * by head.
 */
void print(Node* head);

/**
 * Deallocates the linked list nodes
 */
void dealloc(Node* head);


Node* readList(const char* filename)
{
    Node* h = NULL;
    ifstream ifile(filename);
    int v;
    if( ! (ifile >> v) ) return h;
    h = new Node(v, NULL);
    Node *t = h;
    while ( ifile >> v ) {
        t->next = new Node(v, NULL);
        t = t->next;
    }
    return h;
}

void print(Node* head)
{
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void dealloc(Node* head)
{
    Node* temp;
    while(head) {
        temp = head->next;
        delete head;
        head = temp;
    }
}

// -----------------------------------------------
//   Add any helper functions or
//   function object struct declarations
// -----------------------------------------------

struct isEven
{
    bool operator()(int x) { return x % 2 == 0; } };



int main(int argc, char* argv[])
{
    if(argc < 2) {
        cout << "Please provide an input file" << endl;
        return 1;
    }

    // -----------------------------------------------
    // Feel free to update any code below this point
    // -----------------------------------------------
    Node* head = readList(argv[1]);
    cout << "Original list: ";
    print(head);
    
    isEven x;
    head = llfilter(head, x);
    cout << "Original list: ";
    print(head);
    // Test out your linked list code
    Node* smaller;
    Node* larger;
    int pivot = 10;
    llpivot(head, smaller, larger, pivot);
    
    cout << endl << "Smaller list: ";
    print(smaller);
    
    cout << endl << "Larger list: ";
    print(larger);
    
    cout << endl << "Original list: ";
    print(head);
    
    
    smaller = llfilter(smaller, x);
    
    cout << endl << "Smaller list: ";
    print(smaller);

    dealloc(head);
    dealloc(smaller);
    dealloc(larger);
    
    return 0;

}