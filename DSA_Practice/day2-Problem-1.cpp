class Solution {
  public:
  bool is_vowel(char a){
      if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') return true;
      return false;
  }
    int isGoodorBad(string s) {
     int n = s.length();
     int vowel=0;
     int consonant = 0;
     for(int i=0;i<n;i++){
         if(is_vowel(s[i])||s[i]=='?'){
             vowel++;
             if(consonant>3) return 0;
             if(is_vowel(s[i])){
             consonant = 0;
             }
         }
         if(!is_vowel(s[i])||s[i]=='?'){
             consonant++;
             if(vowel>5) return 0;
             if(!is_vowel(s[i])&&s[i]!='?'){
             vowel=0;
             }
         }
     }
     if(consonant>3||vowel>5) return 0;
     return 1;
     }
};
