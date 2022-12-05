// AS 19/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string S;
        cin >> S;
        
        int i = -1, W = 0, L = 0;
        
        while( ++i < S.length() )
        {
            if(S[i] == '1')
                W += 1;
            else
                L += 1;
        }
        
        if(W > L)
            cout << "WIN" << endl;
        else if (W < L)
            cout << "LOSE" << endl;
        else
        {
            if(S[0] == '1')
                cout << "WIN" << endl;
            else
                cout << "LOSE" << endl;
        }
    }
    
	return 0;
}
