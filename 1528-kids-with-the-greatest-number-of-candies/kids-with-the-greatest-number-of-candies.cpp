class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {  
        vector<bool> ans;
       int highest=*max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
           
            if(candies[i]+extraCandies>=highest){
                ans.push_back(true);
    
            } else {
             ans.push_back(false);
            }

        }
        return ans;
    }
};