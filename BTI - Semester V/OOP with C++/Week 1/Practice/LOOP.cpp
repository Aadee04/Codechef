// AS 02/08/22

#include <iostream>
using namespace std;

int main() {
	int T, A, B, M, rev;
	cin >> T;
	if(T >= 1 && T <= 1000)
	{
	    while(T--)
	    {
	        cin >> A >> B >> M;
	        if(M >= 2 && A >= 1 && B <= M && A != B)
	        {
	            if(A>B)
	                rev = M-A + B;
	            else
	                rev = M-B + A;
	            cout << min(abs(A-B), rev) << endl;
	        }
	    }
	}
	return 0;
}
