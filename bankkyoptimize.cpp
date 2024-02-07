#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string card[N];
    for (int i = 0; i < N; i++)
    {
        cin >> card[i];
    }
    cin.ignore();
    string method;
    getline(cin, method);

    for (size_t i = 0; i < method.size(); i++)
    {
        int n = N * 0.5;
        string temp1[n];
        string temp2[n];
        if (method[i] == 'C')
        {
            for (int i = 0; i < n; i++)
            {
                temp1[i] = card[i];
            }
            for (int i = 0; i < n; i++)
            {
                temp2[i] = card[i + n];
            }
            for (int i = 0; i < N; i++)
            {
                if (i < n)
                {
                    card[i] = temp2[i];
                }
                else
                {
                    card[i] = temp1[i - n];
                }
            }
        }
        else if (method[i] == 'S')
        {
            for (int i = 0; i < n; i++)
            {
                temp1[i] = card[i];
            }
            for (int i = 0; i < n; i++)
            {
                temp2[i] = card[i + n];
            }
            for (int i = 0; i < N; i++)
            {
                if (i % 2 == 0)
                {
                    int k = i * 0.5;
                    card[i] = temp1[k];
                }
                else
                {
                    int k = i / 2;
                    card[i] = temp2[k];
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << card[i] << ' ';
    }
}