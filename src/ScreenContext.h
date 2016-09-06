#ifndef SCREEN_CONTEXT_H
#define SCREEN_CONTEXT_H

#include <gdk/gdk.h>

/*
 * Class to make interface to the windowing system more abstract.
 * Very simple interface, will only add functions as needed.
 *
 * Also serves as factory for ScreenshotContexts
 */

// Forward declaration
class ScreenshotContext;

class ScreenContext
{
	private:
		GdkScreen*  default_screen;
		GdkWindow*  default_window;
		GdkDisplay* defualt_display;

		GdkSeat* default_seat;
		GdkDevice* mouse_device;
		

	public:

		ScreenContext();

		/*
		 * Get mouse location relative to the root window
		 */
		void getMouseLocationRoot(int &x, int &y);

		/*
		 * Factory for ScreenshotContext objects
		 */
		ScreenshotContext* createScreenshotContext(int x, int y, int width, int height);
};

#endif
