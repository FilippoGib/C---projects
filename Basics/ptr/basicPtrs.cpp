//basic pointer practice

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int v, *ptr;
    double x, *y;

    ptr = &v;
    y = &x;

    v= 19;
    x=1.333;

    cout <<ptr<<endl;
    cout <<*ptr<<endl;

    cout <<y<<endl;
    cout <<*y<<endl;

    *ptr= 7;
    int a= *ptr;
    cout <<v<<endl;
    cout <<a<<endl;

    return 0;
}
