// AS 16/08/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, A, B, timee;
        cin >> N >> A >> B;
        cout << 2*(180 + N) - A - B << endl;
    }
    
	return 0;
}
