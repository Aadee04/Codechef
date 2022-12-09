// AS 24/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, X, p = 0, max = 0, min = 0;
        string S;
        
        cin >> N >> X;
        cin >> S;
        
        for(int i = 0; i < N; i++)
        {
            if(S[i] == 'R')
            {
                p += 1;
                if(max < p)
                    max = p;
            }
            else
            {
                p -= 1;
                if(min > p)
                    min = p;
            }
        }
        

        cout << max + min*-1 + 1 << endl;
    }
    
	return 0;
}
