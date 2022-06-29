class Solution {
public:
    int sqNumber(int n){
        int sum = 0;
        while(n > 0){
            sum += pow(n%10,2);
            n = n/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int t = n;
        int i=0;
        unordered_map<int, int> ump;
        while(t != 1){
            t = sqNumber(t);
            if(ump.find(t) == ump.end()) ump.insert(make_pair(t,i));
            else return false;
            i++;
        }
        
        return true;
    }
};