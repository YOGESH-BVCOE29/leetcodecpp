class Solution {
public:
 bool isfreqsame(int freq1[], int freq2[]){
            for(int i=0; i<26; i++){
                if(freq1[i] != freq2[i]){return false;}
            } return true;
        }
    bool checkInclusion(string s1, string s2) {
       
        int f[26] = {0};
        for(int i=0; i<s1.length(); i++){
            int idx = s1[i] - 'a';
            f[idx]++;
        }
        int ws = s1.length();
       
        for(int i=0; i<s2.length(); i++){
          int idx = i, widx = 0;
           int wf[26] = {0};
           while(widx < ws && idx < s2.length()){
            wf[s2[idx]-'a']++;
            widx++, idx++;

           } if (isfreqsame(f, wf)){
            return true;
        }
       
        }
    

return false;
       
    } 
};