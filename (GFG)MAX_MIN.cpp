//Find minimum and maximum element in an array
pair<long long, long long> getMinMax(long long a[], int n) {
 sort(a,a+n);

    pair<long long, long long> p;

    p.first=a[0];

    p.second=a[n-1];
 
    return p;
    
}