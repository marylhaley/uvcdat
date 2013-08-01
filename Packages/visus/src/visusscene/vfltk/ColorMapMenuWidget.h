// generated by Fast Light User Interface Designer (fluid) version 2.1000

#ifndef ColorMapMenuWidget_h
#define ColorMapMenuWidget_h
#include "vfltk/SharedValueMenu.h"
#include "VisusColorMap.h"
#include "VisusDefaultColorMaps.h"
#include "vfltk/FLTKSubWindow.h"
#include <fltk/Choice.h>
#include <fltk/Item.h>

class ColorMapMenuWidget : public SharedValueMenu<VisusColorMap>  {
public:
  ColorMapMenuWidget(pVisusGroup node,fltk::Window* parent=NULL) ;
  ColorMapMenuWidget(VisusColorMap& map,fltk::Window* parent=NULL) ;
  ~ColorMapMenuWidget();
  FLTKSubWindow* createMenu(fltk::Window* parent);
  FLTKSubWindow *mMenu;
    fltk::Choice *mStyle;
private:
      inline void cb_Banded_i(fltk::Item*, void*);
      static void cb_Banded(fltk::Item*, void*);
      inline void cb_Greyscale_i(fltk::Item*, void*);
      static void cb_Greyscale(fltk::Item*, void*);
      inline void cb_Grey_i(fltk::Item*, void*);
      static void cb_Grey(fltk::Item*, void*);
      inline void cb_Blue_i(fltk::Item*, void*);
      static void cb_Blue(fltk::Item*, void*);
      inline void cb_Blue1_i(fltk::Item*, void*);
      static void cb_Blue1(fltk::Item*, void*);
      inline void cb_Gamma_i(fltk::Item*, void*);
      static void cb_Gamma(fltk::Item*, void*);
      inline void cb_Hot1_i(fltk::Item*, void*);
      static void cb_Hot1(fltk::Item*, void*);
      inline void cb_Hot2_i(fltk::Item*, void*);
      static void cb_Hot2(fltk::Item*, void*);
      inline void cb_Ice_i(fltk::Item*, void*);
      static void cb_Ice(fltk::Item*, void*);
      inline void cb_Light_i(fltk::Item*, void*);
      static void cb_Light(fltk::Item*, void*);
      inline void cb_LUT_i(fltk::Item*, void*);
      static void cb_LUT(fltk::Item*, void*);
      inline void cb_Rich_i(fltk::Item*, void*);
      static void cb_Rich(fltk::Item*, void*);
      inline void cb_Smooth_i(fltk::Item*, void*);
      static void cb_Smooth(fltk::Item*, void*);
      inline void cb_Custom_i(fltk::Item*, void*);
      static void cb_Custom(fltk::Item*, void*);
};
#endif