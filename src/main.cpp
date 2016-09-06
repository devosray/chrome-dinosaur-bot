#include <iostream>
#include <gdk/gdk.h>

#include "ScreenContext.h"
#include "ScreenshotContext.h"

using namespace std;

int main()
{
	ScreenContext screen;
	ScreenshotContext* screenshot = screen.createScreenshotContext(0, 0, 10, 10);

	while (true)
	{
		int x, y;
		screen.getMouseLocationRoot(x, y);
		printf ("x=%d, y=%d\n", x,y);
	}

	delete screenshot;

	return 0;
}
