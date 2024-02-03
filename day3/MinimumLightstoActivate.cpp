int Solution::solve(vector<int> &A, int B) {
        
        int i = 0;
        int count = 0;
        int n = A.size();
        
        while( i < n ){
            
            int right = min( i + B - 1 , n-1 );
            int left = max( i - B + 1 , 0 );
            bool isBuild = false;
            while( right >= left){
                
                if( A[right] == 1 ){
                    isBuild = true;
                    break;
                }
                right--;
            }
            if( !isBuild ) return -1;
            count++;
            
            i = right + B;
        }
        
        return count;
        
        
}
