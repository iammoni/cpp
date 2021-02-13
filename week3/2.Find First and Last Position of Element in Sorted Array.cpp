vector<int> searchRange(vector<int>& nums, int target) {
        bool flag=false;
        int low=-1,high=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
             if(flag==false) {low=i;flag=true; }
             high=i;
            }
        }
        
        return {low,high};
        
    }