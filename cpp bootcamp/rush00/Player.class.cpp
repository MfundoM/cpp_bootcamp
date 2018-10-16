#include "Player.class.hpp"
#include "Game.class.hpp"
#include "ft_retro.hpp"

Penis::Penis(void) : Coord(" {}:)\n  ::-->\n {}:)", 0, 0), _life(3), _isShoot(true) {
	for (int i = 0; i < 50; i++) {
		this->_bullets[i] = NULL;
	}
}

Penis::Penis(int x, int y) : Coord(" {}:)\n  ::-->\n {}:)", x, y), _life(3), _isShoot(true)
{
	for (int i = 0; i < 50; i++) {
		this->_bullets[i] = NULL;
	}
}

Penis::Penis(Penis & src) : Coord(src) {
	*this = src;
}

Penis::~Penis(void) {
	for (int i = 0; i < 50; i++) {
		if (this->_bullets[i])
			delete this->_bullets[i];
	}
}

Penis &	Penis::operator=(Penis & src) {
	this->_x = src.getPosX();
	this->_y = src.getPosY();
	this->_name = src.getName();
	return *this;
}

void	Penis::shootBullet() {
	if (Penis::_isId >= 0) {
		if (this->_bullets[Penis::_isId]) {
			this->_bullets[Penis::_isId] = NULL;
			Penis::_isId = -1;
			this->_nbBullets--;
		}
	}
	if (this->_nbBullets < 50 && this->_isShoot) {
		for (int i = 0; i < 50; i++) {
			if (this->_bullets[i] == NULL) {
				this->_bullets[i] = new Bullet("-->", this->getPosX() + 10, this->getPosY() + 1, i);
				this->_nbBullets++;
				return;
			}
		}
	}
}

void	Penis::putBullets(Enemy enemy[20]) {
	for (int i = 0; i < 50; i++) {
		if (this->_bullets[i])
			Window::putSprite(*this->_bullets[i], enemy);
	}
}

int 	Penis::getLife(void) {
	return this->_life;
}

void 	Penis::minuslife(void) {
	this->_life -= 1;
}

int		Penis::_nbBullets = 0;
int		Penis::_isId = -1;
