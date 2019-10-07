#include "main.hpp"

int main(int argc, char ** argv ){
	wxApp* pApp = new MyApp(); 
	wxApp::SetInstance(pApp);
	wxEntry(argc, argv);
}

