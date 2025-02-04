#ifndef COREMON2_H
#define COREMON2_H

#include <gtkmm/window.h>
#include "cpu.h"

class Coremon2Window : public Gtk::Window {
public:
    Coremon2Window();
    ~Coremon2Window() override;
};

#endif // COREMON2_H
