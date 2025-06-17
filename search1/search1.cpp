#include <iostream>
using namespace std;
#define SIZE  51


void search1 ( int s[], int n, int d ){
int pos=-1;
for(int i=0 ; i<n&&pos==-1 ; i++)
    if (s[i]==d)
        pos=i;
if (pos!=-1)
    cout << "\nindex of data is: " << pos;
else
    cout << "\n" << d << "is not found";
}


int main (){
    int d[SIZE], a, b=0;
    cout << "enter your Ascending list end with -10000 (up to 50 data): \n";
    while ( a != -10000 ){
        cin >> a;
        if ( a != -10000 ){
            d[b]=a;
            b++;
        }
        else
            break;
    }
    b=b+1;
    cout << "inter a data for binary search: ";
    cin >> a;
    search1 (d, b, a);
}
