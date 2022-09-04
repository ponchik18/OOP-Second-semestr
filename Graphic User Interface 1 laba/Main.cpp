#define SFML_NO_DEPRECATED_WARNINGS
#include<iostream>
#include<string>
#include"ImageButton.h"
#include"PrintControl.h"
#include <SFML/Graphics.hpp>

int main()
{
    
    sf::RenderWindow window(sf::VideoMode(1200, 800), "Graphic user inteface!");
    sf::Texture image;
    if (!image.loadFromFile("images/puma.jpg")) {
        std::cout << "Error in findind photo" << std::endl;
        exit(1);
    }
    sf::Sprite sprite;
    sprite.setTexture(image);
    //sprite.setPosition(sf::Vector2f(100, 100));
    //sprite.scale(sf::Vector2f(1, 1.5));
    ///////////////////////full size screen
    sf::Vector2f targetSize(1200, 800);
    sprite.setScale(targetSize.x / sprite.getLocalBounds().width, targetSize.y / sprite.getLocalBounds().height);
    ///////////////////////////

   /* sf::Text text;
    
    string.setPosition(window.getSize().x / 2, window.getSize().y / 2);*/


    sf::Font font;
    if (!font.loadFromFile("font/Pacifico.ttf")) {
        std::cout << "Error in font photo" << std::endl;
        exit(1);
    }
    sf::Text string;
    string.setFont(font);
    string.setCharacterSize(24);
    string.setColor(sf::Color::Yellow);
    string.setStyle(sf::Text::Bold);
    string.setString("Hell from SFML text!");
    string.setPosition(window.getSize().x / 2.7f, window.getSize().y / 2);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(sprite);
        window.draw(string);
        

        window.display();
    }

    return 0;
}
// create printing photo using SFML