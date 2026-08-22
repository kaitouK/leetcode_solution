class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        sort(reservedSeats.begin(), reservedSeats.end());
        bool left = true, right = true, mid = true;
        int ans = n * 2;
        for (int i = 0; i < reservedSeats.size(); ++i) {
            if (i > 0 && reservedSeats[i][0] != reservedSeats[i - 1][0]) {
                if (!left && !right && !mid)
                    ans -= 2;
                else if (!left || !right || !mid)
                    ans--;
                left = right = mid = true;
            }
            int row = reservedSeats[i][0] - 1, number = reservedSeats[i][1];
            if (!left && !right && !mid)
                continue;
            if (number == 1 || number == 10)
                continue;
            if (number > 3 && number < 8) {
                mid = false;
            }
            if (number < 6) {
                left = false;
            } else {
                right = false;
            }
        }
        if (!left && !right && !mid)
            ans -= 2;
        else if (!left || !right || !mid)
            ans--;
        return ans;
    }
};