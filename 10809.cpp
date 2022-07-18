#include <iostream>
#include <string>
using namespace std;

int main()
{   
    
    string S;
    cin >> S;
    for (int i=97; i<=122; i++)
    {
        bool k = true;

        for(int j = 0; j < S.size(); j++)
        {
            if( i == S[j])
            {
                cout << j;
                k = false;                              
                break;
            }
            
        }
        if (k)
        {
            cout << -1;
        }
        if (i!=122)
        {
            cout << " ";
        }
    }
    cout << "\n";
    

    
}