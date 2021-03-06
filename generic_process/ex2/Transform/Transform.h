///////////////////////////////////////////////////////////////////////////////
//  Copyright 2007 Eric Niebler, David Abrahams.
//  Distributed under the Boost Software License, Version 1.0. 
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)

#ifndef TRANSFORM_H_BOOST_CONSULTING
#define TRANSFORM_H_BOOST_CONSULTING

// For each element E in the sequence, call
// fun(E), assign the result to *out,
// and increment out. When done, return the
// final value of out.
template<typename Iterator, typename Function, typename Output>
Output Transform(Iterator begin, Iterator end, Function fun, Output out)
{
    // TODO implement me
}

#endif
