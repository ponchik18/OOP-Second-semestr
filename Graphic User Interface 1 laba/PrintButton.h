#pragma once
#include"Button.h"
#include "PrintControl.h"
class PrintButton :public virtual PrintControl
{
public:

	void setPropertyInDrawbleObject(Button& button) {
		//set property to 'drawable' according to image setting
	}
};

