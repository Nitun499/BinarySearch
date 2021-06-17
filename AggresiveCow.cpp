#include <bits/stdc++.h>
#define fr(i, n) for (int i = 0; i < n; i++)
using namespace std;
const int N = 1e5;
int n, c;
int stall[N];
bool check(int x)
{
    int cow=1,pos=stall[0];
    for(int i=1;i<n;i++){
        if(stall[i]-pos>=x){
            cow++;
            pos=stall[i];
        }
        if(cow>=c){
            break;
        }
    }
    return cow==c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            cin >> stall[i];
        }
        sort(stall, stall + n);
        int low = 0, high = 1e9;
        while (high - low > 1)
        {
            int mid = low + (high - low) / 2;
            if (check(mid))
            {

                low = mid;
            }
            else
            {

                high = mid - 1;
            }
        }

        if (check(high))
        {
           cout<<high<<endl ;
        }
        else if (check(low))
        {
            cout<< low<<endl ;
        }
        else
        {
            return -1;
        }
    }
    return 0;
    
}