#include<iostream>
/*
viernes 5 de marzo
segunda tarea POO
ramirez reyes alhai
*/
using namespace std;
void max(int a, int b);
int main()
{
    int N1, N2;
    cout<<"Introduzca el valor del primer numero"<< endl;
    cin>>N1;
    cout<<"Introduzca el valor del segundo numero"<< endl;
    cin>>N2;
    max(N1,N2);
    getch();
    return 0;
}
void max(int a, int b)
{
    float c;
    if(a>b)
    {
    c=a;
    } 
    else
    {
        c=b;
    }   
    cout<<"El numero mayor es:" << float(c)<< endl;
}