// Last updated: 11/4/2025, 7:50:05 AM
class Solution {
    
    public List<String> topKFrequent(String[] words, int k) {
        HashMap<String, Integer> map = new HashMap<>();
        
        for (int i = 0; i < words.length; i++) {
            map.put(words[i], map.getOrDefault(words[i], 0) + 1);
        }
        
        Queue<String> pq = new PriorityQueue<>((w1, w2) -> map.get(w1).equals(map.get(w2)) ? w2.compareTo(w1) : map.get(w1) - map.get(w2));
        
        for (String word: map.keySet()) {
            pq.add(word);
            if(pq.size() > k) pq.poll();
        }
        
        List<String> res = new ArrayList<>();
        while(!pq.isEmpty()) {
            res.add(pq.poll());
        }
        Collections.reverse(res);
        return res;
    }
}