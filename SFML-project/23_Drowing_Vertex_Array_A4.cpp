
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	
	sf::VertexArray tringlefan(sf::TrianglesFan, 5);

	tringlefan[0].position = sf::Vector2f(400,100);
	tringlefan[0].color = sf::Color::Blue;

	tringlefan[1].position = sf::Vector2f(200,100);
	tringlefan[1].color = sf::Color::Red;

	tringlefan[2].position = sf::Vector2f(50,550);
	tringlefan[2].color = sf::Color::Yellow;

	tringlefan[3].position = sf::Vector2f(550,550);
	tringlefan[3].color = sf::Color::Magenta;

	tringlefan[4].position = sf::Vector2f(400,100);
	tringlefan[4].color = sf::Color::Green;

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
		window.draw(tringlefan);
		window.display();
		}


	}
}