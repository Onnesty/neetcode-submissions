class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<vector<int>> Output = {};
        vector<int> Current = {};

        for (int i = 0 ; i < nums.size(); i++) {
            
            int FirstNum = nums[i];

            if (FirstNum > 0) break;

            int SecondNum = -(FirstNum);

            int Left = i + 1;
            int Right = nums.size()-1;

            while (Left < Right) {
                
                int Sum = nums[Left] + nums[Right];

            

                if (Sum > SecondNum) {
                    Right--;
                } else if (Sum < SecondNum) {
                    Left++;
                } else if (Sum == SecondNum) {

                    vector<int> Trio = {FirstNum, nums[Left], nums[Right]};

                    if (find(Output.begin(), Output.end(), Trio) == Output.end()) Output.push_back(Trio);

                    Left++;
                    Right--;
                    
              
                }
            }




        }

        return Output;
        
    }
};
