#include "mainwindow.h"
#include <iostream>

using namespace std;
// using namespace sigc;

MainWindow::MainWindow()
{
    initWindow();
}

<<<<<<< HEAD
/*
    Handler for increase button click
*/
void MainWindow::on_btn_increase_click()
{
    _total++;

    show_message();
}

/*
    Handler for decrease button click
*/
void MainWindow::on_btn_decrease_click()
{
    if (_total > 0)
    {
        _total--;
        show_message();
    }
}

/*
    Handler for reset button click
*/
void MainWindow::on_btn_reset_click()
{
    _total = 0;

    show_message();
}

/*
    Update label with message
*/
void MainWindow::show_message()
{
    _msg = Glib::ustring::sprintf("Button clicked %d times", _total);
=======
void MainWindow::on_button_click()
{
    _msg = Glib::ustring::sprintf("Button clicked %d times", ++_total);
>>>>>>> main

    cout << _msg << endl;

    _messageLabel->set_text(_msg);
}

<<<<<<< HEAD
/*
    Initialise window and widgets
*/
=======
>>>>>>> main
void MainWindow::initWindow()
{

   _btnIncrease = new Gtk::Button("Inc");
   _btnDecrease = new Gtk::Button("Dec");
<<<<<<< HEAD
   _btnReset = new Gtk::Button("Reset");
=======
>>>>>>> main
   _messageLabel = new Gtk::Label();

   _box = new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 10);
   _box->set_margin_left(50);
   _box->set_margin_right(50);
   _box->set_margin_top(50);
   _box->set_margin_bottom(50);

   this->set_default_size(600, 400);
<<<<<<< HEAD
   this->set_title("Gtkmm Test");
   this->add(*_box);


//   _btnIncrease->set_size_request(100, 50);
   _btnIncrease->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_btn_increase_click));
   _btnIncrease->show();

   _btnDecrease->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_btn_decrease_click));
   _btnDecrease->show();

   _btnReset->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_btn_reset_click));
   _btnReset->show();
=======
   this->set_title("Gtkmm C++");
   // this->set_border_width(200);
   this->add(*_box);


   _btnIncrease->set_size_request(100, 50);

   _btnIncrease->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_click));
   _btnIncrease->show();

   //buttonDecrease->set_size_request(100, 50);
   //buttonDecrease->show();
>>>>>>> main

   _messageLabel->set_size_request(100, 100);
   _messageLabel->show();

   _box->add(*_btnIncrease);
<<<<<<< HEAD
   _box->add(*_btnDecrease);
   _box->add(*_btnReset);
   _box->add(*_messageLabel);
   _box->show();

   // show initial message
   show_message();
=======
   _box->add(*_messageLabel);
   _box->show();
   // window->add(*buttonDecrease);
>>>>>>> main
}
