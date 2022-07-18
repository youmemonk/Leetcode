class Solution {
public:
    static bool compare(string a, string b){
        return a+b > b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> numString;
        string ans = "";
        
        for(int num : nums){
            string s = to_string(num);
            numString.push_back(s);
        }
        
        sort(numString.begin(), numString.end(), compare);        
        for(string s : numString) ans += s;
        
        //leading zeros
        return (ans[0] == '0') ? "0" : ans;
    }
};