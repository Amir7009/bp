#include <iostream>
#include <math.h>
using namespace std;

int main (){
    float t, y, n, high, low, dif=0;
    cout << "how many days?\n";
    cin >> n;
    cout << "enter the temps:\n";
    cin >> y;
    low = y;
    high =y;
    for ( int i=2 ; i<=n ; i++ ){
        cin >> t;
        high = ( high > t )? high : t;
        low = ( low < t )? low : t;
        dif = ( dif > abs(t-y))? dif : abs(t-y);
        y=t;
    }
    cout << "low= " << low << "\thigh= " << high << "\tmax differance= " << dif;
    return 0;
}
