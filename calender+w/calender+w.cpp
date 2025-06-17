#include <iostream>
using namespace std;

int main(){
int n, y, m, w, d, p, l, r, t, q;
cin >> n;
y=n/365, r=n%365;
p=r/31, l=p, t=p/6;
r=r%31, p=p%6;
r=(l-6)*t*31+r;
q=t*r, m=q/30;
r=r-30*m;
m=(1-t)*p+6*t+m, w=r/7, d=r%7;
cout << "Y= " << y << " M= " << m << " W= " << w << " D= " << d;
}
