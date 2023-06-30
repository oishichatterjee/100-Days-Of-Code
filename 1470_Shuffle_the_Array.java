class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] a = new int[2*n];
        int i=0,j;
        for(j=0; j<2*n; j+=2){
            a[j] = nums[i];
            a[j+1] = nums[i+n];
            i++;
        }
        return a;
    }
}