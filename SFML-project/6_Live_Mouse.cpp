
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
            }
		window.clear();

		window.display();
		}
		if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            std::cout<<"Left button Pressed so fire fire fire!!!!"<<std::endl;
        }
	}
}