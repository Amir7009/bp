#include <iostream>
using namespace std;

int inverse (int n){
    int inv=0;
    while (n){
        inv = inv*10 + n%10;
        n /= 10;
    }
    return inv;
}

int main (){
    cout << inverse (123);

}
