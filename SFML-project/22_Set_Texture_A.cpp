
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	sf::CircleShape circle(36);
	circle.setRadius(200);
	circle.setPointCount(300);

	sf::Texture text;
	if(!text.loadFromFile("pic.jpg"))
	{
		std::cout<<"Error :("<<std::endl;
	}
	circle.setTexture(&text);
	circle.setTextureRect(sf::IntRect(0, 0, 45, 5));

	while(window.isOpen())
	{
		sf::Event event;
		while( window.pollEvent(event))
		{
			switch( event.type )
			{
			case sf::Event::Closed:
					window.close( );
					break;
            }
		window.clear();
		window.draw(circle);
		window.display();
		}


	}
}