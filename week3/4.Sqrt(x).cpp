int mySqrt(int x) {
        if(x==1) return 1;
        long long int i=1;
        while(i*i<=x) i++;
        return i-1;
    }