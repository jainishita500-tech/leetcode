class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double maxi=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            maxi = sum/k;
        }
        for(int i=k;i<nums.size();i++){
            sum+=nums[i]-nums[i-k];
            maxi=max(maxi,sum/k);
        }
        return maxi;
        
    }
};