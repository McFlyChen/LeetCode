public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ans = new int[2];
        int i, j;
        for (i = 0; i < nums.length; i++) {
            for (j = 0; j < nums.length; j++) {
                if (i == j) continue;
                if (target == nums[i] + nums[j]) {
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
        return null;
    }
}