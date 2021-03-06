///////////////////////////////////////////////////////////////////////////////
//  Copyright 2007 Eric Niebler, David Abrahams.
//  Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)

#include "./Array.h"
#include "./Deque.h"
#include "./List.h"
#include "./HashMultiSet.h"

#include "./Find.h"

namespace FindTest
{
    /////////////////////////////////////////////////////////////////////
    bool TestArray()
    {
        int array[] = { 0,1,2,3,4,5,6,7,8,9 };

        ArrayIterator iter = Find(array, array + 10, 5);
        if(iter != array + 5)
            return false;

        if(5 != Get(iter))
            return false;

        iter = Find(array, array + 10, -1);
        if(iter != array + 10)
            return false;

        return true;
    }

    /////////////////////////////////////////////////////////////////////
    bool TestDeque2()
    {
        Deque d;
        d.PushBack(-1);
        d.PushBack(0);
        d.PushBack(1);
        d.PushBack(2);
        d.PushBack(3);
        d.PushBack(4);
        d.PushBack(5);
        d.PushBack(6);
        d.PushBack(7);
        d.PushBack(8);
        d.PushBack(9);
        d.PopFront();

        Deque::Iterator iter = Find(d.Begin(), d.End(), 5);
        if(iter == d.End())
            return false;

        if(5 != Get(iter))
            return false;

        iter = Find(d.Begin(), d.End(), -1);
        if(iter != d.End())
            return false;

        return true;
    }

    /////////////////////////////////////////////////////////////////////
    bool TestList2()
    {
        List l;
        l.PushBack(-1);
        l.PushBack(0);
        l.PushBack(1);
        l.PushBack(2);
        l.PushBack(3);
        l.PushBack(4);
        l.PushBack(5);
        l.PushBack(6);
        l.PushBack(7);
        l.PushBack(8);
        l.PushBack(9);
        l.PopFront();

        List::Iterator iter = Find(l.Begin(), l.End(), 5);
        if(iter == l.End())
            return false;

        if(5 != Get(iter))
            return false;

        iter = Find(l.Begin(), l.End(), -1);
        if(iter != l.End())
            return false;

        return true;
    }
  
    /////////////////////////////////////////////////////////////////////
    bool TestHashMultiSet2()
    {
        HashMultiSet d;
        d.Insert(0);
        d.Insert(1);
        d.Insert(2);
        d.Insert(3);
        d.Insert(4);
        d.Insert(5);
        d.Insert(6);
        d.Insert(7);
        d.Insert(8);
        d.Insert(9);

        HashMultiSet::Iterator iter = Find(d.Begin(), d.End(), 5);
        if(iter == d.End())
            return false;

        if(5 != Get(iter))
            return false;

        iter = Find(d.Begin(), d.End(), -1);
        if(iter != d.End())
            return false;

        return true;
    }
}

bool TestFind()
{
    using namespace FindTest;

    if(!TestArray())
        return false;

    if(!TestDeque2())
        return false;

    if(!TestList2())
        return false;

    if(!TestHashMultiSet2())
        return false;

    return true;
}
