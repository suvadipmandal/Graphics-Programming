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
			case sf::Event::KeyPressed:
				std::cout <<"key hasbeen press" <<std::endl;
				
				switch( event.key.code )
				{
				case sf::Keyboard::A:
					std::cout << "you enter 'A'" << std::endl;
					break;
			
				}
				break;

			case sf::Event::KeyReleased:
				std::cout <<"*****Press key has been released******"<<std::endl;
				

				if(sf::Keyboard::Up||sf::Keyboard::Down||sf::Keyboard::Right||sf::Keyboard::Left)
					std::cout<<"#########You released Arrow Key#########"<<std::endl;
				break;
			}
		}
		window.clear();

		window.display();
	}
}