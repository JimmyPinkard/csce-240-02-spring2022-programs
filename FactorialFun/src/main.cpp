#include <iostream>
#include <string>
#include <exception>

#include "headers/factorial.h"

void fatal(const std::string &message);
int validate_input(const std::string &input);

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        fatal("Run program as \"FactorialFun <n>\" or \n\"FactorialFun <n> <r>\".\n"
              "All arguments must be positive integers.");
    }
    if(argc == 2)
    {
        int n = validate_input((std::string) argv[1]);
        std::cout << factorial(n) << std::endl;
    }
    if(argc == 3)
    {
        int n = validate_input((std::string) argv[1]), r = validate_input((std::string) argv[2]);
        std::cout << combination(n, r) << std::endl;
    }
    if(argc > 3)
    {
        fatal("More than 2 args");
    }
    return 0;
}

int validate_input(const std::string &input)
{
    if(input.find('.') < input.length())
    {
        fatal("Is a decimal");
    }
    else if(input.find('-') < input.length())
    {
        fatal("Is negative");
    }
    int num;
    try
    {
        num = std::stoi(input);
    }
    catch (std::exception e)
    {
        fatal(e.what());
    }
    return num;
}

void fatal(const std::string &message)
{
    std::cerr << message << std::endl;
    exit(1);
}