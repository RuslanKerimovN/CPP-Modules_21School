#include "MutantStack.h"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "______________________________________________\n" << std::endl;

    std::list<int> mstack2;
	mstack2.push_back(5);
	mstack2.push_back(17);
	std::cout << mstack2.back() << std::endl;
	mstack2.pop_back();
	std::cout << mstack2.size() << std::endl;
	mstack2.push_back(3); 
	mstack2.push_back(5); 
	mstack2.push_back(737);
    mstack2.push_back(0);
	std::list<int>::iterator it2 = mstack2.begin(); 
	std::list<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2) {
    	std::cout << *it2 << std::endl;
		++it2;
	}

    std::cout << "______________________________________________\n" << std::endl;

    MutantStack<std::string> lisT;
    lisT.push("My");
    lisT.push("Name");
    lisT.push("Is");
    lisT.push("James");
    lisT.push("Bond");

    std::cout << lisT.size() << std::endl;
    std::cout << lisT.top() << std::endl;
    lisT.pop();
    std::cout << lisT.size() << std::endl;
    std::cout << lisT.top() << std::endl;

    MutantStack<std::string>::iterator beginn = lisT.begin();
    MutantStack<std::string>::iterator ending = lisT.end();


    std::cout << "\n<<<<<<< WHILE >>>>>>>\n" << std::endl;

    while (beginn != ending)
        std::cout << *beginn++ << std::endl;

    return 0;
}