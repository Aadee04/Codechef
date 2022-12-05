// AS 12/10/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int n, l;
        cin >> n;
        
        long x;
        vector<long>v;
        vector<long>::iterator it;
        
        while(n--)
        {
            cin >> x;
            it = upper_bound(v.begin(), v.end(), x);
            
            if(it != v.end()) 
                *it = x;
            else 
                v.push_back(x);
        }
        
        l = v.size();
        cout << l << " ";
        
        for(int i = 0; i < l; i++) 
            cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}
