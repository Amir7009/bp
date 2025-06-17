#include <iostream>
using namespace std;

int main(){
    float a, b, res=0;
    int i;
    cout << "please enter two numbers:\n";
    cin >> a;
    cout << "\n";
    cin >> b;
    while ( i!=5 ){
        cout << "1.sum\n" << "2.subtract\n" << "3.multiply\n" << "4.apportion\n" << "5.Exit\n";
        cin >> i;
        res = (i==1)? a+b : res;
        res = (i==2)? a-b : res;
        res = (i==3)? a*b : res;
        res = (i==4)? a/b : res;
        if (i!=5)
            cout << "the result is: " << res << "\n";
    }
}
