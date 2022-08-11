#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat& object);
		WrongCat& operator=(const WrongCat& object);
		~WrongCat();
		void	makeSound() const;
};

#endif