#include "Array.h"
#include "Array.tpp"

int main() {
    Array<int> massInt(10);

    std::cout << "<<SIZE ARRAY>> " << massInt.size() << std::endl;
    for (int i = 0; i < massInt.size(); i++) {
        massInt[i] = i;
        std::cout << massInt[i] << std::endl;
    }

    try {
        std::cout << massInt[-4] << std::endl;
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        std::cout << massInt[100] << std::endl;
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }

    Array<int> check(massInt);
    Array<int> check2 = massInt;

    for (int i = 0; i < check.size(); i++) {
        std::cout << "CHECK " << check[i] << std::endl;
    }

    for (int i = 0; i < check.size(); i++) {
        std::cout << "CHECK2" << check[i] << std::endl;
    }

    Array<std::string> strings(5);

    strings[0] = "Hi";
    strings[1] = "My";
    strings[2] = "Name";
    strings[3] = "Is";
    strings[4] = "Slim Shady";

    for (int i = 0; i < strings.size(); i++) {
        std::cout << strings[i] << " ";
    }
    
    
}
