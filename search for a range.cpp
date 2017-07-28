vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> p;

    int left = -1, right = -1;
    int lo=0;
    int hi = A.size()-1;
    int mid;

	// first find the leftmost index with simple binary search
    while(lo <= hi)
    {
        mid = lo + (hi - lo)/2;
        if(A[mid] == B)
        {
            left = mid;
            hi = mid-1;
        }
        else if(A[mid] < B)
        {
            lo = mid+1;
        }
        else
        {
            hi = mid-1;
        }
    }

	// if element not found
    if(left == -1)
    {
        p.push_back(-1);
        p.push_back(-1);
    }
    else // if element found with its leftmost index in the array then searching its rightmost index in subarray [left+1, A.size()] while updating when found
    {
        p.push_back(left);

        lo = left+1;
        hi = A.size()-1;

        while(lo <= hi)
        {
            mid = lo + (hi - lo)/2;

            if(A[mid] == B)
            {
                right = mid;
                lo = mid+1;
            }
            else if(A[mid] > B)
            {
                hi = mid-1;
            }
        }

        if(right != -1)
        {
            p.push_back(right);
        }
        else
        {
            p.push_back(left);
        }

        return p;
    }
}

