#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrc = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrc->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	wrc->makeSound();

	delete j;
	delete i;
	delete meta;
	delete wrc;
	
	return 0;
}