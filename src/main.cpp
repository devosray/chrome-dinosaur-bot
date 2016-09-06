#include <iostream>
#include <gdk/gdk.h>

#include "ScreenContext.h"
#include "ScreenshotContext.h"

using namespace std;

int main()
{
	ScreenContext screen;
	ScreenshotContext* screenshot = screen.createScreenshotContext(0, 0, 10, 10);

	delete screenshot;

	return 0;
}
