#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
			Animal();
			Animal(std::string type);
			Animal(const Animal& object);
			Animal& operator=(const Animal& object);
			virtual ~Animal();
			virtual void	makeSound() const;
			std::string		getType() const;
	protected:
			std::string type;
};

#endif