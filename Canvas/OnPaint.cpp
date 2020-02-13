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
    
    // Look at the wxDC docs to learn how to draw other stuff


	wxPoint zero(300,300);

    graph_object.SetBrush(*wxWHITE_BRUSH); // green filling
    graph_object.SetPen( *wxBLACK_DASHED_PEN ); // 5-pixels-thick red outline
	int width	= 300;
	int height	= 300;
	graph_object.DrawRectangle (zero.x,zero.y-width,width,height);

    graph_object.SetPen( *wxBLACK_PEN ); // 5-pixels-thick red outline
	csv_data * data = new csv_data(10);
	for ( int i=1  ; i < data -> x -> size() - 1; i++ ) {
		graph_object.DrawLine(
				zero.x + data -> x -> at(i-1),
				zero.y - data -> y -> at(i-1),
				zero.x + data -> x -> at(i)	,
				zero.y - data -> y -> at(i)	  );
	}
	delete data;
}

