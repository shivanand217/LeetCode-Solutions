#define MOD 1000000007

int Solution::nchoc(int A, vector<int> &B) {

    priority_queue<int> max_heap;

    int choc = 0;

    for(int i=0; i<B.size(); i++)
    {
        max_heap.push(B[i]);
    }

    int i=0;

    while(i < A)
    {
        int k = max_heap.top();
        max_heap.pop();

        choc = (choc%MOD + k%MOD)%MOD;
        int req = k/2;

        max_heap.push(req);

        i++;
    }

    return choc;
}
