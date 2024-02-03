#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    vector<bool> sleve(n,true);

    sleve[0] = false;
    sleve[1] = false;

    for(int i = 2 ; i * i <= n ;i++){
        
        if( sleve[i] == true ){
            for( int j = i * i ; j <= n ; j = j + i ){
                sleve[j] = false;
            }
        }

    }
    
    int count = 0;
    for(int i = 2;i<=n;i++){
        if( sleve[i] ) count++;
    }

    cout<<count<<endl;
    return 0;
}