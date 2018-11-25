#include <iostream>
using namespace std;

//Autor: Beata Wolińska

int Fibonacci(int liczba)
{
  long a = 1, b = 1, c = 0;

  if(liczba <= 2)
  {
    return a;
  }
  else
  {
      for (int i = 3; i <= liczba; i++) {
        c = a+b;
        a = b;
        b = c;
      }
      return c;
  }
}



int main()
{
  int liczba;
  cout<<"Podaj, ktora liczbe z ciagu Fibonacciego: ";
  cin>>liczba;
  cout<<"Wynik: "<<Fibonacci(liczba);
  return 0;
}
