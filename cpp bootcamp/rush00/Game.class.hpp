#ifndef GAME_CLASS_HPP
# define GAME_CLASS_HPP

#include "Coord.class.hpp"
#include "Fire.class.hpp"
#include "Enemy.class.hpp"
#include "Player.class.hpp"
#include "ft_retro.hpp"

class Window {

public:
	Window(void);
	Window(Window & src);
	~Window();

	Window &operator=(Window &rhs);

	int	getPosX(void);
	int	getPosY(void);

	void	refreshSize(void);
	void	putSprite(Coord & s);
	static void	putSprite(Bullet & bullet, Enemy enemy[20]);
	void	putSprite(Enemy & s);
	void 	putSprite(Enemy enemy[20], Penis & P);
	void 	putBackground(void);
	void 	putLife(Penis & P);

	static int _x;
	static int _y;

private:
	static int 	_pos;
	int _score;
	std::string _boarderTop;
	std::string _boarderBottom;
	clock_t 	_clock;
};

#endif
