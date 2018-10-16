#include "Enemy.class.hpp"
#include "Game.class.hpp"
#include "ft_retro.hpp"

Enemy::Enemy(void) : Coord("<$", Window::_x + rand() % 400, 1 + (rand() % (Window::_y - 3))), _clock(clock()) {
	std::string str[3] = {"<#", "<-)", "<-"};
	int 		speed[3] = {10, 20, 30};
	int 		random = rand() % 3;

	this->_name = str[random];
	this->_speed = speed[random];

	return ;
}

Enemy::Enemy(int x, int y) : Coord(",<-$", x, y), _clock(clock()) {
	return ;
}

Enemy::~Enemy(void) {
	return ;
}

Enemy &Enemy::operator=(Enemy &rhs) {
	this->_x = rhs.getPosX();
	this->_y = rhs.getPosY();
	this->_name = rhs.getName();
	return *this;
}

void 	Enemy::move(void) {
	if (this->getPosX() > -4)
	{
		if (((_speed) * (clock() - _clock)) / CLOCKS_PER_SEC > 1)
	    {
	    	_clock = clock();
	    	_x--;
    	}
    }
    else
    	this->moveXy(Window::_x + rand() % 20, 1 + (rand() % (Window::_y - 2)));

		return ;

}

void 	Enemy::reset(void) {
	std::string str[3] = {"<$", "<#", "<-"};
	this->_x =  Window::_x + rand() % 400;
	this->_y = 1 + (rand() % (Window::_y - 3));
	int 		speed[3] = {10, 20, 30};
	int 		random = rand() % 3;

	this->_name = str[random];
	this->_speed = speed[random];
}
