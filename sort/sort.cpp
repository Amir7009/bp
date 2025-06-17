#include <iostream>
using namespace std;

#define S 51

void Des_sorter ( int s[], int n ){
    for ( int i=0 ; i <= n-2 ; i++ ){
        for ( int j=n-1 ; j > i ; j-- )
            if ( s[j-1] < s[j] ){
                int tmp=s[j];
                s[j]=s[j-1];
                s[j-1]=tmp;
            }
    }
}

void Asc_sorter ( int s[], int n ){
    for ( int i=0 ; i <= n-2 ; i++ ){
        for ( int j=n-1 ; j > i ; j-- )
            if ( s[j-1] > s[j] ){
                int tmp=s[j];
                s[j]=s[j-1];
                s[j-1]=tmp;
            }
    }
}

main (){
    int d[S], k=0, i, n, m;
    cout << "enter your list numbers end by -10000 (up to 50 data): \n";
    for ( i=0 ; i<=50 ; i++ ){
        cin >> n;
        if ( n != -10000 ){
            d[i]=n;
            k++;
        }
        else
            break;
    }
    cout << "how do you like to sort your input list?\n1-ascending\n2-descending\n";
    cin >> m;
    switch (m){
    case 1:
        Asc_sorter (d,k);
        break;
    case 2:
        Des_sorter (d,k);
        break;
    }
    for ( int j=0 ; j < k ; j++ )
        cout << d[j] << "\n";
}
