<<<<<<< HEAD
#include <gtkmm.h>
=======
#include <gtkmm-3.0/gtkmm.h>
>>>>>>> main
#include "mainwindow.h"

int main (int argc, char* argv[])
{
    auto app = Gtk::Application::create(argc, argv);
    MainWindow win;

    return app->run(win);
}