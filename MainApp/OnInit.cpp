#include "MainApp.hpp"

bool MainApp::OnInit()
{
    MainFrame *frame = new MainFrame( "Hello World", wxPoint(50, 50), wxSize(800, 800) );
    frame->Show( true );
    return true;
}


