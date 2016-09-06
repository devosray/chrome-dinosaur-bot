#include <iostream>
#include <gdk/gdk.h>

#include "ScreenContext.h"
#include "ScreenshotContext.h"

using namespace std;

int main()
{
	ScreenContext screen;

	int x, y;
	while (true)
	{
		screen.getMouseLocationRoot(x, y);
		printf("%d:%d\n", x, y);
	}

	return 0;
}
