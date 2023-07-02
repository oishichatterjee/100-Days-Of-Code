import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

class Solution {
    public boolean wordPattern(String pattern, String s) {
        int[] charMap = new int[26];
        Arrays.fill(charMap, -1);
        String[] words = s.split(" ");
        Map<String, Integer> wordMap = new HashMap<>();
        if (pattern.length() != words.length) {
            return false;
        }
        for (int i = 0; i < words.length; i++) {
            wordMap.putIfAbsent(words[i], i);
            int charIndex = pattern.charAt(i) - 'a';
            if (charMap[charIndex] != -1 && !words[charMap[charIndex]].equals(words[i]) || 
                pattern.charAt(wordMap.get(words[i])) != pattern.charAt(i)) {
                return false;
            }
            charMap[charIndex] = i;
        }
        return true;
    }
}
