// AS 01/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T, A, B, C, D;
	cin >> T;
	if(T >= 1 && T <= 10000)
	{
	    while(T--)
	    {
    	    cin >> A >> B >> C >> D;
    	    
    	    if(A+B+C+D == 360)
    	    {
    	        if(A >= 1 && B >= 1 && C >= 1 && D >= 1)
    	        {
    	            if(A+C == 180 && B+D == 180)
    	                cout << "YES" << endl;
    	            else
    	                cout << "NO" << endl;
    	        }
    	    }
	        
	    }
	}
	return 0;
}
