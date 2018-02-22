#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Input first set of lines to frame: " << std::endl;
    std::vector<std::string> firstPicture;
    std::string s;
    // Store first input in vector
    while(getline(std::cin, s))
        firstPicture.push_back(s);

    // Pass first picture to frame function, which will add asterisks around with padding, left-aligned
    frame(firstPicture);

    // Store second input in vector
    std::cout << "Input second set of lines to horizontally concatenate: " << std::endl;
    std::vector<std::string> secondPicture;
    while(getline(std::cin, s))
        secondPicture(push_back(s));

    // Pass first and second pictures to hcat function, which will print both pictures next to each other.
    hcat(firstPicture, secondPicture);

    return 0;
}
