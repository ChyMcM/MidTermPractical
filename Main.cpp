#include "Main.h"
#include "RandGen.h"
wxBEGIN_EVENT_TABLE(RandGen, wxFrame)
EVT_MENU(wxID_EXIT, RandGen::OnExit)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(myApp);

bool myApp::OnInit()
{
    frame = new RandGen("MidTerm Practical", wxPoint(50, 50), wxSize(500, 300));
    frame->Show(true);
    return true;
}