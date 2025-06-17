#include <iostream>
using namespace std;

//it sums even numbers from 0 to n.
int main() {
int n,i,s=0;
cin >> n;
if (n!=0){
    for ( i=0 ; i<(n-2) ; i+=2){
         cout << i << " + ";
         s = s + i;
    }
    if (n%2==0){
        cout << n-2 << " + " << n << " = ";
        s = s + (2*n-2);
    }
    else {
        cout << n-1 << " = ";
        s = s + (n-1);
    }
}
cout << s;
}
