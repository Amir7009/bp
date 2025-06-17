#include <iostream>
#define SIZE 51
using namespace std;

int bisefu ( int s[], int n, int d ){
    int low=0, high=n-1, mid, pos=-1;
    while ( low <= high && pos==-1 ){
        mid = (high+low)/2;
        if ( d == s[mid] ){
            pos = mid;
            return pos;
        }
        else if ( d > s[mid] )
            low = mid+1;
        else
            high = mid-1;
    }
}//this function searchs the input data by comparing with the middle data in the list and at last minimizes the list to find the final data....this formula is called binary search.

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
    cout << bisefu (d, b, a);
}
