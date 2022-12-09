// AS 07/12/22

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int A, C;
	    cin >> A >> C;
	    
	    float B = (float)(A+C)/2;
	    
	    if( B == round(B))
	        cout << B << endl;
	    else
	        cout << -1 << endl;
	}
	return 0;
}
