#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
    }

    int maximun_here = 1;
    int minimun_here = 1;
    int ans = 0;

    for( int i = 0 ; i < n ; i++ ){
       
       if( arr[i] > 0 ){
        maximun_here = maximun_here * arr[i];
        minimun_here = min( minimun_here * arr[i] , 1 );
       }else if( arr[i] == 0 ){
        maximun_here = 1;
        minimun_here = 1;
       }else{
        int total = maximun_here;
        maximun_here = max( minimun_here * arr[i] ,  1);
        minimun_here = total * arr[i];
       }

       ans = max(ans , maximun_here);

    }

    cout<<ans;


    return 0;
}