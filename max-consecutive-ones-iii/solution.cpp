int longestOnes(vector<int>& A, int K) {
    int i = 0, j;
    for (j = 0; j < A.size(); j++) {
        if (A[j] == 0) {
            K--;                // Decrement the count of K until it is 0.
        }
        if (K < 0 && A[i] == 0) { // if we encounter 0, we increment the k since we increment the i pointer to see the next window.
            K++;
            i++;
        }
    }
    return j - i;
}