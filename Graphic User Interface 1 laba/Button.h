#pragma once
#include"Control.h"
#include<string>
enum TextColor{RED, GREEN, WHITE, YELLOW};

class Button: public virtual Control
{
private:
	TextColor color;
public:
	Button(TextColor color = WHITE, std::string id = "", int height = 0, int width = 0) : Control(id, height, width) {
		this->color = color;
	}
	std::string getAligment() {
		switch (color)
		{
		case RED:
			return "RED";
		case GREEN:
			return "GREEN";
		case WHITE:
			return "WHITE";
		case YELLOW:
			return "YELLOW";
		};
	}
	void setAligment(TextColor color) {
		this->color = color;
	}
};

