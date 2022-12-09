// AS 06/10/22

#include <string>
#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        string S, compressed = "";
        cin >> S;
        int count = 0;
        
        for(int i = 0; i < S.length(); i++)
        {
            if(i == S.length() || S[i] != S[i+1])
            {
                compressed.push_back(S[i]);
                compressed.append(to_string(++count));
                count = 0;
            }
            else
                count++;
        }
        
        if(compressed.length() < S.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    
	return 0;
}
