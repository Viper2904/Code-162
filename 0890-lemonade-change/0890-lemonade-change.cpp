class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a5 = 0, a10 = 0;

        for (int bill : bills) {
            if (bill == 5) {
                a5++;
            } else if (bill == 10) {
                if (a5 > 0) {
                    a5--;
                    a10++;
                } else {
                    return false;
                }
            } else { // bill == 20
                if (a10 > 0 && a5 > 0) {
                    a10--;
                    a5--;
                } else if (a5 >= 3) {
                    a5 -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
