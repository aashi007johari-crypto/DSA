class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int mid = n / 2;

        int sum = 0;
        int q = 0;

        for (int i = 0; i < n; i++) {
            if (num[i] == '?') {
                if (i < mid) q++;
                else q--;
            } else {
                if (i < mid)
                    sum += num[i] - '0';
                else
                    sum -= num[i] - '0';
            }
        }

        if (q % 2 != 0)
            return true;

        return sum != -9 * q / 2;
    }
};