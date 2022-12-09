// AS 12/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	
	while(T)
	{
	    if(1 <= T && T <= 100)
	    {
	        int X;
	        cin >> X;
	        if(1 <= X && X <= 10000)
	        {
	            if(X > 5000)
	                X -= 500;
	            else if(X > 1000)
	                X -= 100;
	            else if(X > 100)
	                X -= 25;
	            else
	                X = X;
	           
	            cout << X << endl;
	        }
	    }
	    T--;
	}
	return 0;
}
