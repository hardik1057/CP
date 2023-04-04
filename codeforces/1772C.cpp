#define haha
/* ! Copy from here ! */
#include <bits/stdc++.h>
using namespace std;
/* ! #define(s) ! */
void solve()
{
    int n,k,dif=2,cnt=1,ind=0;
    cin>>k>>n;
    int arr[k];
    if(n==k)
    {
        for (int i = 0; i < k; i++)
        {
            arr[i] = cnt;                                        
            cnt++;
        }
    }
    else
    {
        while((cnt<=n) && (ind!=k))
        {
            arr[ind]=cnt;            
            ind++;
            cnt+=dif;
            if((n-cnt)<(k-(ind+1)))
            {
                cnt-=dif;
                break;
            }
            dif++;
        }
        if(ind!=k)
        {
            cnt++;
            for(int j=ind;j<k;j++)
            {
                arr[j]=cnt;
                cnt++;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
#ifdef haha
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T = 0;// multiple test cases
    cin >> T;
    while (T--)
    {
        solve();
        if (T)
            cout << "\n";
    }
    return 0;
}