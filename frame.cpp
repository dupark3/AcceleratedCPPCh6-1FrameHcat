#include <algorithm> // max
#include <iostream>
#include <iterator> // distance
#include <string>
#include <vector>

#include "frame.h"

typedef std::string::iterator string_iter;
typedef std::vector<std::string>::const_iterator vec_iter;
typedef std::string::size_type string_size;

// Uses iterators to find the longest string in a vector.
string_size width(const std::vector<std::string>& vec){
    string_size maxLen = 0;

    for(vec_iter i = vec.begin(); i != vec.end(); ++i){
        maxLen = std::max(maxLen, i->size());
    }

    return maxLen;
}

std::vector<std::string> frame(const std::vector<std::string>& original){
    std::vector<std::string> framed;
    string_size maxLen = width(original);

    std::string border = std::string(maxLen + 4, '*');

    // Add top border of asterisks
    framed.push_back(border);

    // Add body of frame
    for(vec_iter i = original.begin(); i != original.end(); ++i){
        std::string line = "* " +
                           *i +
                           (std::string(maxLen - i->size(), ' ')) +
                           " *";
        framed.push_back(line);
    }

    // Add bottom border of asterisks
    framed.push_back(border);

    return framed;
}
