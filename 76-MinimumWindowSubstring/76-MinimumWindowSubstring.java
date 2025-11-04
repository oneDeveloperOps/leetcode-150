// Last updated: 11/4/2025, 7:50:35 AM
class Solution {
    public String minWindow(String s, String t) {
        String ans = "";
        HashMap<Character, Integer> tMap = new HashMap<>();
        for (int i = 0; i < t.length(); i++) {
            tMap.put(t.charAt(i) , tMap.getOrDefault(t.charAt(i), 0) + 1);
        }
        int matchCount = 0;
        int requiredCount = t.length();
        
        HashMap<Character, Integer> sMap = new HashMap<>();
        int i = -1;
        int j = -1;
        
        while (true) {
            //aquire
            
            Boolean f1 = false;
            Boolean f2 = false;
            while(i < s.length() - 1 && matchCount < requiredCount) {
                i++;
                Character ch = s.charAt(i);
                sMap.put(ch, sMap.getOrDefault(ch, 0) + 1);
                //update match count 
                if(sMap.getOrDefault(ch, 0) <= tMap.getOrDefault(ch, 0)) {
                    matchCount++;
                }
                f1 = true;
            }
            //release and collect ans
            while(j < i && matchCount == requiredCount) {
                String pAns = s.substring(j+1, i+1);
                if(ans.length() == 0 || pAns.length() < ans.length()) {
                    ans = pAns;
                }
                
                j++;
                Character ch = s.charAt(j);
                if(sMap.get(ch) == 1) {
                    sMap.remove(ch);
                } else {
                    sMap.put(ch, sMap.get(ch) - 1);
                }
                
                if (sMap.getOrDefault(ch, 0) < tMap.getOrDefault(ch, 0)) {
                    matchCount--;
                }
                f2 = true;
            }
            if(f1 == false && f2 == false) {
                break;
            }
        }
        return ans;
    }
}