class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        if(s=="") return "";

        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
            } else if(s[i] == ')')
            {
                if(st.empty()) s[i] ='*';
                else {
                    st.pop();
                }
            }

        }

        while(!st.empty()){
            int pos = st.top();
            s[pos] = '*';
            st.pop();
        }

        string result = "";
        for(char c: s)
        {
            if(c!='*'){
                result += c;
            }
        }

        return result;
    }
};