// Pick from both sides!
// link -> https://www.interviewbit.com/problems/pick-from-both-sides/

//solution
int Solution::solve(vector<int> &A, int B) {
    
    int sum = 0;
    
    int b = B;
    int i = 0;
    int j = A.size()-1;
    
    while(b){
        sum+=A[i++];
        b--;
    }
    int ans = sum;
    
    b = B;
    
    while( b ){
        sum -= A[--i];
        sum += A[j--];
        ans = max( ans , sum );
        b--;
    }
    
    return ans;
    
}
