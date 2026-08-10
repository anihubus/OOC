#include <iostream>
using namespace std;

int main(){
    int y = 10;

    // myref is a reference to y.
    int& myref = y;

    // changing value of y to 20
    y = 30;
    cout << "value of y is " << y << endl;
    cout << "value of myref after change in value of y is: "
         << myref << '\n';

    return 0;
}