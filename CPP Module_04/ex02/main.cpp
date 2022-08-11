#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog* dog = new Dog();
	Cat* cat = new Cat();

	dog->writeMind();
	cat->writeMind();

	std::cout << "Make copy " << std::endl;

	Dog* dog1 = new Dog(*dog);
	Cat* cat1 = new Cat(*cat);

	delete dog;
	delete cat;

	dog1->writeMind();
	cat1->writeMind();

	delete dog1;
	delete cat1;

	return 0;
}