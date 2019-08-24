// supports functions like pop, push and getmin in constant time

    ll m=100000;
    vi mi;
    vi st;
    while(1)
    {
        ll x;                           // 1 for push, 2 for pop, 3 for getmin
        cin>>x;
        if(x==1)
        {
            ll n;
            cin>>n;
            if(n<=m)
                mi.pb(n);
            st.pb(n);
        }
        if(x==2)
        {
            if(st.back()==mi.back())
                mi.pop_back();
            st.pop_back();
        }
        if(x==3)
        {
            cout<<mi.back()<<endl;
        }
    }
