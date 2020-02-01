    ll n;
    cin>>n;
    vi v(n);
    input(v,n);
    vi maxm(n);
    maxm[n-1]=n-1;
    ll ma=v[n-1];
    for(ll i=n-2;i>=0;i--){
        if(v[i]>ma){
            ma=v[i];
            maxm[i]=i;
        }
        else{
            maxm[i]=maxm[i+1];
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(v[i]<v[maxm[i]]){
            ans+=v[maxm[i]]-v[i];
        }
    }
    cout<<ans<<endl;
