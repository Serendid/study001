#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int C;
    double M;
    double std[1001];
    double astd;
    double sum;
    double avg;
    cin >> C;

    for (int i=1; i<=C; i++)
    {   cin >> M;
        for (int j=1; j<=M; j++)
        {
             cin >> std[j];
             sum += std[j];
        }
        avg = sum / M;
        for (int k=1; k<=M; k++)
        {
            if(avg<std[k])
            {
                astd++;
            }
        }

       double v = ( astd / M ) * 100;
       cout << fixed;
       cout.precision(3);
       cout << v << "%" << "\n";
        astd=0; avg=0; sum=0;
    }


}