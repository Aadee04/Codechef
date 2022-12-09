// AS 07/12/22

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T;
	cin >> T;
	while(T--)
	{
	    int N, X;
	    cin >> N >> X;
	    
	    int income = pow(2, X);
	    
	    for(int i = 1; i <= N; i++)
	        income = income/2;
	        
	   cout << income << endl;
	}
	return 0;
}
