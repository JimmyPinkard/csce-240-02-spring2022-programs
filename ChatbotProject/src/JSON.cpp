#include <iostream>

#include "headers/JSON.h"

int get_value_index(int end, const std::string &text)
{
    int start = text.find(':', end) + 1;
    end = start + 1;
    switch(text[start])
    {
        case '[':
        {
            end = text.find("]", end);
        } break;
        case '{':
        {
            end = text.find("}", end);
        } break;
        case '\"':
        {
            ++start;
            end = text.find("\"", end);
        } break;
        case ' ':
        case '\n':
        case '\t':
        {
            end = get_value_index(++start, text);
        } break;
        default:
        {
            std::cerr << text[start];
            exit(1);
        }
    }
    return end;
}

JSON::JSON(const std::string &text)
{
    parse_json(text);
}

void JSON::parse_json(const std::string &text)
{
    unsigned int length = text.length();
    int start = 0, end;
    for(int i = 0; i < length;)
    {
        start = text.find("\"", start) + 1;
        end = text.find("\"", start + 1);
        std::string key = text.substr(start, end - start);
        end = get_value_index(end, text);
        std::string value = text.substr(start, end - start);
        add(key, value);
        start = i = end;
        std::cout << "Added {" << key << ", " << data[key] << "}\n";
    }
}

void JSON::add(const std::string &key, const std::string &value)
{
    data.insert({key, value});
}

std::string JSON::remove(const std::string &key)
{
    auto temp = data[key];
    data.erase(key);
    return temp;
}

std::string JSON::get(const std::string &key)
{
    return data[key];
}

void JSON::set(const std::string &key, const std::string &value)
{
    data[key] = value;
}

std::string JSON::to_string()
{
    std::string str = "{\n";
    for(const std::pair<std::string, std::string> &pair : data)
    {
        str += "\"" + pair.first + "\": \"" + pair.second + "\"\n";
    }
    return str + "\n}";
}