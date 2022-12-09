// AS 24/09/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string S, S1, S2;
        cin >> S;
        int l = S.length(), i;
        
        for(i = 0; i < l; i++)
        {
            if(i < l/2)
                S1.push_back(S[i]);
            else if(i == l/2 && l%2==1)
                continue;
            else
                S2.push_back(S[i]);
        }
        
        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());
        
        if(S1 == S2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
	return 0;
}
