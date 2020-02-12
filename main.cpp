#include "main.hpp"

int main(int argc, char ** argv ){
	wxApp* pApp = new MainApp(); 
	wxApp::SetInstance(pApp);
	wxEntry(argc, argv);
}

