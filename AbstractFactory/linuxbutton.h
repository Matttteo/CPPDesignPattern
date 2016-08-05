#pragma once
#include "button.h"
class LinuxButton : public Button {
public:
	LinuxButton() {};
	void Click() override;
};