class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        for(int i=0;i<A.size();i++){
            int k = 0, p = A[i].size()-1;
            while(k <= p){
                swap(A[i][k], A[i][p]);
                k++;
                p--;
            }
        }        
        for(int i=0;i<A.size();i++){
            for(int k=0;k<A[i].size();k++){
                A[i][k] = 1 - A[i][k];
            }
        }
        
        return A;
    }
};