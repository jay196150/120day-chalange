int majorityElement(vector<int> v) {
	  int ans;
    int count = 0;

    for( int i = 0 ; i < v.size() ; i++ ){
        if( count == 0 ){
            count = 1;
            ans = v[i];
        }else if( ans == v[i] ){
            count++;
        }else{
            count--;
        }
    }
    int c = 0;
    for (int i = 0; i < v.size(); i++) {
        if (ans == v[i])
            c++;
    }

    if (c > (v.size() / 2))
        return ans;

    return -1;
}