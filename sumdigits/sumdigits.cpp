#include <iostream>
using namespace std;

int sumdigits (int n){
    int i=0;
    while ( n !=0 ){
        i = i + n%10;
        n = n/10;
    }
    return i;
}
