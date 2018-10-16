#ifndef FIRE_CLASS_HPP
# define FIRE_CLASS_HPP

#include "Coord.class.hpp"
#include "ft_retro.hpp"

class Bullet : public Coord {

public:
	Bullet(void);
	Bullet(std::string form, int x, int y, int id);
	Bullet(Bullet & src);
	~Bullet(void);

	Bullet &	operator=(Bullet & src);

	void		move();
	int			getId() const;

private:

	clock_t		_clock;
	int			_id;
};

#endif
