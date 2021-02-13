    vector<string> commonChars(vector<string>& A) {
       
        int prime[26];
        memset(prime,0,sizeof(prime));
        for(int i=0;i<A[0].size();i++){
            prime[A[0][i]-'a']++;
        }
        
        for(int i=1;i<A.size();i++){
            set<int> s;
            int sec[26];
            memset(sec,0,sizeof(sec));
            string str=A[i];
            for(char c:str){
                s.insert(c);
                sec[c-'a']++;
            }
            
            for(int j=0;j<26;j++){
                prime[j]=min(prime[j],sec[j]);
            }
            
        }
        
        vector<string> ans;
        for(int i=0;i<26;i++){
            int temp=prime[i];
            while(temp--){
                char c=(i+97);
                string str="";
                str+=c;
                ans.push_back(str);
            }
        }
        
        return ans;
        
    }