#include <string>
#include <vector>

#include "hcat.h"
#include "width.h"

std::vector<std::string> hcat(const std::vector<std::string>& first, const std::vector<std::string>& second){
    std::vector<std::string> ret;
    string_size maxLen = width(first);
    vec_iter i = first.begin();
    vec_iter j = second.begin();

    while(i != first.end() || j != second.end()){
        std::string temp;
        if (i != first.end()){
            temp.append(*i + std::string(maxLen - i->size(), ' '));
            ++i;
        } else
            temp.append(std::string(maxLen, ' '));

        if (j != second.end()){
            temp.append(' ' + *j);
            ++j;
        }

        ret.push_back(temp);
    }
    return ret;
}
