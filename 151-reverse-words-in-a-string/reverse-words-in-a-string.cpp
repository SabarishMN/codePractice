
class Solution {
public:
    string reverseWords(string s) {
        // string str;
        // vector<string> v;
        // stringstream ss(s);

        // while(getline(ss,s,' ')) {
        //     v.push_back(s);
        // }

        // string ans = "";
        // for(int i = v.size()-1;i>=0;i--)
        // {
        //     if()
        //     ans = ans + v[i] + " ";
        //     // if(i = 0) ans = ans + " ";
        // }

        // return ans.substr(0, ans.length()-1);

        if(s.empty()) return "";
        vector<string> v;
        string str = "";
        for(int i=0;i<s.length();i++){
            if(s[i] != ' ') {
                str = str + s[i];
            } else { 
                if(!str.empty()) {v.push_back(str); str= "";}}
        }

        if(!str.empty()) {
            v.push_back(str);
        }

        string ans="";

        for(int i = v.size()-1;i>=0;i--)
        {
            ans = ans + v[i] + " ";
            // if(i = 0) ans = ans + " ";
        }

        return ans.substr(0, ans.length()-1);


    }
};