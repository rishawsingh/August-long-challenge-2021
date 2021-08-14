#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int lli;
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define mod 1000000007

int main() {
    int test;
    cin >> test;
    while(test--)
    {
        lli n,m;
        cin >> n >> m;
        vpii vp;
        for(int i=0;i<m;i++)
        {
            lli x,y;
            cin >> x >> y;
            vp.push_back({x,y});
            
        }
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        lli lcm=1;
        lli rem = n;
        lli result =0;
        for(int i=0;i<m && rem>0;i++)
        {
            lli a=vp[i].first;
            lli b=vp[i].second;
            lcm=lcm*b/__gcd(lcm,b);
            result +=(rem-n/lcm)*a;
            rem = n/lcm;
            
        }
        cout<<result<<"\n";
    }
	// your code goes here
	return 0;
}