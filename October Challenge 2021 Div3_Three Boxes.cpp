//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction

#include <bits/stdc++.h>

using namespace std;

//#define tcase int t;cin>>t;while(t--)
#define ll long long
#define pi 3.14159
#define pb push_back

using vi = vector<int>;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        
        int bag;
        int size = d;
        size -= a;
        if(size == 0)
            bag = 3;
        else if(size >= b)
        {
            size -= b;
            if(size >= c)
                bag = 1;
            else
                bag = 2;
        }
        else if(size < b)
            bag = 3;
        cout << bag << endl;

    }


    return 0;
}
