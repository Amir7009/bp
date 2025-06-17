#include <iostream>
using namespace std;

int main( ){
int n , i , sum=0 ;
cin >> n ;
if ( n>=1 and n<=1000000){
    for( i=1 ; i<=n ; i++){
    sum=sum + i ;
    }
    cout << sum ;
}
else
cout << "ERROR";
}
