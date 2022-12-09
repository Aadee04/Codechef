// AS 30/09/22

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int index = 0;
        string s, p1 = "party", p2 = "pawri", s1 = "";
        cin >> s;
        
        while(index != s.length())
        {
            bool same = false;
            if(s[index] == 'p')
            {
                same = true;
                for(int i = 0; i < 5; i++)
                {
                    if(p1[i] != s[index+i])
                        same = false;
                }
                
                if(same)
                {
                    s1.append(p2);
                    index += 5;
                }
            }
            
            if(same == false)
            {
                s1.push_back(s[index]);
                index++;
            }
        }
        cout << s1 << endl;
    }
    
	return 0;
}
