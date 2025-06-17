#include <iostream>
#include <math.h>
using namespace std;

float pwr (int b, int e) {
    int res = 1;
    int tmp = abs(e);
    while ( tmp ){
        res = res*b;
        tmp--;
    }
    if ( e < 0 )
        return (float)1/res;
    else
        return res;
}

int howmanydigits ( int a ){
    int i=0;
    while (a!=0){
        i=i+1;
        a=a/10;
    }
    return i;
}

int main (){
    int k;
    cout << "1-binary2desimal\n2-decimal2binary\n";
    cin >> k;
    switch (k) {
        case 2:
            int n, j, s[32];
            cout << "enter a decimal number: ";
            cin >> n;
            if ( n == 0 ){
                cout << 0;
                break;
            }
            for ( j=0 ; n > 0 ; j++ ){
                s[j] = n%2;
                n /= 2;
            }
            while ( j > 0 ){
                cout << s[j-1] << " ";
                j--;
            }
            break;

        case 1:
            int l=0, m;
            cout << "enter a binary number: ";
            cin >> m;
            int b = m;
            for ( int i=0 ; i < howmanydigits(m) ; i++ ){
                l = l + (b%10)*pwr( 2 , i );
                b /= 10;
            }
            cout << l;
            break;
    }
}
