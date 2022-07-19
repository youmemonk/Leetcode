class Solution {
public:
    static bool comp(string a, string b){
        return a+b > b+a;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> numString;
        string ans = "";
        for(int num : nums) numString.push_back(to_string(num));
        
        sort(numString.begin(), numString.end(), comp);
        for(string s : numString) ans += s;
        return (ans[0] == '0' ? "0" : ans);
    }
};