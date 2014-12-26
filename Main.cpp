#include "src/Dbg.h"
#include "src/GamePlay.h"

void DisplayGame(std::vector< std::vector<int> > in)
{
	std::vector< std::vector<int> >::iterator itr;
	for(itr = in.begin(); itr != in.end(); ++itr)
	{
		std::vector<int>::iterator _itr;
		for(_itr = (*itr).begin(); _itr != (*itr).end(); ++_itr)
		{
			_DBG("[%d] ", *_itr); 
		}
		_DBG("\n");
	}
}

int main()
{
	GamePlay *gamePlay = new GamePlay();
	std::vector< std::vector<int> > out;
	out = gamePlay->Generate(0, 0);
	DisplayGame(out);
	return 0;
}
