#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	sort( arr.begin() , arr.end() );

	int i = 0;
	int j = arr.size() - 1;
    vector<pair<int,int>> ans;
	while( i < j ){
      
	  if( arr[i] + arr[j] == target ){
          ans.push_back( { arr[i] , arr[j] } );
		  i++;
		  j--;
	  }else if( arr[i] + arr[j] > target ){
          j--;
	  }else{
          i++;
	  }

	}

	if( ans.size() == 0 ){
		ans.push_back( { -1 , -1} );
		return ans;
	}

	return ans;

}
