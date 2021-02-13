string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
      string  str=strs[0];
        int t=str.length();
        for(int i=1;i<n;i++){
            int k=0;
           for(int j=0;j<strs[i].length();++j){
               if(str[k]!=strs[i][j]) break;
               k++;
           }  
            if(k<=t) t=k;
        }
        
        
        return str.substr(0,t);
        
    }