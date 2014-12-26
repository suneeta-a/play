#include "GamePlay.h"
#include "Dbg.h"

GamePlay::GamePlay()
{
}

GamePlay::~GamePlay()
{
}

std::vector< std::vector<int> > GamePlay::Generate(int level, int complexity)
{
	std::vector< std::vector<int> > res;

	switch(level)
	{
		case LEVEL_KIDS:
		{
			
			break;
		}
		case LEVEL_TEEN:
		case LEVEL_MIDDLE:
		case LEVEL_FATHER:
		case LEVEL_GRAND_FATHER:
		break;
		default:
		break;
	}
 	_INFO("[%s] Generating game.... \n", LOG_TAG);
	return res;
}
