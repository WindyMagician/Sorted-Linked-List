#include "sortedSingle.h"

// part c functions 

bool sortedSingle::remove(int item)
{
    node* prev = headptr, *curr = headptr;

    if (headptr == nullptr)
    {
        return false;
    }

    //front of list
    if (headptr->theItem == item)
    {
        headptr = headptr->next;
        delete prev;

        return true;
    }

    //middle and end of list
    while (curr != nullptr && curr->theItem != item)
    {
        prev = curr;
        curr = curr->next;
    }

    //remove if current item is not nullptr
    if (curr != nullptr)
    {
        prev->next = curr->next;
        delete curr;
        return true;
    }

    return false;
}


void sortedSingle::clear()
{
    while (headptr != nullptr)
    {
        node* current = headptr;
        headptr = headptr->next;
        delete current;
    }
}
