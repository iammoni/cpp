  vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length()) return {};
        int p_arr[26]={0};
        for(int i=0;i<p.length();i++){
            p_arr[p[i]-97]++;
        }
        vector<int> ans;
        for(int i=0;i<=(s.length()-p.length());i++){
            string temp=s.substr(i,p.length());
            int temp_arr[26]={0};
        for(int j=0;j<temp.length();j++){
            temp_arr[temp[j]-97]++;
          } 
            bool flag=true;
            for(int j=0;j<26;j++){
                 if(p_arr[j]!=temp_arr[j]) {
                     flag=false;
                     break;
                 }    
            }
            
            if(flag) ans.push_back(i);
            
        }
        return ans;
    }