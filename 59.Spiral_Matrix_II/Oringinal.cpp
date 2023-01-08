class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int num=1;
        int layer=0;
        for (int j=0;j<n/2;j++){
            for (int i=0+layer;i<n-1-layer;i++){
                matrix[layer][i]=num;
                num++;
            }

            for (int i=0+layer;i<n-1-layer;i++){
                matrix[i][n-1-layer]=num;
                num++;
            }

            for (int i=n-1-layer;i>=1+layer;i--){
                matrix[n-1-layer][i]=num;
                num++;
            }

            for (int i=n-1-layer;i>=1+layer;i--){
                matrix[i][layer]=num;
                num++;
            }
            layer++;
        }
        if(n%2!=0){matrix[n/2][n/2]=n*n;}
        return matrix;
    }
};
