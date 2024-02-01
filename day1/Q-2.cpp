//Max Sum Contiguous Subarray
//link -> https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

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
    
    return maxSum;
    
}
