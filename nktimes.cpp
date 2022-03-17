#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Solution{
public: 
    int repeatCount(int a[], int n, int k){
        int check = n/k;
        int count = 1; 
        sort(a, a+n);
        for (int i=1; i<n; i++){
            if(a[i-1] == a[i])
            count++; 
       

        }

    }

};