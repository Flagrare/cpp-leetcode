// Last updated: 5/31/2025, 3:32:40 PM
class Solution {
public:

    vector<int> summed_vector = {};
    
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int currentSum = nums[i];
            
            if(i-1>=0){
                currentSum += summed_vector[i-1];
            } 
            summed_vector.push_back(currentSum);
            
        }
        return summed_vector;
    }
};