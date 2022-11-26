// AS 01/08/22

#include <iostream>
using namespace std;

int main() 
{
    int X;
    float acc_bal;
    cin >> X;
    cin >> acc_bal;
    
    if(X % 5 == 0 && X <= acc_bal - 0.5)
        cout << ((acc_bal - X) - (0.5));
    else
        cout << acc_bal;
    
	return 0;
}