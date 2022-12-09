// AS 07/12/22

#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    
	    if(X > Y)
	        cout << "LOSS" << endl;
	    else if(X < Y)
	        cout << "PROFIT" << endl;
	    else
	        cout << "NEUTRAL" << endl;
	}
	return 0;
}
