// AS 21/10/22

#include <iostream>
using namespace std;

int main() 
{
    unsigned long long N;
    int jump = 1;
    cin >> N;

    if(N%3 == 0 || N%6 == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

	return 0;
}
