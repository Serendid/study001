#include <iostream>
#include <string>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    string str;
    int score=0;
    int tex=0;
    cin >> N;
    for (int i=1; i<=N; i++)
    {
        cin >> str;
        for(auto ch : str)
        {
            if ( ch == 'O')
            {
               tex++;
               score += tex;
            }
            else
            {
                tex = 0;
            }
        }
        cout << score << "\n";
        score = 0;
        tex =0 ;
    }   


}