int numDecodings(string A) 
{
    int dp[A.size()+5];
    for(int i=0;i<A.size()+5;i++)
        dp[i]=0;
    dp[0]=1;
    if(A[0]=='0')
        return 0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]=='0' && (A[i-1]>'2' || A[i-1]=='0'))
            return 0;
        if(A[i]!='0')
            dp[i]=dp[i-1];
        int x=1;
        if(i!=1)
            x=dp[i-2];
        if(A[i-1]!='0' && A[i-1]<='2')
        {
            if(A[i-1]=='1')
                dp[i]+=x;
            else if(A[i-1]=='2' && A[i]<='6')
                dp[i]+=x;
        }
    }
    return dp[A.size()-1];
}
