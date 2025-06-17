#include <iostream>
using namespace std;

int main (){
    int s[200];
    for ( int i=0 ; i < 200 ; i++ )
        cin >> s[i];
    for ( int i=199 ; i > -1 ; i-- )
        cout << s[i];
    return 0;
}
