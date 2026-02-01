class Solution {
  public:
    int binaryToDecimal(string &b) {
        int ans = 0;
        for(char ch:b){
            ans = ans * 2 +(ch-'0');
        }
        return ans;
    }
};