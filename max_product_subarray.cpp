int Solution::maxProduct(const vector<int> &A) 
{
    int minm, maxm;
    minm=maxm=A[0];
    int ans=maxm;
    for(int i=1;i<A.size();i++){
        if(A[i]<0)swap(minm,maxm);
        minm=min(minm*A[i], A[i]);
        maxm=max(maxm*A[i], A[i]);
        ans=max(ans, max(minm, maxm));
    }
    return ans;
}
