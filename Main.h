#pragma once
#include "wx/wx.h"
#include "RandGen.h"
class myApp : public wxApp
{
public:
    RandGen* frame;
    virtual bool OnInit();
};