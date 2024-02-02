#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll kadans(int arr[] , int n){
    ll max_ans = INT_MIN;
    ll ans = 0;

    for(int i=0;i<n;i++){
        ans = ans + arr[i];
        if( ans > max_ans ){
            max_ans = ans;
        }
        if( ans < 0 ){
            ans = 0;
        }
    }

    return max_ans;
}

ll solution( int arr[] , int n , int k ){

   ll kadansAns = kadans( arr , n );
   if( k == 1 )  return kadansAns;

   ll max_pre = INT_MIN , max_suf = INT_MIN , curr_pref = 0 , curr_suff = 0;
   ll total_sum = 0;

   for(int i = 0 ; i < n ; i++ ){
        curr_pref = curr_pref + arr[i];
        max_pre = max( curr_pref , max_pre );
   }

   total_sum = curr_pref;
   ll ans ;

   for(int i = n-1 ; i>=0 ; i--){
       curr_suff = curr_suff + arr[i];
       max_suf = max( curr_suff , max_suf );
   }

   if( total_sum < 0 ){
    ans = max( max_pre + max_suf , kadansAns );
   }else{
    ans = max( max_pre + max_suf + total_sum * (k-2) , kadansAns );
   } 

   return ans;

}

int main() {

 int t;
 cin>>t;

 while( t-- ){
    
    int n , k;
    cin>>n>>k;
    
    int arr[n];
    for(int i = 0 ;i < n ; i++){
        cin>>arr[i];
    }

    cout<<solution( arr , n , k );

 }

}