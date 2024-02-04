#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    long long sum = ( n * (n + 1) );
    vector<int> A;
    vector<int> B; 
    if( sum % 4 != 0){
        cout<<"NO"<<endl;
    }else{
        
        cout<<"YES"<<endl;
        bool flag = false;
        while( n != 0 ){
             
             if( flag == false ){
                 
                  if( n != 0 ){
                    A.push_back(n);
                    n--;
                  }
                  else break;
                  
                  if( n!=0 ){
                    B.push_back(n);
                    n--;
                  }
                  else break;

                  flag = true;

             }

             else{
                  if( n != 0 ){
                    B.push_back(n);
                    n--;
                  }
                  else break;
                  
                  if( n!=0 ){
                    A.push_back(n);
                    n--;
                  }
                  else break;

                  flag = false;
             }
        }
        cout<<A.size()<<endl;
        for(int i = 0 ;i<A.size();i++){
            cout<<A[i]<<" ";
        }
        cout<<endl<<B.size()<<endl;
         for(int i = 0 ;i<B.size();i++){
            cout<<B[i]<<" ";
        }

    }

    return 0;
}