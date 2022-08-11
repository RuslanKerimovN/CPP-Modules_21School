#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat& object);
		Cat& operator=(const Cat& object);
		virtual ~Cat();
		virtual void	makeSound() const;
};

#endif
