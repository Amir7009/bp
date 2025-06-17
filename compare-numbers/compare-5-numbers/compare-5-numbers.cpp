#include <iostream>
using namespace std;

int main (){
    int a, b, c, d, e, i, j;
    cout << "enter 5 numbers to compare.";
    for ( i=1 ; i<=5 ; i++ ){
        cout << "\n" << i << " :";
        cin >> j;
        a = (i==1)? j : a ;
        b = (i==2)? j : b ;
        c = (i==3)? j : c ;
        d = (i==4)? j : d ;
        e = (i==5)? j : e ;
    }
    i=1;
        while (i!=4){
              e = (e>=a)? e : a;
              e = (e>=b)? e : b;
              e = (e>=c)? e : c;
              e = (e>=d)? e : d;
              i=4;
        }
    cout << e << " is the larges number.";
}
