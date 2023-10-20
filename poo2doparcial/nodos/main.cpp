#include <iostream>
#include "pila.cpp"
using namespace std;

int main()
{
    Pila<int> a;
    a.setdato(5);
    a.setdato(2);
    a.setdato(1);
    cout<<a.get();
    cout<<a.get();
}
