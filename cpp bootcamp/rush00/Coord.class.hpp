#ifndef COORD_CLASS_HPP
# define COORD_CLASS_HPP

#include "ft_retro.hpp"

class Coord {

public:
	Coord(void);
	Coord(Coord &rhs);
	Coord(std::string name, int x, int y);
	~Coord(void);

	Coord 		&operator=(Coord &rhs);

	void			setPosX(int x);
	void			setPosY(int y);
	void			moveXy(int x, int y);
	bool 			collision(int x, int y);
	void 			moveUp(void);
	void 			moveRight(void);
	void 			moveDown(void);
	void 			moveLeft(void);
	int 			getPosX(void);
	int				getPosY(void);
	std::string 	getName(void);

protected:
	int					_x;
	int 				_y;
	int 				_speed;
	std::string	_name;
};

#endif
