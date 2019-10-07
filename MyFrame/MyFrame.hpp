#pragma once
#include "../main.hpp"

class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnAbout(wxCommandEvent& event);
	enum {ID_ABOUT=wxID_HIGHEST + 1};
};

