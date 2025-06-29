~~~cpp
//vector must be sorted in nondecreasing order beforehand
template <typename T> int binarySearch(int val, vector<T>& v) {
  int l=0, r=v.size();
  while(l <= r) {
    int m = l+(r-l)/2;
    if(v[m]=val) return m;
    else if(v[m]<val) l =m+1;
    else r =m-1;
  }
  return -1;
}

~~~
