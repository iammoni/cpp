int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int m=nums[0];
        for(int i=1;i<n;i++){
            
            if(m==nums[i]) count++;
            else if(count==0) m=nums[i],count;
            else count--;
            
        }
        
        return m;
        
    }