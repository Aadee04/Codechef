// AS 19/09/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string S;
        cin >> S;
        
        string first, second;
        int l = S.length();
        
        for(int i = 0; i < l/2; i++)
        {
            first += S[i];
            second += S[l - i - 1];
        }
        
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        
        if(first == second)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
