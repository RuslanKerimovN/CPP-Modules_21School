#include "easyfind.h"

int main() 
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try {
        std::vector<int>::const_iterator iter = easyfind(vec, 5);
        std::cout << *iter << std::endl;
    } catch (const std::exception& ex) {
         std::cout << ex.what() << std::endl;
    }

    std::list<int> lists;
    lists.push_back(5);
    lists.push_back(4);
    lists.push_back(3);
    lists.push_back(2);
    lists.push_back(1);
    lists.push_back(5);

    try {
        std::list<int>::const_iterator i = easyfind(lists, 1);
        std::cout << *i << std::endl;
    } catch (const std::exception& ex) {
         std::cout << ex.what() << std::endl;
    }
}