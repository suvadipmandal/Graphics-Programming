
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	
	sf::VertexArray tringlefan(sf::TrianglesFan, 5);

	tringlefan[0].position = sf::Vector2f(400,100);
	tringlefan[1].position = sf::Vector2f(200,100);
	tringlefan[2].position = sf::Vector2f(50,550);
	tringlefan[3].position = sf::Vector2f(550,550);
	tringlefan[4].position = sf::Vector2f(400,100);
	
	sf::Texture text;
	if(!text.loadFromFile("pic.jpg"))
	{
		std::cout<<"Error :("<<std::endl;
	}

	tringlefan[0].texCoords = sf::Vector2f(400,100);
	tringlefan[1].texCoords = sf::Vector2f(200,100);
	tringlefan[2].texCoords = sf::Vector2f(50,550);
	tringlefan[3].texCoords = sf::Vector2f(550,550);
	tringlefan[4].texCoords = sf::Vector2f(400,100);

	sf::Transform trans;
	trans.rotate(45 ,sf::Vector2f(200, 200));

	sf::RenderStates state;
	state.texture = &text;
	state.transform = trans;

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
		window.draw(tringlefan, state);
		window.display();
		}


	}
}