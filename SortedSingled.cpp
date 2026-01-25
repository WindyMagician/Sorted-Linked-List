/******************************************************************************
 * @file    
 *
 * @brief   This file is reserved for future use.  Do not edit.
 *****************************************************************************/
#include "sortedSingle.h"

sortedSingle::sortedSingle(sortedSingle& l)
{
    node* src;
    node* dest;

    headptr = nullptr;
    if (l.headptr == nullptr)
    {    
        return;
    }

    headptr = new (nothrow) node;
    headptr->theItem = l.headptr->theItem;
    headptr->next = nullptr;

    src = l.headptr->next;
    dest = headptr;

    while (src != nullptr)
    {
        dest->next = new (nothrow) node;
        dest = dest->next;

        dest->theItem = src->theItem;
        dest->next = nullptr;
        
        src = src->next;
    }
}
