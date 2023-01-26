You task is to find minimal natural number N, so that N! contains exactly Q zeroes on the trail in decimal notation.
As you know N! = 1 * 2 * ... * N. For example, 5! = 120, 120 contains one zero on the trail.

Input
Input starts with an integer T (≤ 10000), denoting the number of test cases.
Each case contains an integer Q (1 ≤ Q ≤ 108) in a line.

Output
For each case, print the case number and N. If no solution is found then print impossible.

Sample
Input	         Output
3               Case 1: 5
1               Case 2: 10
2               Case 3: impossible
5


#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int anscon=0;
    while(x){
        anscon+=x/5;
        x/=5;
    }
    return anscon;
}

int main()
{
    int T, op=1, Q;
    cin>>T;
    while(T--){
        scanf("%d",&Q);
        int st=0,en=10000000000,mid;
        int ans=0;
        while(st<=en){
            int mid=(st+en)/2;
            int k=sum(mid);
            if(k==Q){
                ans=mid;
                en=mid-1;
            }
            else if(k<Q){
                st=mid+1;
            }
            else
                en=mid-1;
        }
        if(!ans)
            printf("Case %d: impossible\n",op++);
        else
            printf("Case %d: %d\n",op++,ans);
    }
    return 0;
}
