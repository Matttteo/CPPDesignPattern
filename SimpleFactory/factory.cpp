#include "factory.h"

Factory::Factory()
{
}

Factory::~Factory()
{
}

Product * Factory::createProduct(std::string name)
{
	if (name == "A") return new concreteProductA();
	if (name == "B") return new concreteProductB();
	return nullptr;
}
