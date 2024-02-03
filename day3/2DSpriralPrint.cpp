vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    vector<int> ans;
    
    int left = 0;
    int right = A[0].size() - 1;
    int top = 0;
    int bottom = A.size() - 1;
    int total = A.size() * A[0].size();
    int count = 0;
    
    while( count < total ){
        
       if( count < total){
            for( int i = left ; i <= right ; i++ ){
            ans.push_back( A[top][i] );
            count++;
        }
        top++;
       }
         if( count < total){
        for( int i = top ; i <= bottom ; i++ ){
            ans.push_back( A[i][right] );
            count++;
        }
        right--;
         }
          if( count < total){
        for( int i = right ; i >= left ; i--  ){
            ans.push_back( A[bottom][i] );
            count++;
        }
        bottom--;
          }
         if( count < total){
        for(int i = bottom ; i >= top ; i--){
            ans.push_back( A[i][left] );
            count++;
        }
        left++;
         }
    }
    return ans;
    
}
