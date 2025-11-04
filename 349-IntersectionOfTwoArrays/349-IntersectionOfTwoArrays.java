// Last updated: 11/4/2025, 7:50:12 AM
class Solution {
    
    public static Set<Integer> getSet(int n, int arr[]) {
        Set<Integer> s = new HashSet<>();
         for (int i = 0; i < n; i++) {
                s.add(arr[i]);
          }
        return s;
    }
    
    public static Set<Integer> getResult(Set<Integer> s, int []arr) {
           Set<Integer> ans = new HashSet<>();
        for(int i = 0; i < arr.length; i++) {
            if(s.contains(arr[i])) {
                ans.add(arr[i]);
            }
        }
        return ans;
    }
    
    public int[] intersection(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        Set<Integer> s = null;
        Set<Integer> ans = null;
        if (n1 < n2) {
           s = getSet(n1, nums1);
           ans = getResult(s, nums2); 
        } else {
            s = getSet(n2, nums2);
            ans =  getResult(s, nums1); 
        }
        System.out.println(ans);
        List<Integer> arr = new ArrayList<>();
        
        int k = 0;
        for(Integer a: ans) {
            arr.add(a);
        }
        int []res = new int[arr.size()];
        for(int i = 0; i < arr.size(); i++) {
            res[i] = arr.get(i);
        }
        return res;
    }
}