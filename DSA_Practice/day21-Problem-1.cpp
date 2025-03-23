class Solution {
  public:
    int countSubstr(string& s, int k) {
        return countAtMostK(s, k) - countAtMostK(s, k - 1);
    }

  private:
    int countAtMostK(string& s, int k) {
        if (k < 0) return 0;
        
        unordered_map<char, int> freq;
        int left = 0, right = 0, count = 0, n = s.size();

        while (right < n) {
            freq[s[right]]++;

            while (freq.size() > k) { 
                freq[s[left]]--;
                if (freq[s[left]] == 0) freq.erase(s[left]);
                left++;
            }

            count += (right - left + 1); 
            right++;
        }

        return count;
    }
};
