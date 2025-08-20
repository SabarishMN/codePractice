class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0;
        int j=0;

        while(i<word.length() && j<abbr.length()){
            if(isdigit(abbr[j])) {
                if(abbr[j] == '0') return false;

                int n = 0;
                while(isdigit(abbr[j])) {
                    n = n*10 + (abbr[j] - '0');
                    j++;
                }
                i += n;
                
            } else {
                if(abbr[j] != word[i]) return false;
                i++;
                j++;

            }
        }

        return i == word.length() && j == abbr.length();
    }
};