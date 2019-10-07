#include "MyFrame.hpp"

void MyFrame::OnAbout(wxCommandEvent& event  )
{
    wxMessageBox( "This is a wxWidgets' Hello world sample",
                  "About Hello World", wxOK | wxICON_INFORMATION );
}

