#include "MainFrame.hpp"

void MainFrame::OnAbout(wxCommandEvent& event  )
{
    wxMessageBox( "This is a wxWidgets' Hello world sample",
                  "About Hello World", wxOK | wxICON_INFORMATION );
}

