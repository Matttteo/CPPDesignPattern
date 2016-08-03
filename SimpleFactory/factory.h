#pragma once
#ifndef FACTORY_H
#define FACTORY_H

#include "concreteProductA.h"
#include "concreteProductB.h"

class Factory
{
public:
	Factory();
	~Factory();
	Product* createProduct(std::string);
private:

};

#endif