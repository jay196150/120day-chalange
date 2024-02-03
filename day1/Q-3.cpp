//Sort an array of 0s, 1s and 2s
//link -> https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
// ref -> https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/


//solution
int Solution::maxSubArray(const vector<int> &A) {
    
    int sum = 0;
    int maxSum = -1e9;
    int n = A.size();
    for(int i = 0 ; i < n ; i++ ){
        
        sum+= A[i];
        if( sum > maxSum ) maxSum = sum;
        if( sum < 0 ) sum = 0;
        
    }
    
    return maxSum;0
    
}
