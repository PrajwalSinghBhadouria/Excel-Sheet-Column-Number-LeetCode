class Solution {
public:
    int titleToNumber(string columnTitle) {
        int count=0,sum=0;
        for(int i=columnTitle.size()-1; i>=0; i--){
            sum = sum + ((columnTitle[i]-65)+1)*pow(26,count);
            count++;
        }
        return sum;
    }
};
