// Last updated: 04/06/2025, 13:25:49
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            bool isEven = num % 2 == 0;

            if (!isEven) {
                num -= 1;
                steps += 1;

                if(num==0) break;
            }

            num = num / 2;
            steps += 1;
        } 
        return steps;
    }
};