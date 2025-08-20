class Solution {
public:

    bool isvalid(string str1, string str2, string gcd) {
        int i=0, j=0;
        while(i<str1.length()) {
            if(gcd != str1.substr(i, gcd.length())) {
                return false;
            } 
            i += gcd.length();
        }

        while(j<str2.length()) {
            if(gcd != str2.substr(j, gcd.length())) {
                return false;
            } 
            j += gcd.length();
        }

        return true;
    }
    string gcdOfStrings(string str1, string str2) {

        string result = "";
        int i=0,j=0;
        string ans = "";
        while(i<str1.length() && j<str2.length()) {
            if(str1[i] == str2[j]) {
                result += str1[i];
            } else {return "";}
            if(isvalid(str1, str2, result)) {
                ans = ans.length() > result.length() ? ans : result;
            }
            i++;j++;
        }

        // while(i<str1.length()) {
        //     if(result != str1.substr(i, result.length())) {
        //         return "";
        //     } 
        //     i += result.length();
        // }

        // while(j<str2.length()) {
        //     if(result != str2.substr(j, result.length())) {
        //         return "";
        //     } 
        //     j += result.length();
        // }

        return ans;
        
    }
};