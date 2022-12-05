// AS 01/09/22


#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        
        int N, S38 = 0, L108 = 0;
        cin >> N;
        
        while(N--)
        {
            string code;
            cin >> code;
            
            if(code == "START38")
                S38++;
            else if(code == "LTIME108")
                L108++;
        }
        
        cout << S38 << " " << L108 << endl;
    }
    
	return 0;
}
