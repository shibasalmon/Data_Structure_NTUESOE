int dotProduct(int a[], int b[], int n) {
    int ans {};
    for(int i=0;i<n;i++) {
        ans += a[i]*b[i];
    }

    return ans;
}