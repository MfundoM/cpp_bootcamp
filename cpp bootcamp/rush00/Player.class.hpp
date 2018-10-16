#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

# include "Coord.class.hpp"
# include "Fire.class.hpp"
# include "Enemy.class.hpp"
# include "ft_retro.hpp"

class Penis : public Coord {

public:
	Penis(void);
	Penis(int x, int y);
	Penis(Penis & src);
	~Penis(void);

	Penis &	operator=(Penis & src);

	void 	HandleMovement();
	void	shootBullet();
	void 	putBullets(Enemy Enemy[20]);

	int 	getLife(void);
	void 	minuslife(void);

	static int _nbBullets;
	static int _isId;

private:
	int 	_life;
	int		_isShoot;
	Bullet	*_bullets[50];
};

#endif
