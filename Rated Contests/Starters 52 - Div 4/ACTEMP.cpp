// AS 17/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int A, B, C;
	    cin >> A  >> B  >> C;
	    if(B >= A && B >= C)
	        cout << "Yes" << endl;
        else
	        cout << "No" << endl;
	}
	return 0;
}
