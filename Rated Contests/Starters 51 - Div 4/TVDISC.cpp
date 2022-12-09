// AS 10/08/22

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T)
	{
	    if(1 <= T && T <= 5000)
	    {
	        int A, B, C, D;
	        cin >> A >> B >> C >> D;
	        if(A >= 1 && B <= 100)
	        {
	            if(0 <= C && C <= A && 0 <= D && D <= B)
	            {
	                if(A-C < B-D)
	                    cout << "First" << endl;
	                else if(A-C > B-D)
	                    cout << "Second" << endl;
	                else
	                    cout << "Any" << endl;
	                    
	            }
	        }
	    }
	    T--;
	}
	return 0;
}
