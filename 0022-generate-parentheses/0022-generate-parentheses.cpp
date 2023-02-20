class Solution {
public:
    void solve(int op, int co, string str, int &n, vector<string>&ans ) {
        if( (op == n) && (co == n) ){
            ans.push_back( str ) ;
            return ;
        }
        if( op > n || co > n )  return ;
        
        if(  op == co ){
            solve( op+1, co, str+'(' , n, ans ) ;
        }  
        else{
            solve( op+1, co, str+'(' , n, ans ) ;
            solve( op, co+1, str+')' , n, ans ) ;  
        }
    }  
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans ;
        solve(0, 0, "", n, ans) ;
        return ans ;
    }
};