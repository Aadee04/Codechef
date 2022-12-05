// AS 01/09/22


#include <iostream>
using namespace std;

int main() 
{
    int P, count = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> P;
        if(P >= 10)
            count++;
    }
    cout << count << endl;
     
    
	return 0;
}
