#include <iostream>
#include <iomanip>
#define SIZE 21
using namespace std;

int main( ){
	int m[SIZE][SIZE]={0};
	int r, c, n, k=1;
	cout << "enter size of magic square:";
	cin >> n;
	if (n%2==0){
		cout << "error";
		return 0;}
	r=0;
	c=n/2;
	m[r][c]=1;
	for (k=2 ; k<=n*n ; k++){
	      if (k%n==1)
	          r=(r+1)%n;
	      else
	          {
	          	r=(r==0)? n-1 : r-1;
	          	c=(c==0)? n-1 : c-1;
	          }
	      m[r][c]=k;
	}
	for (r=0 ; r<n ; r++){
		for (c=0 ; c<n ; c++)
		      cout << m[r][c] << "\t";
		      cout << "\n";
	}
    return 0;
}
