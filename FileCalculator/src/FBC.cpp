#include <fstream>
#include <iostream>
#include <string>
#include <exception>

void fatal(const std::string &message)
{
    std::cerr << message << std::endl;
    exit(1);
}

std::string read_file(const std::string &path)
{
    std::ifstream input(path);
    if(!input.is_open())
    {
        fatal("Couldn't open file");
    }
    std::string contents, buffer;
    while(std::getline(input, buffer))
    {
        contents += buffer + '\n';
    }
    return contents;
}

void operation(const char op, int num, int num2)
{
    int result;
        switch(op)
        {
            case '+': result = num + num2; break;
            case '-': result = num - num2; break;
            case '*': result = num * num2; break;
            case '/': {
                if(num2 == 0)
                {
                    fatal("Divide by 0");
                }
                result = num / num2;
                break;
            }
            case '%':
            {
                if(num2 == 0)
                {
                    fatal("Divide by 0");
                }
                result = num % num2;
                break;
            }
        }
    std::cout << num << op << num2 << " = " << result << std::endl;
}

void parse_input(const std::string &text)
{
    std::string sub;
    char op;
    int num, num2;
    int mode = 1;
    try
    {
        for(const char c : text)
        {
            switch(c)
            {
                case '\n':
                {
                    switch(mode)
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
                    ++mode;
                    sub = "";
                } break;
                case '+':
                case '-':
                case '*':
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
                    fatal("invalid input");
                }
            }
        }
    }
    catch(std::exception exception)
    {
        fatal(exception.what());
    }
    operation(op, num, num2);
}

int main(int argc, char **argv)
{
    std::string input_text = read_file("input.txt");
    parse_input(input_text);
    return 0;
}