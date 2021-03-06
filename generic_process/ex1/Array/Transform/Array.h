///////////////////////////////////////////////////////////////////////////////
//  Copyright 2007 Eric Niebler, David Abrahams.
//  Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)


#ifndef ARRAY_H_BOOST_CONSULTING
#define ARRAY_H_BOOST_CONSULTING

#include <cassert>
#include <cstdlib>
#include <climits>

// For each element E in the sequence, call
// (*pfun)(E), assign the result to *out,
// and increment out. When done, return the
// final value of out.
inline int* Transform(int* in, std::size_t size, int (*fun)(int), int* out)
{
    // TODO implement me
}

// Others will be working on these.
// Feel free to give them a crack, too,
// if you're feeling ambitious.
int* Find(int* in, std::size_t size, int value);
int& GetAt(int* in, int size, int i);

#endif
