#include<iostream>
/*
viernes 5 de marzo
segunda tarea POO
ramirez reyes alhai
*/
using namespace std;

int Factorial(int a);
int main()
{
    int N1;
    cout<<"Introduzca el valor del numero"<< endl;
    cin>>N1;
    int fact=Factorial(N1);
    cout<<"El "<<N1<<"! es:"<< fact<< endl;
    getch();
    return 0;
}
int Factorial(int a)
{
    int c;
    int result=1;
    for(c=1; c<=a; c++)
    {
        result*=c;
    }
    return result;
}
