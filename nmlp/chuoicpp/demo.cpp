#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

int KhoangTrangDauTien(char a[])
{
    int vt = -1;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
            vt = i;
            break;
        }
    }
    return vt;
}

int KhoangTrangCuoiCung(char a[])
{
    int vt = -1;
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        if (a[i] == ' ')
        {
            vt = i;
            break;
        }
    }
    return vt;
}

void hoandoi(char a[], int n, int m)
{
    static char tudau[20], tucuoi[20], chuoidacat[MAX];
    for (int i = 0; i < n; i++)
    {
        tudau[i] = a[i];
    }

    int j = 0;
    for (int i = m + 1; i < strlen(a); i++)
    {
        tucuoi[j] = a[i];
        j++;
    }

    int t = 0;
    for (int i = n; i <= m; i++)
    {
        chuoidacat[t] = a[i];
        t++;
    }

    // Print the results
    cout << "Tudau: " << tudau << endl;
    cout << "Chuoidacat: " << chuoidacat << endl;
    cout << "Tucuoi: " << tucuoi << endl;
}

int main()
{
    char a[MAX];
    cin.getline(a, MAX);
    int n = KhoangTrangDauTien(a);
    int m = KhoangTrangCuoiCung(a);
    hoandoi(a, n, m);
    return 0;
}

