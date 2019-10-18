#include <Game.h>
#include <SFML/Graphics.hpp>

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;

Game::Game(){}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();

	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");
}

void Game::run()
{
	initialize();
	player->initialize();
	npc->initialize();
	while (window->isOpen())
	{
		update();
		draw();
		collisons();
	}
}

void Game::update()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		player->update();
		npc->update();
	}

}

void Game::collisons()
{
	if (player->m_sprite.getGlobalBounds().intersects(npc->m_sprite.getGlobalBounds()))
	{
		player->m_sprite.setPosition(50, 400);
	}
}
void Game::draw()
{
	window->clear();
	player->draw(window);
	npc->draw(window);
	window->display();

}


