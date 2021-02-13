vector<int> twoSum(vector<int> nums, int target) {
      vector<int> v=nums;
      sort(nums.begin(),nums.end());
      int i=0,l=nums.size()-1,sum=0;
        while(i<l){
            sum=nums[i]+nums[l];
           if(sum<target) {
             i++;
           }else if(sum>target){
              l--;
           }else{
               int k1,k2;
               for(int j=0;j<nums.size();j++){
                  if(v[j]==nums[i]){
                        k1=j;
                  }
               }
               for(int j=0;j<nums.size();j++){
                  
                  if(v[j]==nums[l] && j!=k1){
                        k2=j;
                  }
               }
               return {k1,k2};
       }     
         }
        return {};
    }