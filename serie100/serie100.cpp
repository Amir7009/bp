#include <iostream>
using namespace std;

int main (){
    float sum=0;
    int i=1;
    for (float k=1 ; k<=100 ; k++){
        sum = sum + i*1/(2*k-1);
        i = -1*i;
    }
    cout << 4*sum;
}
