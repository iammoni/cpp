bool isPalindrome(string str) {
        if(str.length()<=1) return true;
    int i=0,j=str.size()-1;
        while(i<j){
            while(i<j && !isalnum(str[i]))i++;
            while(i<j && !isalnum(str[j])) j--;
            if((i<j) &&  (tolower(str[i])!=tolower(str[j]))) return false;
            i++;
            j--;
        }
        return true;
    }