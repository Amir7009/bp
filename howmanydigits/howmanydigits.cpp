#include <iostream>
using namespace std;

//it says the number that you input it how many digits have.
int main (){
    int a, i=0;
    cin >> a;
    while (a!=0){
        i=i+1;
        a=a/10;
    }
    cout << i;
}
