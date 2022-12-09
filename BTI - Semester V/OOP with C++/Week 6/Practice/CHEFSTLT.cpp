// AS 30/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string S1, S2;
        int min = 0, max = 0;
        cin >> S1 >> S2;
        
        for(int i = 0; i < S1.length(); i++)
        {
            if(S1[i] == '?' || S2[i] == '?')
            {
                max += 1;
            }
            else if(S1[i] != S2[i])
            {
                min += 1;
                max += 1;
            }
        }
        
        cout << min << " " << max << endl;
    }
    
	return 0;
}
