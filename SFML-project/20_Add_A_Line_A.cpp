
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	//sf::RectangleShape line;
	//line.setSize(sf::Vector2f(200,3));

	sf::Vertex line2[]=
	{
		sf::Vertex(sf::Vector2f(20,30)),
		sf::Vertex(sf::Vector2f(200,200))
	};

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
		window.draw(line2, 2, sf::Lines);
		window.display();
		}


	}
}