class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt =0;
        int m = flowerbed.size();
        if(m==0) return false;
        if(n==0) return true;
        if(m==1 && flowerbed[0]==1) return false;
        else if(m==1 && flowerbed[0]==0) return true;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            cnt++;
        }
        for(int i=1;i<m-1;i++){
            if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i-1]==0){
                flowerbed[i]==1;
                cnt++;
            }
        }
        if(cnt>=n) return true;
        return false;
    }
};
