// AS 14/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T)
	{
	    if(1 <= T && T <= 1000)
	    {
	        int R;
	        cin >> R;
	        if(1000 <= R && R < 1600)
	            cout << 3 << endl;
	        else if(R < 2000)
	            cout << 2 << endl;
	        else if(2000 <= R && R <= 4500)
	            cout << 1 << endl;
	        else
    	        continue;
	    }
	    T--;
	}
	return 0;
}
