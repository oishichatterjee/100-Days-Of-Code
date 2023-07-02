class Solution {
    int ans = Integer.MAX_VALUE;

    void helper(int[] cookies, int start, int k, int[] temp) {
        if (start == cookies.length) {
            int max = findMax(temp);
            ans = findMin(ans, max);
            return;
        }
        for (int i = 0; i < k; i++) {
            temp[i] += cookies[start];
            helper(cookies, start + 1, k, temp);
            temp[i] -= cookies[start];
        }
    }

    public int distributeCookies(int[] cookies, int k) {
        helper(cookies, 0, k, new int[k]);
        return ans;
    }
    
    private int findMax(int[] arr) {
        int max = 0;
        for (int num : arr)
            max = Math.max(max, num);
        return max;
    }
    
    private int findMin(int a, int b) {
        return Math.min(a, b);
    }
}
