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

			case sf::Event::MouseEntered:
				std::cout<<"Mouse enter in window:"<<std::endl;
				break;

			case sf::Event::MouseLeft:
				std::cout<<"Mouse  Exit in the window"<<std::endl;
				break;

			}
		}
		window.clear();

		window.display();
	}
}
