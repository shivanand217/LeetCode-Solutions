int Solution::fibsum(int A) {

    int fib[100];
    fib[0]=1;
    fib[1]=1;
    for( int i = 2; i < 46; i++ ){
        fib[i] = fib[i-1] + fib[i-2];
    }

    int p , ans = 0, x;

    for( int i=45; i >= 0; i-- ){
        if( A >= fib[i] ) {
            x = A/fib[i];
            A -= fib[i] * x;
            ans += x;
        }
    }
    return ans;
}
