class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> NumMap;

        for (int i = 0; i < nums.size(); i++) {
            NumMap[nums[i]] = i;
        }


        for (int i = 0; i < nums.size(); i++) {

            int Diff = target - nums[i];

            if (NumMap.find(Diff) != NumMap.end() && i != NumMap[Diff]) return {i, NumMap[Diff]};
        }

        return {-1,-1};
        
    }
};
