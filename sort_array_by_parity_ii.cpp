class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        vector<int> index1,index2;
        for(int i=0;i<A.size();i+=2){
            if(A[i]&1){
                index1.push_back(i);
            }
        }
        for(int j=1;j<A.size();j+=2){
            //cout<<A[j]<<" ";
            if(A[j]%2==0){
                //cout<<A[j]<<" ";
                index2.push_back(j);
            }
        }
        for(int i=0;i<index1.size();i++){
            swap(A[index1[i]],A[index2[i]]);
        }
        
        return A;
    }
};