#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include "Coord.class.hpp"
#include "ft_retro.hpp"

class Enemy : public Coord {

public:
	Enemy(void);
	Enemy(int x, int y);
	Enemy(Enemy & src);
	~Enemy(void);

	Enemy &operator=(Enemy &rhs);

	void	move(void);
	void 	reset(void);

private:
	clock_t _clock;
};

#endif
