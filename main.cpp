#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Input lines to frame: " << std::endl;
    std::vector<std::string> lines;
    std::string s;

    // store original picture in vector
    while(getline(std::cin, s))
        lines.push_back(s);

    return 0;
}
