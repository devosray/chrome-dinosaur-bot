#ifndef SCREENSHOT_CONTEXT_H
#define SCREENSHOT_CONTEXT_H

#include <gdk/gdk.h>

#include "ScreenContext.h"

/*
 * Simple class used to store a screenshot.
 * Main goal is to be an abstract interface between the main code and the
 * lower level API's to get the screenshot.
 *
 * Provides methods to access the color of a pixel on the screenshot and
 * to get the mouse pointer relative to the window or screenshot.
 */

class ScreenshotContext
{
	private:
		GdkPixbuf* screenshot;

		int x;
		int y;
		int width;
		int height;

	public:

		/*
		 * Create a new ScreenShot context starting at x and y (top left corner)
		 * with a width and a height.
		 */
		ScreenshotContext(ScreenContext* context, int x, int y, int width, int height);

		/*
		 * Get pixel color on screenshot relative to the screenshot itself.
		 * x=0, y=0 is the top left corner of the screenshot.
		 */
		void getPixelColor(int x, int y, int &red, int &green, int &blue);

		/*
		 * Get mouse location relative to the screenshot
		 */
		void getMouseLocation(int &x, int &y);

};

#endif
