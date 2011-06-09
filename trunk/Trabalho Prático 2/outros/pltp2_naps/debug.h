#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
	#include <stdio.h>
	#define _debug(x) fprintf(stderr, "## DEBUG: %s", x)
#else 
	#define _debug
#endif

#endif
