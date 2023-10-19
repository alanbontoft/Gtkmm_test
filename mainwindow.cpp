#include "mainwindow.h"
#include <iostream>

using namespace std;
// using namespace sigc;

MainWindow::MainWindow()
{
    initWindow();
}

void MainWindow::on_button_click()
{
    _msg = Glib::ustring::sprintf("Button clicked %d times", ++_total);

    cout << _msg << endl;

    _messageLabel->set_text(_msg);
}

void MainWindow::initWindow()
{

   _btnIncrease = new Gtk::Button("Inc");
   _btnDecrease = new Gtk::Button("Dec");
   _messageLabel = new Gtk::Label();

   _box = new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 10);
   _box->set_margin_left(50);
   _box->set_margin_right(50);
   _box->set_margin_top(50);
   _box->set_margin_bottom(50);

   this->set_default_size(600, 400);
   this->set_title("Gtkmm C++");
   // this->set_border_width(200);
   this->add(*_box);


   _btnIncrease->set_size_request(100, 50);

   _btnIncrease->signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_click));
   _btnIncrease->show();

   //buttonDecrease->set_size_request(100, 50);
   //buttonDecrease->show();

   _messageLabel->set_size_request(100, 100);
   _messageLabel->show();

   _box->add(*_btnIncrease);
   _box->add(*_messageLabel);
   _box->show();
   // window->add(*buttonDecrease);
}
