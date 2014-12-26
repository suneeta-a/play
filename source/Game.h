#ifndef __GAME_H__
#define __GAME_H__

#include <vector>

class Game
{
	private:
		std::vector< std::vector<int> > Generate(int level, int complexity);
	public:
		Game();
		~Game();
};

#endif	// __GAME_H__
