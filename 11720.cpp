#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N;
    int sum = 0;
    string str;
    cin >> N >> str;
    for(auto ch : str)
    {
        int i = ch - 48;
        sum += i;
    }
    cout << sum << "\n";
    return 0;

    

}