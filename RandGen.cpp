#include "RandGen.h"
#include "Main.h"
RandGen::RandGen(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(NULL, wxID_ANY, title, pos, size)
{
        Center();
        wxMenu* menuFile = new wxMenu;
        menuFile->AppendSeparator();
        menuFile->Append(wxID_EXIT);
        wxMenuBar* menuBar = new wxMenuBar;
        SetMenuBar(menuBar);
 start:
        display = new wxTextCtrl(this, -1, wxT("Would you like a random question?"), wxPoint(0, 0), wxSize(500, 50), wxTE_READONLY);
        yes = new wxButton(this, 10000, "Yes!", wxPoint(50, 50), wxSize(400, 50));
        no = new wxButton(this, 10001, "No", wxPoint(50, 100), wxSize(400, 50));
        this->Refresh();
        yes->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnButtonClick, this);
        no->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnButtonClick, this);
}
void RandGen::OnButtonClick(wxCommandEvent& evt)
{
    int x = evt.GetId() - 10000;
    if (x == 1)
    {
        Close(true);
    }
    else if(x == 0)
    {
        y = (rand() % 4);
        yes->Destroy();
        no->Destroy();
        if (y == 0)
        {
            display->SetLabel(wxString("Who is the main Character of the 2004 movie Mean Girls?"));
            ans1 = new wxButton(this, 10002, "Katie", wxPoint(50, 50), wxSize(400, 50));
            ans2 = new wxButton(this, 10003, "Katy", wxPoint(50, 100), wxSize(400, 50));
            ans3 = new wxButton(this, 10004, "Caddie", wxPoint(50, 150), wxSize(400, 50));
            ans4 = new wxButton(this, 10005, "Cady", wxPoint(50, 200), wxSize(400, 50));
            this->Refresh();
            ans1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
        }
        else if (y == 1)
        {
            display->SetLabel(wxString("Which makeup brand makes Super Stay Matte Ink lipstick?"));
            ans1 = new wxButton(this, 10002, "Profusion", wxPoint(50, 50), wxSize(400, 50));
            ans2 = new wxButton(this, 10003, "Maybelline", wxPoint(50, 100), wxSize(400, 50));
            ans3 = new wxButton(this, 10004, "Elf", wxPoint(50, 150), wxSize(400, 50));
            ans4 = new wxButton(this, 10005, "Clinique", wxPoint(50, 200), wxSize(400, 50));
            this->Refresh();
            ans1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
        }
        else if (y == 2)
        {
            display->SetLabel(wxString("Which mermaid tail brand makes the Fantasea monofins?"));
            ans1 = new wxButton(this, 10002, "MerTailor", wxPoint(50, 50), wxSize(400, 50));
            ans2 = new wxButton(this, 10003, "FinFun", wxPoint(50, 100), wxSize(400, 50));
            ans3 = new wxButton(this, 10004, "Sun Tail", wxPoint(50, 150), wxSize(400, 50));
            ans4 = new wxButton(this, 10005, "AquaMermaid", wxPoint(50, 200), wxSize(400, 50));
            this->Refresh();
            ans1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
        }
        else if (y == 3)
        {
            display->SetLabel(wxString("What switch game releases on June 24th 2022?"));
            ans1 = new wxButton(this, 10002, "Pokemon Scarlet", wxPoint(50, 50), wxSize(400, 50));
            ans2 = new wxButton(this, 10003, "Paradigm Paradoc", wxPoint(50, 100), wxSize(400, 50));
            ans3 = new wxButton(this, 10004, "Fire Emblem: Three Hopes", wxPoint(50, 150), wxSize(400, 50));
            ans4 = new wxButton(this, 10005, "Splatoon 3", wxPoint(50, 200), wxSize(400, 50));
            this->Refresh();
            ans1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
        }
        else
        {
            display->SetLabel(wxString("What is Gambit's actual name?"));
            ans1 = new wxButton(this, 10002, "Remy LeBeau", wxPoint(50, 50), wxSize(400, 50));
            ans2 = new wxButton(this, 10003, "Victor Creed", wxPoint(50, 100), wxSize(400, 50));
            ans3 = new wxButton(this, 10004, "Pietro Lensherr", wxPoint(50, 150), wxSize(400, 50));
            ans4 = new wxButton(this, 10005, "Wanda Maximoff", wxPoint(50, 200), wxSize(400, 50));
            this->Refresh();
            ans1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans3->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
            ans4->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnAnswerClick, this);
        }
    }
}
void RandGen::OnAnswerClick(wxCommandEvent& evt)
{
    int x = evt.GetId() - 10000;
    if (x == 2)
    {
        if (y == 2)
        {
            yesorno = true;
        }
       
    }
    else if (x == 3)
    {
        if (y == 1)
        {
            yesorno = true;
        }
    }
    else if (x == 4)
    {
        if (y == 3)
        {
            yesorno = true;
        }
    }
    else if (x == 5)
    {
        if (y == 0)
        {
            yesorno = true;
        }
        else if (y == 4)
        {
            yesorno = true;
        }
    }
    if (yesorno == true)
    {
        ans1->Destroy();
        ans2->Destroy();
        ans3->Destroy();
        ans4->Destroy();
        display->SetLabel(wxString("Congrats! You got it right! Would you like to try another?"));
        yes = new wxButton(this, 10000, "Yes!", wxPoint(50, 50), wxSize(400, 50));
        no = new wxButton(this, 10001, "No", wxPoint(50, 100), wxSize(400, 50));
        this->Refresh();
        yesorno = false;
        yes->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnButtonClick, this);
        no->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnButtonClick, this);
    }
    else
    {
        ans1->Destroy();
        ans2->Destroy();
        ans3->Destroy();
        ans4->Destroy();
        display->SetLabel(wxString("That is incorrect! Would you like to try another?"));
        yes = new wxButton(this, 10000, "Yes!", wxPoint(50, 50), wxSize(400, 50));
        no = new wxButton(this, 10001, "No", wxPoint(50, 100), wxSize(400, 50));
        this->Refresh();
        yes->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnButtonClick, this);
        no->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &RandGen::OnButtonClick, this);
    }
}
void RandGen::OnExit(wxCommandEvent& event)
{
    Close(true);
}
