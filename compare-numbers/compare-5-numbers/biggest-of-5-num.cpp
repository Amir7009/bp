#include <iostream>
using namespace std;

int main(){
int a, b, c, d, e, i;
cout << "a=";
cin >> a;
cout << "b=";
cin >> b;
cout << "c=";
cin >> c;
cout << "d=";
cin >> d;
cout << "e=";
cin >> e;
i=(a>b)? a : b;
i=(i>c)? i : c;
i=(i>d)? i : d;
i=(i>e)? i : e;
cout << i;
}
