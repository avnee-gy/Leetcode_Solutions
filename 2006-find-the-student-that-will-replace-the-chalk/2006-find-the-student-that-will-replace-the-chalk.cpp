class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int chalkSum = 0;
        // while(k>=0){
        //     for(int i=0;i<chalk.size();i++){
        //         if
        //     }
        // }
        for(int i=0;i<chalk.size();i++){

            chalkSum += chalk[i];
        }
    
        while(chalkSum < k){
            k -= chalkSum;
        }
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]<= k){
                k -= chalk[i];
            }
            else return i;
        }

        return 0;
        
    }
};