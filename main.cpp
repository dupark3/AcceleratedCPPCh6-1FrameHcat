#include <iostream>
#include <string>
#include <vector>

#include "frame.h"
#include "hcat.h"
#include "width.h"

int main() {
    std::cout << "Input first set of lines to frame: " << std::endl;
    std::vector<std::string> firstPicture;
    std::string s;
    // Store first input in vector
    while(getline(std::cin, s))
        firstPicture.push_back(s);

    // Pass first picture to frame function, which will add asterisks around with padding, left-aligned
    std::vector<std::string> framedFirst = frame(firstPicture);

    // Print result of framing using iterators
    for(vec_iter i = framedFirst.begin(); i != framedFirst.end(); ++i)
        std::cout << *i << std::endl;

    // Store second input in vector
    std::cin.clear();
    std::cout << "Input second set of lines to horizontally concatenate: " << std::endl;
    std::vector<std::string> secondPicture;
    while(getline(std::cin, s))
        secondPicture.push_back(s);

    // Pass first and second pictures to hcat function, which will print both pictures next to each other.
    std::vector<std::string> hcatResult = hcat(firstPicture, secondPicture);

    for(vec_iter i = hcatResult.begin(); i != hcatResult.end(); ++i)
        std::cout << *i << std::endl;

    return 0;
}
