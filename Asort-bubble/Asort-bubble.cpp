void Des_sorter ( float s[], int n ){
    for ( int i=0 ; i <= n-2 ; i++ ){
        for ( int j=n-1 ; j > i ; j-- )
            if ( s[j-1] > s[j] ){
                float tmp=s[j];
                s[j]=s[j-1];
                s[j-1]=tmp;
            }
    }
}// this function sorts the list in form of descending by bubble sort.
