class Solution {
public:
    int scoreOfString(string s) {
      int sum =0;
      int temp = 0;
      for(int i=0 ; i<s.size()-1; i++){
      temp = abs(s[i]-s[i+1]);
      sum += temp;
      }  
      return sum;
    }
};