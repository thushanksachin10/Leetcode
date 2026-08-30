class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int total = 0;
        for(int num : nums){
            total+=num;
        }
        if((total+target) % 2 != 0 || abs(target)>total) return 0;
        int targetSum = (total+target)/2;
        vector<int> dp(targetSum+1, 0);
        dp[0]=1;
        for(int num : nums){
            for(int j=targetSum; j>=num;j--){
                dp[j]+=dp[j-num];
            }
        }
        return dp[targetSum];
    }
};