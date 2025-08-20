class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string result = "";
        int count = 0;
        while(i<word1.length() && j<word2.length()) {
                if(count%2==0)
                {
                    result += word1[i];
                    i++;count++;
                } else {
                         result += word2[j];
                         j++;count++;
                }
        }

        result += word1.substr(i) + word2.substr(j);

        return result;
    }
};