#include "sortedSingle.h"

// part a functions


sortedSingle::sortedSingle()
{
    headptr = nullptr;
}



sortedSingle::~sortedSingle()
{
    while (headptr != nullptr)
    {
        node* current = headptr;
        headptr = headptr->next;
        delete current;
    }
}



bool sortedSingle::find(int item)
{
    node* current = headptr;

    while (current != nullptr)
    {
        if (current->theItem == item)
        {
            return true;
        }

        current = current->next;
    }

    return false;
}



int sortedSingle::retrievePosition(int item)
{
    node* current = headptr;
    int pos = 1;

    while (current != nullptr)
    {
        if (current->theItem == item)
        {
            return pos;
        }

        current = current->next;
        pos++;
    }

    return 0;
}



int sortedSingle::size()
{
    node* current = headptr;
    int size = 0;

    while ( current != nullptr)
    {
        size++;
        current = current->next;
    }

    return size;
}



bool sortedSingle::empty()
{
    return headptr == nullptr;
}