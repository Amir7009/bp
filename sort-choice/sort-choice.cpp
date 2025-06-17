#include <iostream>
#define SIZE 50
using namespace std;

int main( ) {
	int s[SIZE], n, x, j, k, i;
	int tmp;
	cout << "enter input data end by -10000: ";
	cin >> x;
	n=0;
	while(x!=-10000){
		s[n++]=x;
		cin >> x;}
	for(i=0 ; i<n-1 ; i++){
	   k=i;
	   for(j=i+1 ; j<n ; j++)
	       if(s[j]>s[k])
	           k=j;
	       if(k!=i){
	       	x=s[k];
	       	s[k]=s[i];
	       	s[i]=x;
	       }
	}
    cout << "\nsorted list!!!\n";
	for (i=0 ; i<n ; i++)
	     cout << s[i] << "\n";
	return 0;
} // this program sorts the inputed list descending.warning: maximum list size is 50 numbers!
