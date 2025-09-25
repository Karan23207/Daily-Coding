int toggleKBits(int n, int k) {
    // Write your code here.
    int temp=(1<<k) -1;
    n= n ^ temp;
    return n;
}
