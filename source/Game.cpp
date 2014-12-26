#include "Game.h"
#include "Dbg.h"

Game::Game()
{
	Generate(0, 0);
}

Game::~Game()
{
}

std::vector< std::vector<int> > Game::Generate(int level, int complexity)
{
	std::vector< std::vector<int> > res;
 	_INFO("[%s] Generating game.... \n", LOG_TAG);
	return res;
}
