#include "Zombie.h"
#include"ResourceManager.h"


Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

void Zombie::draw(SpriteBacth & spritebatch)
{
	static int textureID =
		ResourceManager::getTexture("Textures/zombie.png").id;
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(position.x, position.y, ZOMBIE_WIDTH, ZOMBIE_WIDTH);
	spritebatch.draw(destRect, uvRect, textureID, 0.0f, color);
}

void Zombie::init(glm::vec2 _position)
{
	position = _position;
}

