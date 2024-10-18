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

template <typename T> void print(T elem) 
{
    std::cout << elem;
}

template <typename T> T findMinimumSize() 
{
    if (T == typeid(char)) return (short)std::numeric_limits<T>::min()
    return std::numeric_limits<T>::min();
}

template <typename T> T findMaximumSize() 
{
    return std::numeric_limits<T>::max();
}