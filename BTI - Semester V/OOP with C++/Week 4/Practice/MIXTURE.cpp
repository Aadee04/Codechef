// AS 14/09/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int A, B;
        cin >> A >> B;
        
        if(A > 0 && B > 0)
            cout << "Solution" << endl;
        else if(B == 0)
            cout << "Solid" << endl;
        else
            cout << "Liquid" << endl;
    }
    
	return 0;
}
