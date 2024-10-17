class Solution {
public:
    int maximumSwap(int num) {
      in ans=num;
      string s=to_string(num);
      for(int i=0;i<s.lengh()-1;i++){
        for(int j=i+1;j<s/lengh();j++){
            swap(s[i],s[j]);
            ans=max(ans,stoi(s));
            swap(s[i],s[j]);
        }
      }
      return ans;
    }
};
