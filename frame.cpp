#include <algorithm> // max
#include <iterator> // distance
#include <string>
#include <vector>

#include "frame.h"
#include "width.h"

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
