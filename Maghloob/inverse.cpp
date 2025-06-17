int inverse ( int n ){
    int i=0;
    while ( n!= 0 ){
        i = i*10 + n%10;
        n /= 10;
    }
    return i;
}
