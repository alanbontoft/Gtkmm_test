#include "gtkmm.h"

class MainWindow : public Gtk::Window
{
public:    
    MainWindow();

private:
<<<<<<< HEAD
    void on_btn_increase_click();
    void on_btn_decrease_click();
    void on_btn_reset_click();
    void show_message();
    
=======
    void on_button_click();
>>>>>>> main
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