#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

using namespace std;
class Window {
private:
    string owner;
    string title;
    string color;
public:
    Window();
    void print();
    Window& operator= (const string &a);

    } ;

#endif // WINDOW_H_INCLUDED
