// AS 14/08/22

#include <iostream>
using namespace std;

int main() 
{
    int N;
	cin >> N;
	if(N >= 0 && N <= 1000)
	{
	    if(N%4 == 0)
	        cout << ++N <<endl;
	    else
	        cout << --N <<endl;
	}
	return 0;
}
