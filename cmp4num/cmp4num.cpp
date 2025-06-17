#include <iostream>
using namespace std;

int main (){
    int a, b, c, d;
    cout << "enter 4 number: \na= ";
    cin >> a;
    cout << "\nb= ";
    cin >> b;
    cout << "\nc= ";
    cin >> c;
    cout << "\nd= ";
    cin >> d;
    if ( a==b && b==c && c==d ){
        cout << "all are equal.\n";
        return 0;
    }
    if ( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d ){
        cout << "none of them are equal.\n";
        return 0;
    }
    if ( ( a==b && b==c) || ( a==d && d==c) || ( a==b && b==d) || ( d==b && b==c ) ){
        cout << "three of them are equal.\n";
        return 0;
    }
    if ( a == b )
        if ( c == d ){
            cout << "two pair are equal.\n";
            return 0;
        }
        else {
            cout << "only two of them are equal.\n";
            return 0;
        }
    if ( a == c )
        if ( b == d ){
            cout << "two pair are equal.\n";
            return 0;
        }
        else {
            cout << "only two of them are equal.\n";
            return 0;
        }
    if ( a == d )
        if ( c == b ){
            cout << "two pair are equal.\n";
            return 0;
        }
        else {
            cout << "only two of them are equal.\n";
            return 0;
        }
    if ( b == c ){
        cout << "only two of them are equal.\n";
        return 0;
    }
    if ( b == d ){
        cout << "only two of them are equal.\n";
        return 0;
    }
        if ( d == c ){
        cout << "only two of them are equal.\n";
        return 0;
    }
}
