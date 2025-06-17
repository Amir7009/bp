#include <iostream>
using namespace std;

float pwr (int b, int e) {
    int i=1;
    float r=1;
    for (i=1; i<=abs(e); i++){
        r=r*b;
    }
    if(e<0)
        r=1/r;
    return r;
}

int main(){
    float s;
    s=pwr(8,2);
    cout <<s;

}
