class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(sum%3 !=0){ 
            return 0;
        }

        int s = sum/3;
        cout<<s;
        bool s1=false, s2 = false, s3 = false;
        int presum=0;

        for(int i=0;i<arr.size();i++){
            presum+= arr[i];
            if(presum==s && !s1){
                s1=true;
            }
            else if(s1 && presum == s+s && !s2) s2 = true;
            else if(s1 && s2 && presum == s+s+s && !s3) s3 = true;
        }
        if( s1 && s2 && s3) return true;
        return 0;
    }
};