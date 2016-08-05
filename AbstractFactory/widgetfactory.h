#pragma once
#include "button.h"
#include "form.h"
class WidgetFactory {
	virtual Button* CreateButton() = 0;
	virtual Form* CreateForm() = 0;
};