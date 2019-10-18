#ifndef NPC_H
#define NPC_H

#include <iostream>
#include "Character.h"
#include"SFML/Graphics.hpp"

using namespace std;

class NPC : public Character
{
public:
	NPC();
	~NPC();
	void initialize();
	void update();
	void draw(sf::RenderWindow* t_window);

	sf::Texture m_texture;
	sf::Sprite m_sprite;
};
#endif