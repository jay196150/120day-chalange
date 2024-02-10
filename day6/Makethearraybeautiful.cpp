//Make the array beautiful
//link -> https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1

    vector<int> makeBeautiful(vector<int> arr) {
        
        stack<int> st;
        
        for(int i = 0 ; i < arr.size() ; i++ ){
            
            if(st.size() == 0 ){
                st.push( arr[i] );
            }
            
            else if( (arr[i] >= 0 && st.top() < 0) ||( arr[i] < 0 && st.top() >= 0 )){
                st.pop();
            }
            
            else {
                st.push(arr[i]);
            }
            
        }
        vector<int> ans( st.size() );
        int j = st.size();
        while( !st.empty() ){
            ans[--j] = st.top();
            st.pop();
        }
        
        return ans;
        
    }