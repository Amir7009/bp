#include <iostream>
using namespace std;

int fibbo (int n){
    if (n==1)
        return 1;
    if (n==0)
        return 0;
    return fibbo(n-1)+ fibbo(n-2);
}

int main (){
cout << fibbo (6);
}
