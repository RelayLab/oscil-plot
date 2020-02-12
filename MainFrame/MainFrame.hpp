#pragma once
#include "../main.hpp"

class MainFrame: public wxFrame
{
public:
    MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnAbout	(wxCommandEvent& event);
    void OnOpenFile	(wxCommandEvent& event);
	enum {
		ID_LOAD_CSV=wxID_HIGHEST + 1,
		ID_LOAD_LAYOUT,
		ID_NEW_LAYOUT
	};
};

