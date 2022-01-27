#include <iostream>

#include "headers/FBC.h"
#include "headers/io.h"
#include "headers/utils.h"

int main(int argc, char **argv)
{
    run(argc, argv);
    return 0;
}

void run(int argc, char **argv)
{
    std::string input_text = read_file("data/input.txt");
    std::string output = parse_input(input_text);
    write_file("data/output.txt", output);
    std::cout << output << std::endl;
    std::flush(std::cout);
}

std::string parse_input(const std::string &text)
{
    std::string sub;
    char op;
    int num, num2;
    int line = 1;
    for(const char c : text)
    {
        switch(c)
        {
            case '\n':
            {
                switch(line)
                {
                    case 1:
                    {
                        op = sub[0];
                    } break;
                    case 2:
                    {
                        num = std::stoi(sub, 0, 10);
                    }
                    case 3:
                    {
                        num2 = std::stoi(sub, 0, 10);
                    }
                }
                ++line;
                sub = "";
            } break;
            case '+':;
            case '-':;
            case '*':;
            case '/':
            {
                sub += c;
            } break;
            default:
            {
                if(std::isdigit(c))
                {
                    sub += c;
                    break;
                }
                fatal("invalid input on line " + std::to_string(line));
            }
        }
    }
    return operation(op, num, num2);
}

std::string operation(const char op, int num, int num2)
{
    std::string output = std::to_string(num) + ' ' + op + ' ' + std::to_string(num2) + " = ", result;
    switch(op)
    {
        case '+': result = std::to_string(num + num2); break;
        case '-': result = std::to_string(num - num2); break;
        case '*': result = std::to_string(num * num2); break;
        case '/':
        {
            if(num2 == 0)
            {
                fatal("Divide by 0");
            }
            int remainder = num % num2;
            num /= num2;
            result = std::to_string(num);
            if(remainder != 0)
            {
                result += " remainder " + std::to_string(remainder);
            }
        } break;
    }
    output += result;
    return output;
}

