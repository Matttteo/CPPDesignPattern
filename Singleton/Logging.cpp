#include "Logging.h"
#include <iostream>

 Logging* Logging::instance = NULL;

Logging::Logging() {

}

Logging::~Logging() {
	delete instance;
}

Logging* Logging::getInstance() {
	if (instance == NULL) {
		instance = new Logging();
	}
	return instance;
}

void Logging::loggingInformation() {
	std::cout << "some log..." << std::endl;
}