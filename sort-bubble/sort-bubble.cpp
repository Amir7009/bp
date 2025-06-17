#include <iostream>
#define SIZE 50
using namespace std;

int main( ) {
	int s[SIZE], n, x, j, i;
	int tmp;
	cout << "enter input data end by -10000: ";
	cin >> x;
	n=0;
	while(x!=-10000){
		s[n++]=x;
		cin >> x;
	}
	for (i=0 ; i<n-1 ; i++)
	    for (j=n-1 ; j>i ; j--)
	        if(s[j]<s[j-1]){
	        	x=s[j];
	        	s[j]=s[j-1];
	        	s[j-1]=x;
	        }
	        cout << "\nsorted list!!!\n";
	        for (i=0 ; i<n ; i++)
	            cout << s[i] << "\n";
	        return 0;
}
