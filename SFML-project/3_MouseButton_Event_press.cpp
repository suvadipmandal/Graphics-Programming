#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
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
			case sf::Event::MouseButtonPressed:
				switch( event.key.code )
				{
				case sf::Mouse::Left:
					std::cout<<"You mouse Left button prassed"<<std::endl;
					break;
				case sf::Mouse::HorizontalWheel:
					std::cout<<"You mouse wheel prassed"<<std::endl;
					break;
				}
				std::cout<<"You mouse button prassed"<<std::endl;
				break;

			}
		}
		window.clear();

		window.display();
	}
}
