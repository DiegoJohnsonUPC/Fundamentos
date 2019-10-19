#pragma once
#include"SpriteBacth.h"
const int ZOMBIE_WIDTH = 60;
class Zombie
{
protected:
	glm::vec2 position;
	Color color;
public:
	Zombie();
	~Zombie();
	void draw(SpriteBacth& spritebatch);
	void init(glm::vec2 _position);
};

