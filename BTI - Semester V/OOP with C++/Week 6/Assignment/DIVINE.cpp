// AS 30/09/22

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string S, P;
    int N;
    cin >> S;
    cin >> N;
    sort(S.begin(), S.end());
    
    while(N--)
    {
        cin >> P;
        sort(P.begin(), P.end());
        bool divine = true;
        
        for(int i = 0, j = 0; i < P.length();)
        {
            if(P[i] == S[j])
                i++;
            else if(P[i] > S[j])
                j++;
            else
            {
                divine = false;
                break;
            }
        }
        
        if(divine)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        
    }
    
	return 0;
}
