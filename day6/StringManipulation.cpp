//String Manipulation
// link -> https://www.geeksforgeeks.org/problems/string-manipulation3706/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

int removeConsecutiveSame(vector <string > v) 
    {
        
        stack<string> st;
        
        for(int i = 0 ; i < v.size() ; i++ ){
            
            if( st.empty() ){
                st.push( v[i] );
            }
            
            else if( v[i] == st.top() ){
                st.pop();
            }
            else{
                st.push(v[i]);
            }
            
        }
        
        return st.size();
       
    } 