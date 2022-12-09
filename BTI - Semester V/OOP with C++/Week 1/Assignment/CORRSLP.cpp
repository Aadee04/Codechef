// AS 02/08/22

#include <iostream>
using namespace std;

int main() {
	int T, N, L, X;
	cin >> T;
	if(T >= 1 && T <= 1000)
	{
	    while(T--)
	    {
    	    cin >> N >> L >> X;
    	    if(L >= 0 && X >= 0 && N <= 1000 && L <= N)
    	    {
    	        cout << min(N-L, L)*X << endl;
    	    }
	    }
	}
	return 0;
}
