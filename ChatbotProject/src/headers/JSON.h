#include <string>
#include <map>

#ifndef INC_240_JSON_H
#define INC_240_JSON_H


class JSON {
    std::map<std::string, std::string> data;
    void parse_json(const std::string &text);
    public:
    JSON(const std::string &text);
    void add(const std::string &key, const std::string &value);
    std::string remove(const std::string &key);
    std::string get(const std::string &key);
    void set(const std::string &key, const std::string &value);
    std::string to_string();
};


#endif //INC_240_JSON_H
