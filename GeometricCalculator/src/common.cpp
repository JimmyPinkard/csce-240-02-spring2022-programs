//
// Created by jimmy on 1/27/22.
//
#include "headers/common.h"
#include <iostream>

void fatal(const std::string &message)
{
    std::cerr << message << std::endl;
    std::flush(std::cerr);
    exit(1);
}