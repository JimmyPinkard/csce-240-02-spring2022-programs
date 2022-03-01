#ifndef INC_240_BASEEMAILHEADERTYPE_H
#define INC_240_BASEEMAILHEADERTYPE_H

#include <string>
#include <vector>

class BaseEmailHeaderType {
protected:
    std::vector<std::string> cc;
    std::vector<std::string> to;
    std::string from;
};


#endif //INC_240_BASEEMAILHEADERTYPE_H