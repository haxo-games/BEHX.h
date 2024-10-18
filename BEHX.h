/*****************************************************************************
 * Copyright (c) 2024 Kapitche, Haxo Games Inc.
 * All rights reserved.
 *
 * This file is part of the "Doctrina to C++ Programming" course.
 * 
 * This code is provided for educational purposes only, as part of the
 * learning materials on the Doctrina platform. It is intended for beginners
 * learning C++ programming.
 * 
 * Unauthorized copying, reproduction, or distribution of this code, in whole
 * or in part, without the express permission of Haxo Games Inc. is strictly
 * prohibited.
 *****************************************************************************/

#pragma once
#include <iostream>
#include <limits>
#include <typeinfo>
#include <string>

template <typename T> void print(T elem) 
{
    std::cout << elem;
}


template <typename T> void print(T elem, char separator) 
{
    std::cout << elem << separator;
}

template <typename T> void print(T elem, const std::string& separator) 
{
    std::cout << elem << separator;
}

template <typename T> long long findMinimumSize() 
{
    return std::numeric_limits<T>::min();
}

template <typename T> long long findMaximumSize() 
{
    return std::numeric_limits<T>::max();
}

template <typename T> void printTypeInfo() 
{
    std::cout << "Type: " << typeid(T).name() << "\n";
    std::cout << "Size: " << sizeof(T) << " bytes";
}

template <typename T> T add(T a, T b) 
{
    return a + b;
}

template <typename T> T subtract(T a, T b) 
{
    return a - b;
}

template <typename T> T multiply(T a, T b) 
{
    return a * b;
}

template <typename T> T divide(T a, T b) 
{
    if (b == 0) 
    {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}