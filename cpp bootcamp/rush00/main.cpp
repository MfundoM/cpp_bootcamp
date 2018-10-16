#include "Game.class.hpp"
#include "Player.class.hpp"
#include "Fire.class.hpp"
#include "Enemy.class.hpp"
#include "ft_retro.hpp"

int main(void)
{
	srand(time(NULL));
	Window	w;
	Penis 	p(0, w.getPosY() / 2 - 1);
	Enemy  v[20], i;
	Bullet b;
	int		key;

	clear();
	while ((key = getch()) != 27 && p.getLife() > 0 && Window::_x > 50 && Window::_y > 10)
	{
		switch(key)
		{
			case KEY_UP:
			if (p.getPosY() > 1)
				p.moveUp();
				break;
			case KEY_DOWN:
			if (p.getPosY() < w.getPosY() - 4)
				p.moveDown();
				break;
			case KEY_RIGHT:
			if (p.getPosX() < w.getPosX() - 10)
				p.moveRight();
				break;
			case KEY_LEFT:
			if (p.getPosX() > 0)
				p.moveLeft();
				break;
			case 'p':
				while (1)
				{
						key = getch();
						if (key == 'p')
        		{
							refresh();
							break;
						}
   			}
				break;
			case ' ':
				p.shootBullet();
				break;
		}
		refresh();
		w.refreshSize();
		w.putSprite(p);
		p.putBullets(v);
		w.putSprite(v, p);
		move(1, 1);
		printw("%s", "Life: ");
		move(1, 11);
		printw("%s", "Score: ");
		move(1, 20);
		printw("%s", "Time: ");

	/*struct timeval t;
	struct timezone z;
	long int ut = t.tv_sec * 1000 + t.tv_usec / 1000;
	long int ut2 = t.tv_sec * 1000 + t.tv_usec / 1000;
	long int ut3 = t.tv_sec * 1000 + t.tv_usec / 1000;
	long int ut4 = t.tv_sec * 1000 + t.tv_usec / 1000;

	attron(COLOR_PAIR(1));
	std::string time_display = std::to_string(ut);
	mvprintw(1, 20, time_display.c_str());
	 ut += 1000;
	std::string time2_display = std::to_string(ut);
	mvprintw(1, 30, time2_display.c_str());
	attroff(COLOR_PAIR(1));
	refresh();*/

		w.putLife(p);
		w.putBackground();
		refresh();
	}
	/*if (p.getLife() == 0) {
		move(50, 50);
		printw("%s", "GAME OVER!!! YOU SUCK!!!");
		//printw("%s", "GAME OVER!!! YOU SUCK!!!");
	}*/
	endwin();

	return 0;
}
