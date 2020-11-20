
    class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(),n=word2.length();
        int D[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0){D[i][j]=j;}
                else if(j==0){D[i][j]=i;}
                else if(word1[i-1]==word2[j-1]){D[i][j] = D[i-1][j-1];}
                else{
                    int left = D[i][j-1];
                    int up= D[i-1][j];
                    int lu = D[i-1][j-1];
                    D[i][j] = min(left,min(up,lu))+1;
                }
            }
        }
        return D[m][n];
    }
};
