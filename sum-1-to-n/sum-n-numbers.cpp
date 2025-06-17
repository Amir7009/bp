#include <iostream>
using namespace std;

int main (){

    int n , sum = 0;

    cin>>n;

    int list_of_numbers[n];
    for(int i = 0; i < n; i++){
        cin>> list_of_numbers[i];
    }

    for(int i = 0; i < n; i++){
        sum += list_of_numbers[i];
    }

    cout<< sum;

}
