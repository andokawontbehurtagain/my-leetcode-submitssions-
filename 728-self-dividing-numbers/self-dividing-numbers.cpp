class Solution {
public:
bool isSelfDividing(int x){
            int temp=x;
            while(temp>0){
                int digit=temp%10;
                if(digit==0 || x%digit!=0){
                    return false;
                }
                temp/=10;
            }
            return true;
        }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        
            for(int i=left;i<=right;i++){
                if(isSelfDividing(i)==true){
                    ans.push_back(i);
                }
            }
         return ans;
        }
};