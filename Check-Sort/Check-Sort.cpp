#include <iostream>
using namespace std;

int checksort ( int s[], int n){
    if ( s[n-1] >= s[0]){
        for ( int i=0 ; i<=n-2 ; i++ )
            if ( s[i+1] < s[i] )
                return 0;
        return 1;
    }
    else {
        for ( int j=0 ; j<=n-2 ; j++ )
            if ( s[j+1] > s[j] )
                return 0;
        return -1;
    }
}// this function checks the list's sorting. if it was sorted Ascending or fixed, returns "1" but if it was sorted Descending returns "-1". when the list isn't sorted returns "0".



int main (){
    int d[4]={0,1,1,3};
    cout << checksort(d , 4);
}
