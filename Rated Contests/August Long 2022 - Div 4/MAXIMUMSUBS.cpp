// AS 12/08/22

#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T)
	{
	    int X;
	    cin >> X;
	    if(1 <= X && X <= 30)
	    {
	        cout << X*2 << endl;
	    }
	    T--;
	}
	return 0;
}
