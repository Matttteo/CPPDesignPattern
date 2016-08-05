#pragma once
#include <string>
class Widget{
public:
	Widget(std::string system) : style(system) {};
	virtual void Click() = 0;
	virtual void Insert() = 0;
protected:
	std::string style;
};