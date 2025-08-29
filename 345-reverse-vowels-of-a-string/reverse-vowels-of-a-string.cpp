class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' );
    }
    string reverseVowels(string s) {
        int left = 0, right = s.length()-1;
        while(left < right) {
            if(isVowel(s[left]) && isVowel(s[right])) {
                char c = s[left];
                s[left] = s[right];
                s[right] = c;

                left++;
                right--;
            } else {if(!isVowel(s[left])) {
                left++;
            }
            if(!isVowel(s[right])) {
                right--;
            }  }
        }

        return s;
        
    }
};