#pragma once
#include<string>
class Control
{
private:
	std::string id;
	int height;
	int width;
protected:
	Control(std::string id="", int height = 0, int width = 0) {
		this->id = id;
		this->height = height;
		this->width = width;
	}
public:
	std::string getId() {
		return id;
	}

	int getHeight() {
		return height;
	}

	int getWidth() {
		return width;
	}

	void setId(std::string id) {
		this->id = id;
	}

	void setHeight(int height) {
		this->height = height;
	}

	void setWidth(int width) {
		this->width = width;
	}

};

