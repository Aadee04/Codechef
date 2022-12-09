// AS 16/08/22

#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N, ZN = 0, j = 1;
        cin >> N;
        for(int i = 5; N/i >= 1; i *= 5)
        {
            ZN += N/i;
        }	
        cout << ZN << endl;
    }
    
	return 0;
}
