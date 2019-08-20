int32_t main()
{
    she_taught_me_to_code

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vi v1(n),v2(n);
        input(v1,n);        // arrival time of each train
        input(v2,n);        // departure time of each train
        sort(all(v1));
        sort(all(v2));
        ll i=0,j=0,room=0,ans=0;
        while(i<n)
        {
            if(v1[i]<=v2[j])
            {
                i++;
                room++;
            }
            else
            {
                j++;
                room--;
            }
            ans=max(room,ans);
        }
        cout<<ans<<endl;
    }
}
