// AS 01/08/22

#include <iostream>
using namespace std;

int main() 
{
	int X, Y, T;
	cin >> T;

	if(T >= 1 && T <= 20000)
	{
	    while(T--)
	    {
	        cin >> X >> Y;
	        if(X*107/100 >= Y)
	            cout << "YES" << endl;
	        else
	            cout << "NO" << endl;
	    }
	}

	return 0;
}
