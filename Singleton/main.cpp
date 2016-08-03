#include "Logging.h"

int main() {
	Logging* log1 = Logging::getInstance();
	Logging* log2 = Logging::getInstance();
	log1->loggingInformation();
	log2->loggingInformation();
	return 0;
}