class Solution {
public:
    bool palindrome(string s, int l, int r){
        while(l <= r){
            if(s[l] !=s[r]){
                return 0;
            }
            l++;
            r--;
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left <= right){
            if(s[left] != s[right]){
                return palindrome(s, left+1, right) || palindrome(s, left, right-1);
            }
            left++;
            right--;
                
        }
        return 1;
    }
};
