// Last updated: 11/4/2025, 7:50:44 AM
class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        for (int i = 0; i < s.length(); i++){
            Character a = s.charAt(i);
            if (a == '(' || a == '[' || a == '{') {
                st.push(a);
            }
            if (a == ')' || a == ']' || a == '}') {
                if (st.size() == 0) {
                    return false;
                }
                char b = st.pop();
                if (a == ')' && b != '(') {
                    return false;
                } else if (a == ']' && b != '[') {
                    return false;
                } else if (a == '}' && b != '{') {
                    return false;
                }
            }
        }

        if (st.size() > 0) {
            return false;
        }

        return true;
    }
}