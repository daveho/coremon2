#include <gtkmm/application.h>
#include "coremon2.h"

Coremon2Window::Coremon2Window() {
    set_default_size( 200, 200 );
    set_resizable( false );
}

Coremon2Window::~Coremon2Window() {

}


int main( int argc, char **argv ) {
    auto app = Gtk::Application::create( "io.github.daveho.coremon2" );
    return app->make_window_and_run< Coremon2Window >( argc, argv );

    return 0;
}
