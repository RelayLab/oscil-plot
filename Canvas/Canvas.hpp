#pragma once
#include "../main.hpp"

class Canvas
		:public wxPanel
{
    
public:
    Canvas(wxFrame* parent);
    void OnPaint(wxPaintEvent & event);
};



