class Solution {
private:
    bool compare(string haystack, string needle, int i){
        for(int j = 0; j < needle.length(); j++){
            if(haystack[i] != needle[j])
                return false;
            i++;
        }
        return true;
    }
public:
    int strStr(string haystack, string needle) {
        int ans = -1, i = 0;

        while(i < haystack.length()){
            if(haystack[i] == needle[0]){
                if(compare(haystack, needle, i))
                    return i;
            }
            i++;
        }

        return ans;
    }
};