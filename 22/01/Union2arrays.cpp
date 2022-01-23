// // Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

// driver code 

#include <bits/stdc++.h>
using namespace std;
const int MAX = 10e5;

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m){
        bool mark[MAX] = {0};
        int max =0; 

        for (int i=0; i<n; i++){
            if (mark[a[i]] != 1)
                mark[a[i]] = 1;
            if (a[i] > max)
                max = a[i]; 
        }

        for (int i=0; i<m; i++){
            if (mark[b[i]] != 1)
                mark[b[i]] = 1;
            if (b[i] > max)
                max = b[i];
        }

        int count =0;
        for (int i=0; i<=max; i++){
            if (mark[i] == 1)
            count++;
        } 
        return count; 
    }
};

//  driverr code 

int main() {
    int tc; cin >> tc;

    while (tc--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for(int i=0; i<n; i++)
            cin >> a[i];    

        for(int i=0; i<m; i++)
            cin >> b[i];
        
        Solution ob;
        cout << ob.doUnion(a,n,b,m)<< endl;
    }
    return 0;
}

// // Custom input function
// 5 3
// 1 2 3 4 5
// 1 2 3