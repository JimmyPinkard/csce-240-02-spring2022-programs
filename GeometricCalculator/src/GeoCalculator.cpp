#include <iostream>

#include "headers/GeoCalculator.h"
#include "headers/io.h"

int main(int argc, char **argv)

{
    run(argc, argv);
    return 0;
}

void run(int argc, char **argv)
{
    std::string input_text = read_file("data/input.txt");
    std::vector<std::string> arguments = parse(input_text);
    Shape *shape = create_shape(arguments);
    write_file("data/output.txt", shape->to_string());
    std::cout << shape->to_string() << std::endl;
    delete shape;
}

std::vector<std::string> parse(const std::string &text)
{
    std::string sub;
    std::vector<std::string> substrings;
    unsigned int word_num = 1;
    for(const char c : text)
    {
        switch(c)
        {
            case '\n':
            case ' ':
            {
                substrings.push_back(sub);
                ++word_num;
                sub = "";
            } break;
            default:
            {
                if(std::isdigit(c) || (std::isalpha(c) && word_num == 1))
                {
                    sub += c;
                    break;
                }
                else
                {
                    fatal("invalid input at word number " + std::to_string(word_num));
                }
            }
        }
    }
    return substrings;
}

Shape *create_shape(const std::vector<std::string> &properties)
{
    std::string shape_name = properties[0];
    if(shape_name == "circle")
    {
        return new Circle(std::stod(properties[1], 0));
    }
    else if(shape_name == "rectangle")
    {
        return new Rectangle(std::stod(properties[1], 0), std::stod(properties[2], 0));
    }
    else if(shape_name == "triangle")
    {
        return new Triangle(std::stod(properties[1], 0), std::stod(properties[2], 0), std::stod(properties[3], 0));
    }
    fatal("Not valid type");
    //Will never happen
    return nullptr;
}