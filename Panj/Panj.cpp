#include <iostream>
using namespace std;

int sumdigit (int n){
    int i=0, j;
    while ( n!=0 ){
        j=n%10;
        i=i+j;
        n=n/10;
    }
    return i;
}
int main () {
    int n=1e5, r=1, s;
    while ( r!=0 ){
        n--;
        s=sumdigit (n);
        r=n%s;
    }
    cout << n;
}
