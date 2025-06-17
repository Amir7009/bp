#include <iostream>
using namespace std;

//it prints the numbers that divisible by 3 but no divisible by 5.
int main( ){
int n, i;
cin >> n;
if( n<=1000000 and n>=1 )
   for (i=1 ; i<n; i++) {
	    if (0==i%3){
		    if (0!=i%5){
		    cout << i << " ";
	        }
	    }
    }
else
cout << "error";
}
