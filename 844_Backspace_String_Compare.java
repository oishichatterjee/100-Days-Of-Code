class Solution {
    public boolean backspaceCompare(String s, String t) {
        return getActualString(s).equals(getActualString(t));
    }
    
    private String getActualString(String input) {
        StringBuilder actualString = new StringBuilder();
        int backspaceCount = 0;
        
        for (int i = input.length() - 1; i >= 0; i--) {
            if (input.charAt(i) == '#') {
                backspaceCount++;
                continue;
            }
            
            if (backspaceCount > 0) {
                backspaceCount--;
            } else {
                actualString.insert(0, input.charAt(i));
            }
        }
        
        return actualString.toString();
    }
}
