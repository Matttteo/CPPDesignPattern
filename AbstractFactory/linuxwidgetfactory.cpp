#include "linuxwidgetfactory.h"
#include "linuxbutton.h"
#include "linuxform.h"
Button * LinuxWidgetFactory::CreateButton()
{
	return new LinuxButton();
}

Form * LinuxWidgetFactory::CreateForm()
{
	return new LinuxForm();
}

