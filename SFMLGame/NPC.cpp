#include <NPC.h>

NPC::NPC(){

	if (!m_texture.loadFromFile("eggmansprite.png"))//TO LOAD THE SPRITE
	{
		std::cout << "error cant load from file" << std::endl;
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(480, 5);
};
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "Npc initialize" << endl;
	//for sone reason i didnt use this one 
}

void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* t_window)
{
	t_window->draw(m_sprite);
	cout << "NPC drawing" << endl;
}