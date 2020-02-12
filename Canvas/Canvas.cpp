#include "Canvas.hpp"

/*the constructor of the Canvas class
 * inherits wxPanel's one*/
Canvas::Canvas(
			wxFrame * parent)
			:wxPanel(parent)
{
	/****************ACTIONS***************/
	/*we bind the redraw event to a window of the class
	 * the event appears when something changes*/
	Bind(
			wxEVT_PAINT,	
			&Canvas::OnPaint,
			this);
}

