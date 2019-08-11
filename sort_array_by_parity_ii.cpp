// With extra space
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

// Without extra space
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int even_index=0,odd_index=1;
        
        while(even_index < A.size()){
            
            if(A[even_index]%2 == 1){
                while(A[odd_index]%2 == 1){
                    odd_index+=2;
                }
                swap(A[even_index],A[odd_index]);
            }
            even_index+=2;
        }
        
        return A;
    }
};