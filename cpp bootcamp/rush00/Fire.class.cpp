#include "Fire.class.hpp"
#include "Game.class.hpp"
#include "Player.class.hpp"
#include "ft_retro.hpp"

Bullet::Bullet(void) : Coord("->", 10, 1), _clock(clock()), _id(0) {
	this->move();
}

Bullet::Bullet(std::string form, int x, int y, int id) : Coord(form, x, y), _clock(clock()), _id(id) {
	this->move();
}

Bullet::Bullet(Bullet & src) : Coord(src) {
	*this = src;
}

Bullet::~Bullet(void) {

}

Bullet &	Bullet::operator=(Bullet & src) {
	this->_x = src.getPosX();
	this->_y = src.getPosY();
	this->_name = src.getName();
	return *this;
}

int			Bullet::getId() const {
	return this->_id;
}

void		Bullet::move() {
	if (this->_x < Window::_x) {
		if (((60) * (clock() - _clock)) / CLOCKS_PER_SEC > 1)
	    {
	    	_clock = clock();
	    	_x++;
    	}
    }
    else {
    	Penis::_isId = this->_id;
    }
}
