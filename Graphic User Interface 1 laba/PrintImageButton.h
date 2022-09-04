#pragma once
#include"PrintButton.h"
#include"PrintImage.h"
#include"ImageButton.h"

class PrintImageButton: public PrintButton, public PrintImage
{
	void setPropertyInDrawbleObject(ImageButton& button) {
		//set property to 'drawable' according to image setting
	}
};

