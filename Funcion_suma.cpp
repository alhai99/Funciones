#include<iostream>
/*
viernes 5 de marzo
segunda tarea POO
ramirez reyes alhai
*/
using namespace std;
void suma(int a, int b);
int main()
{
    int N1, N2;
    cout<<"Introduzca el valor del primer operando"<< endl;
    cin>>N1;
    cout<<"Introduzca el valor del segundo operando"<< endl;
    cin>>N2;
    suma(N1,N2);
    getch();
    return 0;
}
void suma(int a, int b)
{
    float c=a+b;
    cout<<"El resultado de la suma es:"       << float(c)<< endl;
}