// AS 22/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int A, B;
	    cin >> A >> B;
	    if((A-B) % 2 == 0)
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
