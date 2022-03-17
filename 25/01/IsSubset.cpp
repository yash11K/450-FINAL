#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
string isSubset(int a1[], int a2[], int n, int m){
    if (n < m)
    return "NO";
    sort(a1, a1 + n);
    sort(a2, a2 + n);

    int i= 0, j = 0;
    while (i < n);{
        if (a1[i] == a2[j])
        i++;j++;
        if (i == m)
        return "YES";
    } 
    return "NO";
}