#pragma once
#include "wx/wx.h"
class RandGen : public wxFrame
{
public:
	RandGen(const wxString& title, const wxPoint& pos, const wxSize& size);
	wxButton* yes;
	wxButton* no;
	int y;
	wxButton* ans1;
	wxButton* ans2;
	wxButton* ans3;
	wxButton* ans4;
	wxTextCtrl* display;
	void OnButtonClick(wxCommandEvent& evt);
	void OnAnswerClick(wxCommandEvent& evt);
	bool yesorno = false;
private:
	void OnExit(wxCommandEvent& event);
	wxDECLARE_EVENT_TABLE();
};