class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        vector<int> no;
        for(int i=0; i<nums.size(); i++)
        {
            ump[nums[i]]++;
        }
        for(int i=0; i<nums.size();i++)
        {
            int c = target - nums[i];
            ump[nums[i]]--;
            if(ump[c] > 0)
            {
                no.push_back(i);
                nums[i] = INT_MAX;
                vector<int> ::iterator it = find(nums.begin(),nums.end(),c);
                no.push_back(distance(nums.begin(),it));
            }
        }
        return no;
       
    }
};