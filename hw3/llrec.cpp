#include "llrec.h"


//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
    if (head == NULL)
    {
        smaller = NULL;
        larger = NULL;
    }
    else if(head->val <= pivot)
    {
        llpivot(head->next, smaller, larger, pivot);
        head->next = smaller;
        smaller = head;
        head = NULL;
    }
    else if(head->val > pivot)
    {
        llpivot(head->next, smaller, larger, pivot);
        head->next = larger;
        larger = head;
        head = NULL;
    }
}
