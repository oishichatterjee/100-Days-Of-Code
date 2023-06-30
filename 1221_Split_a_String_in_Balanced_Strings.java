class Solution {
    public int balancedStringSplit(String s) {
        int balance = 0;
        int count = 0;
        for(char ch : s.toCharArray()) {
            balance += ch == 'R' ? 1 : -1;
            count += balance == 0 ? 1 : 0;
        }
        return count;
    }
}