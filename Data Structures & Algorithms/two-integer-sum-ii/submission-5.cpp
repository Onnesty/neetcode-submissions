class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        int Left = 0; 
        int Right = numbers.size()-1;

        while (Left < Right) {

            int Sum = numbers[Left] + numbers[Right];
            
            if (Sum > target) {
                Right--;
            } else if (Sum < target) {
                Left++;
            } else if (Sum == target) {
                return {Left+1, Right+1};
            }
        }
    }
};
