
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	
	sf::VertexArray lines(sf::LinesStrip, 5);

	lines[0].position = sf::Vector2f(400,100);
	lines[0].color = sf::Color::Blue;

	lines[1].position = sf::Vector2f(200,100);
	lines[1].color = sf::Color::Red;

	lines[2].position = sf::Vector2f(50,550);
	lines[2].color = sf::Color::Yellow;

	lines[3].position = sf::Vector2f(550,550);
	lines[3].color = sf::Color::Magenta;

	lines[4].position = sf::Vector2f(400,100);
	lines[4].color = sf::Color::Green;

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
		window.draw(lines);
		window.display();
		}


	}
}