class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int count=1;
        int con=1;
        for(auto num:s){
            if(s.find(num-1)==s.end())
            {
                int j=num;
                while(s.find(j+1)!=s.end())
                {
                    count++;
                    j++;
                }
            }
            con=max(count,con);
            count=1;
        }
        return con;
    }
};