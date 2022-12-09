// AS 24/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int W, X, Y, Z;
	    bool yes = false;
	    cin >> W >> X >> Y >> Z;
	    
	    if(W == X || W == Y || W == Z)
	        yes = true;
	    else if(W == X+Y || W == Y+Z || W == Z+X)
	        yes = true;
	    else if(W == X+Y+Z)
	        yes = true;
	  
	    if(yes)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	    
	}
	return 0;
}
