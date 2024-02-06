vector<int> leaders(int a[], int n){
        
        vector<int> ans;
        int larget = INT_MIN;
        
        for(int i = n-1 ; i >= 0 ; i--){
            if( a[i] >= larget ){
                ans.push_back( a[i] );
                larget = max( larget , a[i] );
            }
        }
        reverse( ans.begin() , ans.end() );
        return ans;
    }