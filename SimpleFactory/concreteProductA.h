#pragma once
#include <string>
#include <iostream>
#include "product.h"
class concreteProductA : public Product{
public:
	concreteProductA();
	void work();
	~concreteProductA();
};