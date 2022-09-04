#pragma once

#include"Control.h"
#include <SFML/Graphics.hpp>

class PrintControl
{
protected:

	sf::Drawable* drawable;

public:
	sf::Drawable* getDrawable() {
		return drawable;
	}
	
};

