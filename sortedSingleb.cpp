#include "sortedSingle.h"



void sortedSingle::print(ostream& out, string seperator)
{
    node* current = headptr;

    while (current != nullptr)
    {
        out << current->theItem;
        
        if (current->next == nullptr)
        {
            return;
        }

        out << seperator;
        current = current->next;
    }
}



bool sortedSingle::insert(int item)
{
    //creating new node
    node* newNode = new (nothrow) node, * pre = headptr, * cur = headptr;

    //memory failing
    if (newNode == nullptr)
    {
        return false;
    }

    newNode->theItem = item;

    //empty list
    if (headptr == nullptr)
    {
        headptr = newNode;
        headptr->next = nullptr;
        return true;
    }

    //front of the list
    if (headptr->theItem >= newNode->theItem)
    {
        newNode->next = headptr;
        headptr = newNode;
        return true;
    }

    //middle of the list
    while (cur != nullptr && cur->theItem <= newNode->theItem)
    {
        pre = cur;
        cur = cur->next;
    }

    //insert where found
    pre->next = newNode;
    newNode->next = cur;
    return true;
}