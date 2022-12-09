// AS 24/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int A, B, C;
	    cin >> A >> B >> C;
	    if((double)(A+B)/2 > C)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
