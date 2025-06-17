int B_M_M (int i, int j){
    int g;
    do {
        g=i%j;
        i=j;
        j=g;
    } while ( g!=0 );
    return i;
}
