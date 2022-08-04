class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int color=image[sr][sc];
        if(color!=newcolor)
            dfs(image,sr,sc,color,newcolor);
        return image;
    }
    void dfs(vector<vector<int>>& image, int r, int c, int color, int newcolor)
    {
        if(image[r][c]==color)
        {
            image[r][c]=newcolor;
            if(r>=1)
                dfs(image,r-1,c,color,newcolor);
            if(c>=1)
                dfs(image,r,c-1,color,newcolor); 
            if(r+1<image.size())
                dfs(image,r+1,c,color,newcolor);
            if(c+1<image[0].size())
                dfs(image,r,c+1,color,newcolor);
        }
    }
};