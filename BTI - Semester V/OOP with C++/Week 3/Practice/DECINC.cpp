// AS 26/08/22	

#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if(N%4 == 0)
        cout << ++N << endl;
    else
        cout << --N << endl;
    
    
	return 0;
}
