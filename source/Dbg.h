#ifndef __DBG_H__
#define __DBG_H__

#include <stdio.h>

#define LOG_TAG "Game"

#define _INFO( ... )	fprintf( stdout, __VA_ARGS__ )
#define _DBG( ... )	fprintf( stdout, __VA_ARGS__ )
#define _ERR( ... )	fprintf( stderr, __VA_ARGS__ )

#endif	// __DBG_H__
