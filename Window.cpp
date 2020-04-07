#include <iostream>
#include "Window.h"
#include <cstring>

using namespace std;

    Window::Window() : owner("none"), title("none"), color("none") {}

    void Window::print(){
    cout << "(" << owner << ", " << title << ", " << color << ")\n";}

    Window& Window::operator=(const string &a) {
    owner = a.substr(0, a.find(' '));
    title = a.substr(a.find(' ')+1, a.rfind(' ')-a.find(' ')-1);
    color = a.substr(a.rfind(' '), a.length());
    return *this;
}






