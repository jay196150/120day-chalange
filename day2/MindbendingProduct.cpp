
// using divide oper
#include<bits/stdc++.h>
vector<long long> getProductArray(int arr[], int n)
{
   
   long long ansPro = 1;
 vector<long long> ans;
   if(n==1){
      ans.push_back(0);
      return ans;
   }

   for(int i = 0 ; i< n ; i++){
      ansPro = ansPro * arr[i];
   }

  

   for(int i = 0 ; i < n ; i++ ){
      long long x = ansPro / arr[i];
      ans.push_back(x);
   }
   
   return ans;

}

// space O(2N)

vector<long long> getProductArray(int arr[], int n)
{

   if( n == 1 ){
      vector<long long> ans;
      ans.push_back(0);
      return ans;
   }
   vector<long long> pref(n);

   long long prefval = 1;

   for(int i = 0 ; i< n ; i++){
      pref[i] = prefval;
      prefval = prefval * arr[i];
   }

   vector<long long> suff(n);
   long long suffval = 1;

   for(int i = n-1 ; i >= 0 ;i--){
      suff[i] = suffval;
      suffval = suffval * arr[i];
   }

   vector<long long > ans(n);

   for(int i = 0 ; i < n;i++){
      ans[i] = pref[i] * suff[i];
   }

   return ans;
}

// 0(1) space
#include<bits/stdio.h>
vector<long long> getProductArray(int arr[], int n)
   {

   if(n==1){
       vector<long long> ans;
       ans.push_back(0);
       return ans;
   }    
   long long pref = 1;

   vector<long long> ans(n);

   for(int i = 0 ; i < n ; i++){

      ans[i] = pref;
  
      pref = pref * arr[i];

   }

   long long suff = 1;

   for(int i = n-1 ; i >= 0 ; i-- ){
      ans[i] = ans[i] * suff; 
    
      suff = suff * arr[i];
   }

   return ans;

}

