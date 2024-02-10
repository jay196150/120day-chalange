// Insert an Element at the Bottom of a Stack
//https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1?page=2&category=Stack&difficulty=Easy&sortBy=submissions


    void solve( stack<int> & st , int x ){
        
        if( st.size() == 0  ){
            st.push(x);
            return ;
        }
        
        int ele = st.top();
        st.pop();
        
        solve( st , x );
        
        st.push( ele );
        
    }
    stack<int> insertAtBottom(stack<int> st,int x){
         
        solve( st , x );
        
        return st;
         
    }