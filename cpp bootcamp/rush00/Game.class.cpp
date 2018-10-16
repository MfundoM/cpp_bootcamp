#include "Game.class.hpp"
#include "ft_retro.hpp"

Window::Window(void) : _clock(clock()) {
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	nodelay(stdscr, TRUE);
	_y = getmaxy(stdscr);
	_x = getmaxx(stdscr);
	cbreak();

	start_color();

  init_pair(1, COLOR_BLACK, COLOR_RED);
  init_pair(2, COLOR_BLACK, COLOR_GREEN);

	int a;
	for(int x = 0; x < 1000; x += 2)
	{
		a = rand() % 20;
		if (a < 18) {
		//attron(COLOR_PAIR(1));
			_boarderTop.append(" ");

		}
		else
		{
		//attron(COLOR_PAIR(2));
			_boarderTop.append(" ");
		}
	}
	for(int x = 0; x < 1000; x += 2)
	{
		a = rand() % 20;
		if (a < 18)
			_boarderBottom.append(" ");
		else
			_boarderBottom.append(" ");
	}
}

Window::Window(Window & src) {
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	curs_set(0);
	cbreak();
	nodelay(stdscr, TRUE);
	_x = src.getPosX();
	_y = src.getPosY();
}

Window::~Window(void) {
	return ;
}

int 	Window::getPosX(void) {
	return this->_x;
}

int 	Window::getPosY(void) {
	return this->_y;
}

Window & Window::operator=(Window & rhs) {
	this->_y = rhs.getPosY();
	this->_x = rhs.getPosX();
	return *this;
}

void Window::refreshSize(void) {
	_y = getmaxy(stdscr);
	_x = getmaxx(stdscr);
}

void 	Window::putSprite(Coord & s) {
	std::string str = s.getName();
	int 	line  = 0;
	int 	col   = 0;
	Coord stmp1("         \n          \n    ", s.getPosX() + 1, s.getPosY());
	Coord stmp2("         \n          \n    ", s.getPosX() - 1, s.getPosY());
	Coord stmp3("         \n          \n    ", s.getPosX(), s.getPosY() + 1);
	Coord stmp4("         \n          \n    ", s.getPosX(), s.getPosY() - 1);

	if (s.getName() == " {}:)\n  ::-->\n {}:)")
	{
		putSprite(stmp1);
		putSprite(stmp2);
		if (s.getPosY() - 1 > 0)
			putSprite(stmp4);
		if (s.getPosY() + 1 < Window::_y - 3)
			putSprite(stmp3);
	}
	move(s.getPosY(), s.getPosX());
	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] == '\n')
		{
			line++;
			col = 0;
		}
		else if (s.getPosY() + line >= 0 && s.getPosX() + col >= 0 && s.getPosY() + line < _y && s.getPosX() + col < _x)
		{
			move(s.getPosY() + line, s.getPosX() + col);
			addch(str[i]);
			col++;
		}
		else
			col++;
	}
}

void 	Window::putSprite(Bullet & bullet, Enemy enemy[20]) {
			std::string str = bullet.getName();
			bullet.move();
			int 	line  = 0;
			int 	col   = 0;

			move(bullet.getPosY(), bullet.getPosX() - 2);
			addch(' ');

			move(bullet.getPosY(), bullet.getPosX());
			for (int i = 0; i < 20; i++) {
				if (bullet.collision(enemy[i].getPosX(), enemy[i].getPosY()))
				{
					move(bullet.getPosY(), bullet.getPosX() + 1);
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX() + 2);
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX() + 3);
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX() + 4);
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX() + 5);
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX());
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX() - 1);
					addch(' ');
					move(bullet.getPosY(), bullet.getPosX() - 2);
					addch(' ');
					enemy[i].reset();
					bullet.setPosX(Window::_x);
				}

			}
			for(int i = 0; str[i] != 0; i++)
			{
				if(str[i] == '\n')
				{
					line++;
					col = 0;
				}
				else if (bullet.getPosY() + line >= 0 && bullet.getPosX() + col >= 0 && bullet.getPosY() + line < _y && bullet.getPosX() + col < _x)
				{
					move(bullet.getPosY() + line, bullet.getPosX() + col);
					addch(str[i]);
					col++;
				}
				else
					col++;
			}
}

void 	Window::putSprite(Enemy enemy[20], Penis & P) {
	for(int i = 0; i < 20; i++)
	{
		if (!P.collision(enemy[i].getPosX(), enemy[i].getPosY()) && !P.collision(enemy[i].getPosX() + 4, enemy[i].getPosY()))
			putSprite(enemy[i]);
		else
		{
			Coord tmp("     ", enemy[i].getPosX(), enemy[i].getPosY());
			putSprite(tmp);
			enemy[i].reset();
			P.minuslife();
		}
	}
}

void 	Window::putSprite(Enemy & s) {
	std::string str = s.getName();
	move(s.getPosY(), s.getPosX() + 4);
	addch(' ');
	s.move();
	int 	line  = 0;
	int 	col   = 0;

	move(s.getPosY(), s.getPosX());
	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] == '\n')
		{
			line++;
			col = 0;
		}
		else if (s.getPosY() + line >= 0 && s.getPosX() + col >= 0 && s.getPosY() + line < _y && s.getPosX() + col < _x)
		{
			move(s.getPosY() + line, s.getPosX() + col);
			addch(str[i]);
			col++;
		}
		else
			col++;
	}
}

void 	Window::putBackground(void) {

    start_color();
    init_pair(1, COLOR_BLACK, COLOR_RED);
    init_pair(2, COLOR_BLACK, COLOR_GREEN);

	if (((20) * (clock() - _clock)) / CLOCKS_PER_SEC > 1)
    {
    	_clock = clock();
		int x = 0;
		for(int i = _pos; i < _x + _pos && i < (int)_boarderTop.size(); i++)
		{
			move(2, x);
			if (i > 1000) {
				attron(COLOR_PAIR(2));
				addch(_boarderTop[i - 1000]);
				attroff(COLOR_PAIR(2));
			} else {
				attron(COLOR_PAIR(2));
				addch(_boarderTop[i]);
				attroff(COLOR_PAIR(2));
			}
			x++;
		}
		x = 0;
		for(int i = _pos; i < _x + _pos && i < (int)_boarderBottom.size(); i++)
		{
			move(_y - 1, x);
			if (i > 1000) {
				attron(COLOR_PAIR(2));
				addch(_boarderBottom[i - 1000]);
				attroff(COLOR_PAIR(2));
			} else {
				attron(COLOR_PAIR(2));
				addch(_boarderBottom[i]);
				attroff(COLOR_PAIR(2));
			}
			x++;
		}
		_pos++;
		if (_pos > 1000)
			_pos = 0;
	}
}

void 	Window::putLife(Penis & P) {
	move(1, 7);
	printw("%d",P.getLife());
}

int Window::_pos = 0;
int Window::_x = 0;
int Window::_y = 0;
