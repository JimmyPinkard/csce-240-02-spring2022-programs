#include <iostream>

#include "headers/JSON.h"

std::string remove_whitespace(const std::string &text)
{
    std::string str;
    int length = text.length();
    for(int i = 0; i < length; ++i)
    {
        char c = text[i];
        switch(c)
        {
            case '\n':
            case '\t':
            case ' ':
            case ',':
            {
            } break;
            default:
            {
                str += c;
            } break;
        }
    }
    return str;
}

std::string sub_string(const std::string &text, const int start, const int end)
{
    return text.substr(start, end - start);
}

int get_value_index(int end, const std::string &text)
{
    int start = text.find(':', end) + 1;
    end = start + 1;
    switch(text[start])
    {
        case '[':
        {
            end = text.find(']', end);
        } break;
        case '{':
        {
            end = text.find('}', end);
        } break;
        case '\"':
        {
            ++start;
            end = text.find('"', end);
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
    const std::string copy = remove_whitespace(text);
    int length = copy.length(), start = 0, end;
    for(int i = 0; i < length || i < 0; i = start)
    {
        start = copy.find('"', start) + 1;
        end = copy.find('"', start + 1);
        std::string key = sub_string(copy, start, end);
        end = get_value_index(end, copy);
        std::string value = sub_string(copy, start, end);
        add(key, value);
        //Pass the comma
        i = start;
        start = end;
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
    for(const auto &pair : data)
    {
        str += "\"" + pair.first + "\": \"" + pair.second + "\"\n";
    }
    return str + "\n}";
}