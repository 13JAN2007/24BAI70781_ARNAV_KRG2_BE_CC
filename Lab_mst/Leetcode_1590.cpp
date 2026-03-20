class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long sum = 0;
        for (int x : nums) sum += x;

        int rem = sum % p;
        if (rem == 0) return 0;

        unordered_map<int,int> seen;
        seen[0] = -1;

        int cur = 0, ans = n;

        for (int i = 0; i < n; i++) {
            cur = (cur + nums[i]) % p;
            int need = (cur - rem + p) % p;

            if (seen.count(need))
                ans = min(ans, i - seen[need]);

            seen[cur] = i;
        }

        return ans == n ? -1 : ans;
    }
};