#include "ScreenshotContext.h"

ScreenshotContext::ScreenshotContext(const ScreenContext* context, int x, int y, int width, int height):
	screenContext(context),
	x(x),
	y(y),
	width(width),
	height(height)
{

}
