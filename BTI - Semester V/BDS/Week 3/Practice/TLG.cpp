// AS 01/09/22


#include <iostream>
using namespace std;

int main() 
{
    int N, L, W, ST = 0, TT = 0;
    cin >> N;
    
    while(N--)
    {
        int Si, Ti;
        cin >> Si >> Ti;
        
        ST += Si;
        TT += Ti;
        
        if(ST - TT > L)
        {
            L = ST - TT;
            W = 1;
        }
        else if(TT - ST > L)
        {
            L = TT - ST;
            W = 2;
        }
    }
    cout << W << " " << L << endl;
    
	return 0;
}
