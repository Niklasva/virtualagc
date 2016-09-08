// -*- C++ -*-
//
// generated by wxGlade 0.6.8 on Sun Sep  4 07:21:33 2016
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef YADSKYB1MAIN_H
#define YADSKYB1MAIN_H

#include <wx/wx.h>
#include <wx/image.h>
#include "wx/intl.h"

#ifndef APP_CATALOG
#define APP_CATALOG "yaDSKYb1"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode
#include "yaDSKYb1.h"
// end wxGlade


class OnlyFrame: public wxFrame {
public:
  // begin wxGlade: OnlyFrame::ids
  // end wxGlade

  OnlyFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
  // begin wxGlade: OnlyFrame::methods
  void set_properties();
  void do_layout();
  // end wxGlade

  void extraSetup();

protected:
  // begin wxGlade: OnlyFrame::attributes
  wxStaticBitmap* dskyImage;
  wxPanel* imagePanel;
  // end wxGlade
}; // wxGlade: end class


#endif // YADSKYB1MAIN_H