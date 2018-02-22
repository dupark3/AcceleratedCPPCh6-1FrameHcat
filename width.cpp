#include <algorithm> // max
#include <string>
#include <vector>

#include "width.h"

typedef std::string::size_type string_size;
typedef std::vector<std::string>::const_iterator vec_iter;

// Uses iterators to find the longest string in a vector.
string_size width(const std::vector<std::string>& vec){
    string_size maxLen = 0;

    for(vec_iter i = vec.begin(); i != vec.end(); ++i){
        maxLen = std::max(maxLen, i->size());
    }

    return maxLen;
}

