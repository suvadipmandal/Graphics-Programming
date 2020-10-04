
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	sf::Texture image;
	

	if(!image.loadFromFile("iTunes.png"))
	{
		std::cout<<"Error file:(" <<std::endl;
	}
	//sf::Sprite s(image);
	sf::Sprite img;
	img.setTexture(image);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		img.move(sf::Vector2f(50,70));
	}


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
		window.draw(img);
		window.display();
		}


	}
}