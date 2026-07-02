class Solution {
public:
    int maxArea(vector<int>& heights) {

        int Output = 0;

        int Left = 0; 
        int Right = heights.size()-1;



        while (Left < Right) {


            int LeftHeight = heights[Left];
            int RightHeight = heights[Right];


            int Area = (Right - Left) * min(LeftHeight, RightHeight);

            if (Area > Output) Output = Area;

            int PrevLeft = -1;
            int PrevRight = -1;

            if (LeftHeight < RightHeight) PrevLeft = LeftHeight;
            else PrevRight = RightHeight;

            while (Left < Right) {
                
                if (PrevLeft != -1) {
                    Left++;
                    if (heights[Left] > PrevLeft) break;

                } else if (PrevRight != -1) {
                    Right--;
                    if (heights[Right] > PrevRight) break;

                }
                

                
            }

            
        }

        return Output;
        
    }
};
