#pragma once
#include"Control.h"


class Image:public virtual Control 
{
public:
	enum StretchStyle { FULL_SIZE, TO_ONE_SIDE };// enumination to assign style of stretching image

	enum StretchDirection { VERTICAL_DIRECTION, HORIZONTAL_DIRECTION };// enumination to assign direction of stretching image

	enum ImageType { CAT, DOG, PUMA };
private:
	Image::StretchDirection direction;
	Image::StretchStyle style;
	Image::ImageType picture;
public:
	
	Image(Image::StretchDirection direction = Image::StretchDirection::HORIZONTAL_DIRECTION, Image::StretchStyle style = FULL_SIZE, Image::ImageType picture=Image::ImageType::CAT , std::string id = "", int height = 0, int width = 0) : Control(id, height, width) {
		this->direction = direction;
		this->style = style;
		this->picture = picture;
	}

	std::string getDirection() {
		switch (direction)
		{
		case Image::StretchDirection::VERTICAL_DIRECTION:
			return "VERTICAL_DIRECTION";
		case Image::StretchDirection::HORIZONTAL_DIRECTION:
			return "HORIZONTAL_DIRECTION";
		};
	}
	std::string getStyle() {
		switch (style)
		{
		case FULL_SIZE:
			return "FULL_SIZE";
		case TO_ONE_SIDE:
			return "TO_ONE_SIDE";
		};
	}
	void setStyle(Image::StretchStyle style) {
		this->style = style;
	}
	void setDirection(Image::StretchDirection direction) {
		this->direction = direction;
	}

	std::string getPicture() {
		switch (picture)
		{
		case CAT:
			return "CAT";
		case DOG:
			return "DOG";
		case PUMA:
			return "PUMA";
		};
	}
};

