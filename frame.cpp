#include <string>
#include <vector>

#include "frame.h"

typedef std::string::iterator string_iter;
typedef std::vector<std::string>::iterator vec_iter;
typedef std::string::size_type string_size;

// Uses iterators to find the longest string in a vector.
string_size width(const std::vector<std::string>& vec){
    string_size maxLen = 0;
    while (vec_iter i = vec.begin(); i != vec.end(); ++i){
        maxLen = std::max(maxLen, std::distance(vec[i].begin(), vec[i].end()));
    }
}

std::vector<std::string> frame(const std:;vector<std::string>& original){
    std::vector<std::string> framed;
    string_size maxLen = width(original);

    return framed;
}
