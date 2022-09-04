#pragma once

#include<string>
#include <list>
#include <SFML/Graphics.hpp>

class Window
{
private:
	int height;
	int width;
	std::string textWindow;
	std::list<sf::Drawable*> objects;

	void drawObjects(sf::RenderWindow& window) {
		for (auto it = objects.begin(); it != objects.end(); it++) {
			window.draw(**it);
		}
	}
	
public:
	Window(int height, int width, std::string textWindow) {
		this->height = height;
		this->width = width;
		this->textWindow = textWindow;
	}

	int getHeight() {
		return height;
	}

	int getWidth() {
		return width;
	}

	void setDrawableObject(sf::Drawable* object) {
		objects.push_back(object);
	}


	void startWindow() {
		sf::RenderWindow window(sf::VideoMode(height, width), textWindow);

		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}

			window.clear();

			drawObjects(window);
			
			window.display();
		}
	}
};