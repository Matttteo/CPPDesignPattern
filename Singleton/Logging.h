#pragma once
#ifndef LOGGING_H
#define LOGGING_H
class Logging
{
public:

	~Logging();
	static Logging* getInstance();
	void loggingInformation();
	static Logging*  instance;
private:
	Logging();
	
};

#endif