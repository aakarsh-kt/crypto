#include<bits/stdc++.h>
#include<cmath>
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
int32_t main()
{

     vi arr={14,6,11};
     int p=29;
     int k=3;
    while(k--){
     for(int i=0;i<28;i++)
     {
        int temp= p*i+arr[k] ;
        if(fmod(sqrt(temp), 1) == 0)
        {
            cout<<sqrt(temp)<<"   "<<arr[k]<<endl;
        }
     }
    
    }
return 0;
}

