// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        // If one string is empty, return the other
    if (s1.empty()) return s2;
    if (s2.empty()) return s1;
    
    // Result string to store the sum
    string result = "";
    
    // Indices to traverse strings from end
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    
    // Carry to handle digit sum > 9
    int carry = 0;
    
    // Traverse both strings from end
    while (i >= 0 || j >= 0 || carry > 0) {
        
        // Get current digits (0 if string exhausted)
        int digit1 = (i >= 0) ? s1[i] - '0' : 0;
        int digit2 = (j >= 0) ? s2[j] - '0' : 0;
        
        // Sum current digits and carry
        int sum = digit1 + digit2 + carry;
        
        // Update carry and current digit
        carry = sum / 10;
        sum %= 10;
        
        // Prepend current digit to result 
        // (we'll track leading zeros later)
        result.push_back(('0' + sum));
        
        // Move indices
        i--;
        j--;
    }
    
    // Remove leading zeros
    while (result.size() > 1 && result[result.size()-1]=='0') {
        result.pop_back();
    }
    
    // reverse the string 
    reverse(result.begin(), result.end());
    
    return result;
    }
};