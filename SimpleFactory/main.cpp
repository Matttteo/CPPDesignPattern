#include "factory.h"

int  main() {

	Factory* factroy = new Factory();
	Product* p1 = factroy->createProduct("A");
	p1->work();
	Product* p2 = factroy->createProduct("B");
	p2->work();
	return 0;
}