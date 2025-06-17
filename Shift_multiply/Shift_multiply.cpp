#include <iostream>
using namespace std;

int main (){
    int x, y, tmp=0;
    cout << "enter two numbers:\nX= ";
    cin >> x;
    cout << "\nY= ";
    cin >> y;
    if ( x==0 || y==0 ){
        cout << "\nresult = " << 0;
        return 0;
    }
    while ( y != 1 ){
        tmp = tmp + x*(y%2);
        x *= 2;
        y /= 2;
    }
    cout << "\nresult = " << x+tmp << "\n";
    return 0;
}
