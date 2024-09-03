class Solution {
public:
    int getLucky(string s, int k) {
    int ans =0;
    string ans2 = "";
    for(int i=0; i<s.size(); i++){
    ans = s[i] - 'a'+1;
    ans2+=to_string(ans);
    }
    int a=0;
    for(char ch:ans2){
        int x=ch-'0';
        a+=x;
    }
    
    while(--k){
        int n=a;
        a=0;
        while(n){
            int r=n%10;
            n=n/10;
            a+=r;

        }
    }
    return a;
    
    }
     
};