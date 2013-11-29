// generated by Fast Light User Interface Designer (fluid) version 2.1000

#include "TickMarksMenu.h"

inline void TickMarksMenu::cb_Done_i(fltk::Button*, void*) {
  mMenuWindow->destroy();
}
void TickMarksMenu::cb_Done(fltk::Button* o, void* v) {
  ((TickMarksMenu*)(o->parent()->user_data()))->cb_Done_i(o,v);
}
#include "BorderAxisMenuWidget.h"

TickMarksMenu::TickMarksMenu(pVisusTickMarks node) : FLTKNodeMenu<pVisusTickMarks>(node) {
  createWindow();
  mMenuWindow->show();
}

TickMarksMenu::~TickMarksMenu() {
  //delete mMenuWindow;
  //delete mTextEditor;
}

fltk::Window* TickMarksMenu::createWindow() {
  fltk::Window* w;
   {fltk::Window* o = mMenuWindow = new fltk::Window(350, 400, "Tick Marks Menu");
    w = o;
    o->set_vertical();
    o->shortcut(0xff1b);
    o->user_data((void*)(this));
    o->tooltip("Set tick marks attributes in this window");
    o->begin();
     {fltk::Group* o = mBorderAxisWidget = new fltk::Group(0, 0, 350, 350);
      o->set_vertical();
      o->labeltype(fltk::EMBOSSED_LABEL);
      o->textsize(11);
    }
     {fltk::Button* o = new fltk::Button(104, 365, 140, 27, "Done");
      o->callback((fltk::Callback*)cb_Done);
    }
    o->end();
    o->resizable(o);
  }
  mBorderAxisWidget->begin();
  addSubWindow(new BorderAxisMenuWidget(mNode->mAxis,mMenuWindow));
  mBorderAxisWidget->end();
  return  w;
}

bool TickMarksMenu::isActive() {
  return mMenuWindow->active();
}