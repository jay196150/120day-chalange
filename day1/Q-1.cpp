//Maximum Sum Triplet
//link -> https://www.interviewbit.com/problems/maximum-sum-triplet/

//solution

int Solution::solve(vector<int> &A) {

  
    int n = A.size();
      vector<int> post(n);
    
    for(int i = n-1 ; i>=0 ; i-- ){
        if( i == n-1 ) post[i] = A[i];
        else post[i] = max( post[i+1] , A[i] );
    }
    
    set<int> s;
    s.insert( A[0] );
    int ans = 0;
    
    for(int i =1;i<n;i++){
        
        s.insert( A[i] );
        
        auto find = s.find( A[i] );
        
        if( find != s.begin() && post[i] != A[i])
             ans = max( ans , (*--find) + A[i] + post[i]  );
        
    }
    
    return ans;
   
}
