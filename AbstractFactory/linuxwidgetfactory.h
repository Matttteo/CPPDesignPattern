#pragma once
#include "widgetfactory.h"
class LinuxWidgetFactory : public WidgetFactory {
public:
	LinuxWidgetFactory() {};
	Button* CreateButton() override;
	Form* CreateForm() override;
};