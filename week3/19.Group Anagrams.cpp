string countSort(string arr) 
{  
	char output[arr.length()];
	int count[26], i; 
	memset(count, 0, sizeof(count)); 
	for (i = 0; arr[i]; ++i) 
		++count[arr[i]-'a']; 

	for (i = 1; i <26; ++i) 
		count[i] += count[i - 1]; 

	for (i = 0; arr[i]; ++i) { 
		output[count[arr[i]-'a'] - 1] = arr[i]; 
		--count[arr[i]-'a']; 
	} 
	for (i = 0; arr[i]; ++i) 
		arr[i] = output[i]; 
  
  return arr;
} 
    vector<vector<string>> groupAnagrams(vector<string>& A) {
       unordered_map<string,vector<string>> m;
        for(string str:A){
            string temp=countSort(str);
            if(m.count(temp)>0) m[temp].push_back(str);
            else m[temp]={str};
        }
        vector<vector<string> > ans;
        for(auto x:m){
            ans.push_back(x.second);
        }
        
        return ans;
      
    }