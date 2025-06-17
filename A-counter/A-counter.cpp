#include <iostream>
using namespace std;

int count_of_A ( char *str ){
    int cnt=0, i;
    for ( i=0 ; str[i] ; i++ )
        if ( str[i] == 'A' || str[i] == 'a' )
        cnt++;
    return cnt;
}

int main (){

}
