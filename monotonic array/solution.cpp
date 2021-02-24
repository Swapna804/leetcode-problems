class Solution {
public:
      bool isMonotonic(vector<int>& A) {
        bool incr = true;
        bool dec = true;
        int n=A.size();
        for (int i = 0; i < n- 1; ++i) {
            if (A[i] > A[i+1])
                incr = false;
            if (A[i] < A[i+1])
               dec = false;
        }
        return incr || dec;   
    }

};
