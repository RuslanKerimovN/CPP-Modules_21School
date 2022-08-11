#include <iostream>
#include "Base.h"
#include <cmath>
#include "A.h"
#include "B.h"
#include "C.h"

Base* generate(void) {
    Base* base;
    int random;

    srand(time(0));
    random = rand() % 3;
    std::cout << random << std::endl;
    switch (random) {
        case 0:
            base = new A;
            break;
        case 1:
            base = new B;
            break;
        case 2:
            base = new C;
            break;
    }
    return base;
}

void identify(Base* p) {
    try {
        if (dynamic_cast<A *>(p))
            std::cout << "ptr is A" << std::endl;
        else if (dynamic_cast<B *>(p))
            std::cout << "ptr is B" << std::endl;
        else if (dynamic_cast<C *>(p))
            std::cout << "ptr is C" << std::endl;
    } catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
}


int main() {
    Base* test = generate();
    identify(test);

    delete test;
    return 0;
}
