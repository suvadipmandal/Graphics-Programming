
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	
	sf::Sprite background;
	sf::Texture text;
	sf::View view(sf::FloatRect(0, 0, 1300, 1300));

	view.setCenter(sf::Vector2f(0,0));
	view.rotate(25);
	window.setView(view);
	
	if(!text.loadFromFile("pic.jpg"))
	{
		std::cout<<"Error :("<<std::endl;
	}
	background.setTexture(text);
	

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
		window.draw(background);
		window.display();
		}


	}
}