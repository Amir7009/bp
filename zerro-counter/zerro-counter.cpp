

int countzerroinmatrix ( int s[][10], int r ) {
    int i, j, cnt=0;
    for (i=0 ; i<r ; i++ )
        for ( j=0 ; j < 10 ; j++ )
            if ( s[i][j] == 0 )
            cnt++;
    return cnt;
}
