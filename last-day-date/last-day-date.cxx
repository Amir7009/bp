#include <iostream>
using namespace std;

int main( ) {
	int y, m, d;
	cout << "year = ";
	cin >> y;
	cout << "month = ";
	cin >> m;
	cout << "day = ";
	cin >> d;
	d--;
	if ( d==0 and m>1 and m<8 ) {
		d=31;
		m--;
		}
	else if ( d==0 and m>7 and m<=12 ) {
		        d=30;
		        m--;
		        }
		    else if ( d==0 and m==1 )
		                if ( (y-1)%4!=3 ) {
		                	d=29;
		                	m=12;
		                	y--;
		                	}
		                else {
		                	d=30;
		                	m=12;
		                	y--;
		                    }
	cout << "\n yesterday date was " << y << " / " << m << " / " << d;	                    
}