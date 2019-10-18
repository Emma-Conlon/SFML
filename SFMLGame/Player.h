#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Character.h"
#include"SFML/Graphics.hpp"


using namespace std;

class Player : public Character
{
public:
	Player();
	~Player();
	void initialize();
	void update();
	void draw(sf::RenderWindow *t_window);

	
	sf::Sprite m_sprite;
	sf::Texture m_texture;
};
#endif