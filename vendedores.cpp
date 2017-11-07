#include<iostream>
using namespace std;
void mostrar(int m[][5],int t);
void sumavende(int m[][5],int t);
void sumaprodu(int m[][5],int t);
int main()
{
    int m[6][5]={{0}};
    char op;
    int vendedor, producto,precio;
    do{
            cout<<"Tienes hojas que ingresar si o no"<<endl;
            cin>>op;

            cout<<"Numero del vendedor"<<endl;
            cin>>vendedor;

            cout<<"Numero de producto"<<endl;
            cin>>producto;

            cout<<"Cual es el precio del producto"<<endl;
            cin>>precio;
            m[vendedor-1][producto-1]+=precio;


    }while(op!='n');

    sumavende(m,6);
    sumaprodu(m,6);
    mostrar(m,6);


}
void mostrar(int m[][5], int t)
{
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<6;c++)
            cout<<m[r][c]<<"\t";
           cout<<endl;
    }

}
void sumavende(int m[][5],int t)
{
    int suma=0;
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<4;c++)
        {
            suma+=m[r][c];
        }
        m[r][4]=suma;

        suma=0;
    }


}

void sumaprodu(int m[][5],int t)
{
    int suma=0;
    for(int r=0;r<6;r++)
    {
        for(int c=0;c<5;c++)

            suma+=m[r][c];

        m[r][5]=suma;

        suma=0;
    }
}
