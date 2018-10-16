#include "Coord.class.hpp"

Coord::Coord(void) {
	_x = 0;
	_y = 0;
	_speed = 1;
	_name = "1";

	return ;
}

Coord::Coord(Coord &rhs) {
	this->_name = rhs.getName();
	this->_x = rhs.getPosX();
	this->_y = rhs.getPosY();

	return ;
}

Coord::Coord(std::string name, int x, int y) {
	_name = name;
	_x = x;
	_y = y;
	_speed = 1;

	return ;
}

Coord::~Coord(void) {
	return ;
}

Coord &Coord::operator=(Coord &rhs) {
	this->_name = rhs.getName();
	this->_x = rhs.getPosX();
	this->_y = rhs.getPosY();
	return *this;
}

void	Coord::setPosX(int x) {
	this->_x = x;
}

void	Coord::setPosY(int y) {
	this->_y = y;
}

int		Coord::getPosX(void) {
	return this->_x;
}

int 	Coord::getPosY(void) {
	return this->_y;
}

void 	Coord::moveXy(int x, int y) {
	this->_x = x;
	this->_y = y;
}

bool 	Coord::collision(int x, int y) {
	std::string str = this->getName();
	int 	tempX = this->getPosX();
	int 	TempY = this->getPosY();

	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] == '\n')
		{
			tempX = this->getPosX();
			TempY++;
		}
		else
		{
			if (x == tempX && y == TempY)
				return (true);
			tempX++;
		}
	}
	return (false);
}

void 	Coord::moveUp(void) {
	this->moveXy(this->_x, this->_y - 1);
}

void 	Coord::moveRight(void) {
	this->moveXy(this->_x + 1, this->_y);
}

void 	Coord::moveDown(void) {
	this->moveXy(this->_x, this->_y + 1);
}

void 	Coord::moveLeft(void) {
	this->moveXy(this->_x - 1, this->_y);
}

std::string Coord::getName(void) {
	return this->_name;
}
