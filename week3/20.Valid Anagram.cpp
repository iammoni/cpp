 bool isAnagram(string s, string t) {
        
        map<char,int> input;
        unordered_map<char,int> sol;
        
        for(char c:s) input[c]++;
        for(char c:t) sol[c]++;
        if(input.size()!=sol.size()) return false;
        for(auto x:input){
            if(x.second!=sol[x.first]) return false;
        }
        
        return true;
        
    }
