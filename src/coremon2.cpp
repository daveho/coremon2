#include <gtkmm/application.h>
#include <iostream>
#include "cpu.h"
#include "coremon2.h"

Coremon2Window::Coremon2Window() {
  set_default_size( 200, 100 );
  set_resizable( false );
}

Coremon2Window::~Coremon2Window() {

}


int main( int argc, char **argv ) {
  auto app = Gtk::Application::create( "io.github.daveho.coremon2" );
  return app->make_window_and_run< Coremon2Window >( argc, argv );

  // CPU cpu;

  // cpu.init();
  // int num_cores = cpu.get_num_cores();
  // std::cout << num_cores << " core(s)\n";
  // for ( int i = 0; i < 5; ++i ) {
  //   sleep( 1 );
  //   cpu.poll();
  //   for ( int j = 0; j < num_cores; ++j )
  //     std::cout << "user=" << cpu.get_user_time( j ) << ", sys=" << cpu.get_sys_time( j ) << "\n";
  // }

  return 0;
}
