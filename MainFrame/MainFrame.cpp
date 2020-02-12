#include "MainFrame.hpp"
#include <wx/dcclient.h>
#include <wx/sizer.h>

/*the constructor is the place where the parameters and the contents
 * of the window are defined */
MainFrame::MainFrame(
		const wxString& title,	//main window title
		const wxPoint& pos,		//main window position
		const wxSize& size)		//main window size
        : wxFrame(NULL, wxID_ANY, title, pos, size)//we send params to the ancestor
{

	/*******************MENUS******************/
	/*dropdown menu tab "HELP"*/
    wxMenu *menuHelp = new wxMenu;
	/* button "ABOUT" in the tab*/
    menuHelp->Append(wxID_ABOUT, "&About");
	
	/*tab FILE and it's buttons*/
    wxMenu *menuFile = new wxMenu;
	menuFile->Append(ID_LOAD_CSV,	"&Load csv...");
	menuFile->Append(ID_LOAD_LAYOUT,"&Load layout...");
	menuFile->Append(ID_NEW_LAYOUT,	"&New layout...");

	/*combine tabs into the menu*/
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );

	/*append the menu to the window*/
    SetMenuBar( menuBar );

	/*******************GRAPH AREA******************/
	/*to create a canvas for a graph, in wxWidgets we should put
	 * a sizer box into the frame, then a window wxPanel into the sizer,
	 * then use a special wxPaintDC class to store info about the drawing*/
    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
	//wxPanel * background_canvas = new wxPanel( this );
	Canvas * background_canvas = new Canvas( this );

	sizer -> Add ( 
			background_canvas,
			1,
			wxEXPAND);
	this->SetSizer(sizer);
    this->SetAutoLayout(true);


	/*enable actions*/
	Bind(
			wxEVT_COMMAND_MENU_SELECTED,
			&MainFrame::OnAbout,
			this,
			wxID_ABOUT);

	
}
