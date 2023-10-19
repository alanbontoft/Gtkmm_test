#include "gtkmm.h"

class MainWindow : public Gtk::Window
{
public:    
    MainWindow();

private:
    void on_button_click();
    int _total = 0;
    Glib::ustring _msg;

    void initWindow();

    // buttons
    Gtk::Button *_btnIncrease;
    Gtk::Button *_btnDecrease;
    Gtk::Button *_btnReset;

    Gtk::Label *_messageLabel;

    Gtk::Box *_box;

};