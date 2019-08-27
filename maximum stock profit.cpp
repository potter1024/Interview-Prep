int maxProfit(const vector<int> &A) 
{
    int n=A.size(),ans=0;
    int last=-1;
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(last!=-1 && A[i]-last>0)
                ans+=A[i]-last;
        }
        else if(A[i]<A[i+1] && last==-1)        // local minimum
            last=A[i];
        else if(A[i]>A[i+1] && last!=-1)        // local maximum
        {
            ans+=(A[i]-last);
            last=-1;
        }
    }
    return ans;
}
