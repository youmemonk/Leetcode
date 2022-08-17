class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<char, string> wordmp;
        unordered_set<string> word_set;
        for(int i = 0; i < 26; i++){
            wordmp[char(i + 97)] = morse[i];
        }
        
        for(auto word : words){
            string s = "";
            for(int i = 0; i < word.length(); i++){
                s += wordmp[word[i]];
            }
            
            word_set.insert(s);
        }
        
        return word_set.size();
    }
};