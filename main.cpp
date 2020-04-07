#include <iostream>
#include "Window.h"
#include <cstring>
using namespace std;

int main()
{
    Window win;
    win.print();
    win = "User Program Gray";
    cout << "win: ";
    win.print();


    return 0;
}
