// AS 02/08/22

#include <iostream>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	if(T >= 1 && T <= 100000)
	{
	    while(T--)
	    {
	        cin >> N;
	        if(N >= 1 && N <= 200000 && N%2==1)
	        {
	            cout << N/2 + 1 << endl;
	        }
	    }
	}
	return 0;
}
