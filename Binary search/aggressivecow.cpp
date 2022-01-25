#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define f(i,n)          for(int i=0;i<(n);++i)
#define fa(i,a,n)       for(int i=a;i<=(n);++i)
#define fd(i,a,n)       for(int i=a;i>=(n);--i)
#define tc              int t;cin>>t;f(testcase,t)
#define ld              long double

#define pii             pair<int,int>
#define mem(a,i)        memset(a,i,sizeof(a))
#define all(x)          x.begin(),x.end()
#define PI 3.1415926535897932
#define M 1000000007
void c_p_c() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

}
void solve() {
    int n,c;cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int low=a[0],high=a[n-1],mid,best=0;
    while(low<=high){
        mid=low+(high-low)/2;
        int count=1,left=0;
        for(int i=1;i<n && count<c;i++){
            if(a[i]-a[left]>=mid){
                left=i,count++;
            }
        }
        if(count>=c){
            best=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<best<<endl;
    
}

int32_t main() {

    c_p_c();
    tc
    solve();
    return 0;
}