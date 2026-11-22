class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
       int finish=200;
       for(int i=0;i<tasks.size();i++){
            int temp=tasks[i][0]+tasks[i][1];
            finish=min(finish,temp);
       }
    return finish; 
    }
};