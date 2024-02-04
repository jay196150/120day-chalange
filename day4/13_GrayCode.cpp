#include<bits/stdc++.h>
using namespace std;

vector<string> solve(int n){
     
     if( n == 1 ){
        return { "0" , "1" };
     }

     vector<string> smallAns = solve( n-1 );
     vector<string> ans;

     for(int i = 0 ; i < smallAns.size() ; i++ ){
        ans.push_back( "0" + smallAns[i] );
     }

     for(int i = smallAns.size()-1 ; i >= 0 ; i-- ){
        ans.push_back( "1" + smallAns[i] );
     }

     return ans;
}

int main(){
    int n;
    cin>>n;

    vector<string> ans = solve(n);

    for(int i = 0; i< ans.size() ; i++ ){
        cout<<ans[i]<<endl;
    }
    return 0;
}