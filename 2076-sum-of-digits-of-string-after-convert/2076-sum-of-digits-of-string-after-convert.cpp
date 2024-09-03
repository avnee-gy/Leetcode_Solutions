class Solution {
public:

    int getSum(int x){
        int sum=0;
        while(x>0){
            sum += x%10;
            x = x/10;
        }
        return sum;
    }

    int getLucky(string s, int k) {
        int trans = 0;
        int i=0;
        while(s[i]){
            char ch = s[i];
            int val = int(ch) - int('a') + 1;
            trans +=  getSum(val);        
            i++;
        }
        k = k-1;
        while(k>0){
            trans = getSum(trans);
            k--;
        }

        return trans;
    }
};