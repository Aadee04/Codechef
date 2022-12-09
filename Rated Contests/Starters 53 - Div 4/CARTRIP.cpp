// AS 24/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X, cost = 300*10;
	    cin >> X;
	    if(X >= 300)
	        cost += (X-300)*10;
	    cout << cost << endl;
	}
	return 0;
}
