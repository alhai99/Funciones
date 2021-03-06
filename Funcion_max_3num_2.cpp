#include<iostream>
/*
viernes 5 de marzo
segunda tarea POO
ramirez reyes alhai
*/
using namespace std;

int Max(int a, int b);
int main()
{
    int N1, N2, N3;
    cout<<"Introduzca el valor del primer numero"<< endl;
    cin>>N1;
    cout<<"Introduzca el valor del segundo numero"<< endl;
    cin>>N2;
    cout<<"Introduzca el valor del tercer numero"<< endl;
    cin>>N3;
    max(N1,N2);
    int max=Max(Max(N1, N2), N3);
    cout<<"El numero mayor es:" <<int(max)<< endl;
    getch();
    return 0;
}
int Max(int a, int b)
{
    int c;
    if(a>b)
    {
    c=a;
    } 
    else
    {
        c=b;
    }    
    return c;
}
