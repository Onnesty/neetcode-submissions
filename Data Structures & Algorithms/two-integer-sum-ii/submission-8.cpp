class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        /*
            This solutions utilizes a binary search to find the second number needed to achieve the target

            When a first number is identified, the second number necessary to achieve the target 
            is calculated. It then does a binary search of the second number in the range from the index of 
            the first number + 1 to the end of the list. If the Left and Right pointers for the binary search
            is equal then one more calculation is done if the number on this index is the second number. If it is
            not then move on to the next first number, otherwise return {FirstNumberIndex + 1, BinarySearchIndex + 1}

        */
        

        for (int Start = 0; Start < numbers.size(); Start++) {

            int First = numbers[Start];
            int Second = target - First;

            if (Second < First) return {-1,-1}; // Unnecesarry since theres always a pair. But if the Second
            // Number is lower than the first then it means that there is no such number thats ahead of the First number in a sorted list

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
