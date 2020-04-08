deque<ll> q;
while(1){
    ll t;
    cin>>t;
    if(t==1){   // insert
        ll x;
        cin>>x;
        ll count=0;
        while(!q.empty() && q.back()>x){
            q.pop_back();
            count++;
        }
        for(ll i=0;i<count+1;i++){
            q.push_back(x);
        }
    }
    else if(t==2){ // pop
        q.pop_front();
    }
    else if(t==3){  // get min
        cout<<q.front()<<endl;
    }
}
