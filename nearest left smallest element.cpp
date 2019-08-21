void printPrevSmaller(int arr[], int n) 
{ 
    stack<int> S; 
  
    for (int i=0; i<n; i++) 
    { 
        while (!S.empty() && S.top() >= arr[i]) 
            S.pop(); 
        if (S.empty()) 
            cout << "-1 "; 
        else  
            cout << S.top() << " "; 
          S.push(arr[i]); 
    } 
} 
