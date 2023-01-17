#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int j = 2;
        for (int j=2; j * j <= n;j++)
        {
            if (n % j == 0)
            {
                break;
            }
            
        }

        if (j * j > n){
            cout << ("prime") << endl;
        }
        else{
            cout << ("not prime") << endl;
        }
    }
}
