#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()
#define int long long int
#define fror(a , b, c) for(int (a)=(b);(a)<(c);(a)++)
typedef vector<int> vi; 
typedef set<int> si;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef vector<pair<int,int>> vpp;
typedef pair<int,int> pi;
typedef vector<vector<int>> vvi;
#define po pop_back
#define pb push_back
bool isprime(int x)
{
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int32_t main()
{
vector<int> v={588,665,216,113,642,4,836,114,851,492,819,237};
int p=837;
int x;
vector<int> posP;
for(int i=p;i<1000;i++)
{
    x=i;

    if(isprime(x))
    {
        posP.pb(i);
        cout<<i<<" ";
    }
}
return 0;
}