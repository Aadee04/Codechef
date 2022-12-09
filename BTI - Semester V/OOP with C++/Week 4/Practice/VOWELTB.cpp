// AS 14/09/22

#include <iostream>
using namespace std;

int main() 
{
    char C;
    cin >> C;
    
    if(C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
	return 0;
}
