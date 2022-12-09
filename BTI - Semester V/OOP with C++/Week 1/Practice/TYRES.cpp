// AS 02/08/22

#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	
	if(T >= 1 && T <= 100)
	{
	    while(T--)
	    {
	        cin >> N;
	        if(N%4 == 2)
	            cout << "YES" << endl;
	        else
	            cout << "NO" << endl;
	    }
	}
	
	return 0;
}
