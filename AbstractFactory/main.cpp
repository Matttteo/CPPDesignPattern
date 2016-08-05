#include "windowswidgetfactory.h"
#include "linuxwidgetfactory.h"
#include "button.h"
#include "form.h"
#include <iostream>
int main() {
	std::cout << "Creat linux widget " << std::endl;
	LinuxWidgetFactory* f1 = new LinuxWidgetFactory();
	Button* button1 = f1->CreateButton();
	Form* form1 = f1->CreateForm();
	button1->Click();
	form1->Insert();

	std::cout << "Creat windows widget " << std::endl;
	WindowsWidgetFactory* f2 = new WindowsWidgetFactory();
	Button* button2 = f2->CreateButton();
	Form* form2 = f2->CreateForm();
	button2->Click();
	form2->Insert();
	return 0;
}