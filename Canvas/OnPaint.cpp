#include "Canvas.hpp"

/*this method is called when the window is redrawed
 * and it's dynamically bound to the Canvas class instance*/
void Canvas::OnPaint(
		wxPaintEvent & event){

	/*according to the wxWidgets docs, we should create wxDC class instance
	 * each time we redraw the window
	 * with event.GetEventObject
	 * we pass the window handler to a canvas (wxPanel) */
	wxPaintDC graph_object(
			(wxWindow*) event.GetEventObject() );

    // draw some text
    graph_object.DrawText(wxT("Testing"), 40, 60); 
    
    // draw a circle
    graph_object.SetBrush(*wxGREEN_BRUSH); // green filling
    graph_object.SetPen( wxPen( wxColor(255,0,0), 5 ) ); // 5-pixels-thick red outline
    graph_object.DrawCircle( wxPoint(200,100), 25 /* radius */ );
    
    // draw a rectangle
    graph_object.SetBrush(*wxBLUE_BRUSH); // blue filling
    graph_object.SetPen( wxPen( wxColor(255,175,175), 10 ) ); // 10-pixels-thick pink outline
    graph_object.DrawRectangle( 300, 100, 400, 200 );
    
    // draw a line
    graph_object.SetPen( wxPen( wxColor(0,0,0), 3 ) ); // black line, 3 pixels thick
    graph_object.DrawLine( 300, 100, 700, 300 ); // draw line across the rectangle
    
    // Look at the wxDC docs to learn how to draw other stuff

}

