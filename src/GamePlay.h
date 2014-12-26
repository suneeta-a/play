#ifndef __GAMEPLAY_H__
#define __GAMEPLAY_H__

#include <vector>

class GamePlay
{
	private:
		enum
		{
			LEVEL_KIDS,
			LEVEL_TEEN,
			LEVEL_MIDDLE,
			LEVEL_FATHER,
			LEVEL_GRAND_FATHER
		};
	public:
		GamePlay();
		~GamePlay();
		std::vector< std::vector<int> > Generate(int level, int complexity);
};

#endif	// __GAMEPLAY_H__
