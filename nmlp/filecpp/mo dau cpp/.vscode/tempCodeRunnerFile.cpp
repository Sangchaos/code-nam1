 int a[10] ;
    int i ;
    long long sum =0;
    for ( i= 1 ; i <=10; i++)
    {
        cin>> a[i] ;
    }
    for ( i=1 ; i<=10; i ++)
    {
        sum+= a[i] ;
    }
    cout<< "tong cac so " << sum;