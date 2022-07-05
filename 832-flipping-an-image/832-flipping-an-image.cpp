class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int img = 0; img < image.size(); img++){
            int i = 0, j = image[img].size() - 1;
            while(i < j){
                swap(image[img][i++], image[img][j--]);
            }
        }
        
        for(int i=0; i<image.size(); i++){
            for(int j=0; j<image[0].size(); j++){
                image[i][j] = image[i][j] == 1 ? 0 : 1;
            }
        }
        
        return image;
    }
};