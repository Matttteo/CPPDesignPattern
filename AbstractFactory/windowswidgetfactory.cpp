#include "windowswidgetfactory.h"
#include "windowsbutton.h"
#include "windowsform.h"
Button * WindowsWidgetFactory::CreateButton()
{
	
	return new WindowsButton();
}

Form * WindowsWidgetFactory::CreateForm()
{
	return new WindowsForm();
}
