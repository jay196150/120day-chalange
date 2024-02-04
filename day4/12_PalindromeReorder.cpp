#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    vector<int> count( 26 , 0 );
    int n = s.size();
    for(int i = 0 ; i < n ; i++) count[ s[i] - 'A' ]++;

    int oddCount = 0;

    for(int i = 0 ; i < 26 ; i++) {
        if( count[i] % 2 != 0 ) oddCount++;
    }

    if( ( n & 1 ) && oddCount > 1 ){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    if( n % 2 == 0 && oddCount > 0 ){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    else{

       string ans = "";
       string temp = "";

       for(int i = 0 ; i < 26 ; i++){

         int c = count[i] / 2;
         int t = count[i] % 2;
         
         for( int j = 1; j <= c ; j++ ){
            ans+= i + 'A'; 
         }

         if( t == 1 ){
            temp = i + 'A';
         }
       }

       cout<<ans<<temp;
       reverse(ans.begin() , ans.end());
       cout<<ans<<endl;

    }



    return 0;
}