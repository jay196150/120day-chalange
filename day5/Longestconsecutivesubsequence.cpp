 int findLongestConseqSubseq(int arr[], int N)
    {
        
        unordered_set<int> st;
        
        for(int i = 0 ; i<N;i++){
            st.insert( arr[i] );
        }
        
        int largest = 1;
        
        for(auto el : st){
               int cunt = 1;
            if( st.find(el-1) == st.end()){
                int x = el;
                while( st.find( x + 1 ) != st.end() ){
                    x = x+1;
                    cunt++;
                }
            }
            
            largest = max( largest , cunt );
            
        }
        
        return largest;
        
    }