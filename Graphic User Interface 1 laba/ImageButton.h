#pragma once
#include"Image.h"
#include"Button.h"
class ImageButton: public Image,public Button
{
private:
	std::string content;
public:
	ImageButton(std::string content) {
		this->content = content;
	}
	std::string getContent() {
		return content;
	}
	void setConctent(std::string content) {
		this->content = content;
	}
};

