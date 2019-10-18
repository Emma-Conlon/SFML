#include <Player.h>

Player::Player(){
	
	if (!m_texture.loadFromFile("rsz_1sonic.png"))//TO LOAD THE SPRITE
	{
		std::cout << "error cant load from file" << std::endl;
	}
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(50, 400);
	
};
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;
}
void Player::update()
{
	
	cout << "Player updating" << endl;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		m_sprite.move(-7, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		m_sprite.move(7, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		m_sprite.move(0, -7);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		m_sprite.move(0, 7);
	}
	
}
void Player::draw(sf::RenderWindow* t_window)
{

	t_window->draw(m_sprite);
	cout << "Player drawing" << endl;

}