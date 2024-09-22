#include <iostream>

using namespace std;

int silnia(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * silnia(n - 1);
    }
}
int potega(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * potega(x, n - 1);
    }
}
int sumaCyfr(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return ((n % 10) + sumaCyfr(n / 10));
    }
}
int sumaLiczb(int a, int b)
{
    if (b <= a)
    {
        return a;
    }
    else
    {
        return b + sumaLiczb(a, b - 1);
    }
}
void wypisywanie(int n)
{
    if (n == 0)
    {
        cout << n << " ";
    }
    else
    {
        cout << n << " ";
        wypisywanie(n - 1);
    }
}
void przeliczanieNaBinary(int n)
{
    if (n == 1)
    {
        cout << n;
    }
    else
    {
        cout << (n % 2);
        przeliczanieNaBinary(n / 2);
    }
}


int main()
{
    int a, b;

    cout << "Podaj liczbe: ";
    cin >> a;
    cout << "Podaj liczbe: ";
    cin >> b;
    cout << sumaLiczb(a, b);
    return 0;
}
