#include <SFML/Graphics.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>
#include"Cvijet.h";
using namespace std;
using namespace sf;



int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);
	sf::Clock clock1;

	float brzina = 100.f;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			

		}

		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}