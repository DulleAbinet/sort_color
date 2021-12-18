class Solution {
public:
    void sortColors(vector<int>& nums) {
        {
	        int counts0=0, counts1=0, counts2=0;
	        for(int i=0; i<nums.size(); i++){
	            if(nums[i]==0)
              {counts0++;}
	            else if(nums[i]==1)
              {counts1++;}
	            else if(nums[i]==2)
              {counts2++;}
	        }
	        for(int i=0; i<nums.size(); i++){
	            if(i<counts0){nums[i]=0;}
	            else if(i<counts0+counts1){nums[i]=1;}
	            else {nums[i]=2;}
	        }
	    }
        
    }
};
