#pragma once
#include "widgetfactory.h"
class WindowsWidgetFactory: public WidgetFactory {
public:
	WindowsWidgetFactory() {};
	Button* CreateButton() override;
	Form* CreateForm() override;
};