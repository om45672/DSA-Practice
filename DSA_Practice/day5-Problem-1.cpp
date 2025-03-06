class Solution {
public:
   int distMoney(int money, int children) {
        if (money < children){
            return -1;
        }
        money -= children;
        int ans = min(money / 7, children);
        money -= 7 * ans;
        int remain = children - ans;

        if (remain == 1 && money == 3){
            ans -= 1;
        } else if (remain == 0 && money > 0){
            ans -= 1;
        }
        return ans;
    }
};
