#include <iostream>
using namespace std;

int main(){
int b,e;
cout<<"enter the num";
cin>>b;
cout<<"enter the pwr";
cin>>e;
    int i=1;
    float r=1;
    for (i=1; i<=abs(e); i++){
        r=r*b;
    }
if(e<0)
    r=1/r;
cout<< b << " pwr " << e << "=" <<r;
}
