#include<iostream>
#include<gtkmm.h>

using namespace Gtk;
int main(int argc,char* argv[])
{
	Gtk::Main kit(argc,argv);
	Window wind;
	wind.set_default_size(300,300);
	Gtk::Main::run(wind);
	return 0;
}