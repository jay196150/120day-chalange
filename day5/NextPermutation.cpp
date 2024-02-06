 vector<int> nextPermutation(int N, vector<int> arr){
         
         
         int index = -1;
         for(int i = N-2 ; i >=0 ; i--){
              
              if( arr[i] < arr[i+1] ){
                   index = i;
                   break;
              }
             
         }
         
         
         if( index == -1 ){
             reverse(arr.begin() , arr.end());
             return arr;
         }
         int j = -1;
         for(int i = N-1 ; i>= 0 ; i--){
             if( arr[i] > arr[index] ){
                 j = i;
                 break;
             }
         }
         
         swap( arr[index] , arr[j] );
        
         int s = index + 1 , e = N-1;
         while( s < e ){
             swap( arr[s] , arr[e] );
             s++;
             e--;
         }
         
         return arr;
         
         
     }