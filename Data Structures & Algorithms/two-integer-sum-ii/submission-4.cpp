class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        for (int Start = 0; Start < numbers.size(); Start++) {

            int First = numbers[Start];
            int Second = target - First;

            if (Second < First) return {-1,-1}; // Unnecesarry. But if the Second Number is lower than the first then it means
            // that there is no such number thats ahead of the First number in a sorted list

            int Left = Start+1;
            int Right = numbers.size()-1;

            while (true) {

                int Mid = (Left + Right) / 2;

                if (Left == Right) {
                    if (numbers[Mid] == Second) return {Start+1, Mid+1};
                    else break;
                }

                if (numbers[Mid] > Second) {
                    Right = Mid - 1;

                } else if (numbers[Mid] < Second) {
                    Left = Mid + 1;

                } else {
                    return {Start+1, Mid+1};
                }

                

            }
            

            


        }
    }
};
