class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int i = 1;
        int sum = 1;
        while (i < n) {
            if (ratings[i] == ratings[i - 1]) {
                sum += 1;
                i++;
                continue;
            }
            int p = 1;
            while (i < n && ratings[i] > ratings[i - 1]) {
                p++;
                sum += p;
                i++;
            }
            int d = 1;
            while (i < n && ratings[i] < ratings[i - 1]) {
                sum += d;
                d++;
                i++;
            }
            if (d > p) {
                sum += d - p;
            }
        }
        return sum;
    }
};
