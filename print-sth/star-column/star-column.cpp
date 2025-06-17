#include <iostream>
using namespace std;

int main(){
char s='*';
int i, j;
for ( i=1 ; i<=5 ; i++ ){
    for ( j=1 ; j<=5 ; j++ ){
        if ( i>=j )
        cout << s;
    }
    cout << "\n";
}
}
