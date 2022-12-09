// AS 10/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T)
	{
	    if(T >= 1 && T <= 100)
	    {
	        int X, Y, Z;
	        cin >> X >> Y >> Z;
	        if(Z <= 10 && X >= 1 && Y <= X)
	            cout << (X-Y+Z) << endl;
	    }
	    T--;
	}
	return 0;
}
