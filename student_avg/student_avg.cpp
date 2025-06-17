#include <iostream>
using namespace std;
#define S 51

int main (){
    float s[S];
    static float avg=0;
    int n=0, i=0, t;
    cout << "enter student's grade up to 50 grades.(end by -1)\n";
    while ( t != -1 &&  i <= 51 ){
        cin >> s[i];
        t = s[i];
        n++;
        avg += s[i];
        i++;
    }
    avg -= 1;
    n--;
    avg /= n;
    for ( i=0 ; i < n ; i++ )
        cout << "score= " << s[i] << "\taverage= " << avg << "\tvariance= " << s[i]-avg << "\n";
}
