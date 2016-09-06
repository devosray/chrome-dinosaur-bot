#include <gdk/gdk.h>

#include "ScreenContext.h"
#include "ScreenshotContext.h"

ScreenContext::ScreenContext()
{
	gdk_init(0, NULL);

	// Grab all the default window classes
	this->default_screen = gdk_screen_get_default();
	g_assert(default_screen != 0);

	this->default_window = gdk_screen_get_root_window(this->default_screen);
	g_assert(default_window != 0);

	this->defualt_display = gdk_display_get_default();
	g_assert(defualt_display != 0);

	//this->default_seat = gdk_display_get_default_seat(this->defualt_display);
	//g_assert(default_seat != 0);

	this->device_manager = gdk_display_get_device_manager(this->defualt_display);
	g_assert(device_manager != 0);

	// Finally get the mouse device
	//this->mouse_device = gdk_seat_get_pointer(this->default_seat);	
	this->mouse_device = gdk_device_manager_get_client_pointer(this->device_manager);
	g_assert(mouse_device != 0);

}

ScreenshotContext* ScreenContext::createScreenshotContext(int x, int y, int width, int height)
{
	ScreenshotContext* screenshot = new ScreenshotContext(this, x, y, width, height);
	return screenshot;
}

void ScreenContext::getMouseLocationRoot(int &x, int &y)
{
	gdk_device_get_position(this->mouse_device, NULL, &x, &y);
}
