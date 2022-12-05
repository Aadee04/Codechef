// AS 14/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T)
	{
	    if(1 <= T && T <= 5000)
	    {
	        int X1, X2, Y1, Y2, Z1, Z2;
	        cin >> X1 >> X2 >> Y1 >> Y2 >> Z1 >> Z2;
	        if(X2 >= X1 && Y2 >= Y1 && Z2 <= Z1)
	            cout << "YES" << endl;
	        else
	            cout << "NO" << endl;
	    }
	    T--;
	}
	return 0;
}
