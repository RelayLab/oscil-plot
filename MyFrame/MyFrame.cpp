#include "MyFrame.hpp"

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
{

    wxMenuBar *menuBar = new wxMenuBar;
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(ID_ABOUT, "&About");
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );

	Connect(
			ID_ABOUT,
			wxEVT_COMMAND_MENU_SELECTED,
			wxCommandEventHandler(MyFrame::OnAbout)   );
}
