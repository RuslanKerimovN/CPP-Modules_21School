#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "TEST1" << std::endl;
	int count = 10;
	Animal* massAnimal[count];

	for (int  i = 0; i < count; i++)
	{
		if (i < count/2)
			massAnimal[i] = new Dog();
		else
			massAnimal[i] = new Cat();
	}
	
	for (int i = 0; i < count; i++)
	{
		massAnimal[i]->makeSound();
		delete massAnimal[i];
	}

	std::cout << "\nTEST2\n" << std::endl;

	Dog* dog3 = new Dog();
	Cat* cat3 = new Cat();

	dog3->writeMind();
	cat3->writeMind();

	std::cout << "Make copy " << std::endl;

	Dog* dog4 = new Dog(*dog3);
	Cat* cat4 = new Cat(*cat3);

	delete dog3;
	delete cat3;

	dog4->writeMind();
	cat4->writeMind();

	delete dog4;
	delete cat4;

	return 0;
}