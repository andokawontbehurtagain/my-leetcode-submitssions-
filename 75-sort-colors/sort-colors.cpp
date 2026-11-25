class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red_count=0;
        int white_count=0;
        int blue_count=0;
        for(int x:nums){
            if(x==0){
                red_count++;
            } else if(x==1){
                white_count++;
            } else{
                blue_count++;
            }
        }
        int index=0;
        while(red_count>0){
            nums[index]=0;
            red_count--;
            index++;
        }
        while(white_count>0 && red_count==0){
            nums[index]=1;
            white_count--;
            index++;
        }
        while(blue_count>0 && red_count==0 && white_count==0){
            nums[index]=2;
            blue_count--;
            index++;
        }
    }  
};