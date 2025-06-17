#include <string.h>
#include <iostream>
using namespace std;

void selectionsort ( char *List[], int n ){
    int i, j, k;
    char temp[15];
    for ( i=0 ; i < n ; i++ ){
        k = i;
        for ( j=i+1 ; j < n ; j++ )
            if ( strcmp ( List[j], List[k] ) < 0 )
                k=j;
        if ( k != i ){
            strcpy ( temp , List[i] );
            strcpy ( List[i] , List[k] );
            strcpy ( List[k], temp );
        }

    }
}

void readlist ( char *s[], int n ){
    int i;
    gets ( s[0] );
    for ( i=1 ; s[i-1][0] != '\0' && i < n ; i++ )
        gets ( s[i] );//if you press inter without any input breaks the string.
}

void printlist ( char *s[], int n ){
    int i;
    for ( i=0 ; i < n && s[i][0] != '\0' ; i++ ){
        puts ( s[i] );
        puts ( "\n" );
    }
}

int main (){
    char Class[26][15];
    int n;
    cout << "enter length of list: ";
    cin >> n;
    cout << "\nenter " << n << " names.\n";
    readlist ( Class, n );
    selectionsort ( Class, n );
    printlist ( Class, n );
    return 0;
}
