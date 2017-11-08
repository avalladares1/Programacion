#include<iostream>
#include <cstdlib>
void mostrar(int m[][20],int t);
void menu();
using namespace std;

int main()
{
    int tablero[20][20]={0};
    int op, pluma, pos2, dato;
    int tortuga[2]={0};
    pluma=0;op=0;pos2=0;
    int pos;
    pos=6;

    menu();
    while(op<=6)
        {
            cout<<"Elige un comando: ";
            cin>>op;
            cout<<endl;
            switch(op)
            {
                case 1:
                {
                    pluma=0;
                }
                break;
                case 2:
                {// se pone la pluma
                    pluma=1;
                }
                break;
                case 3://girar a la derecha
                {
                    pos2=0;
                    if(pos2==0  && pos==8)//arriba
                    {
                        pos=6;
                        pos2=1;
                    }
                    if(pos2==0  && pos==6)//derecha
                    {
                        pos=2;
                        pos2=1;
                    }
                    if(pos2==0  && pos==2)//izquierda
                    {
                        pos=4;
                        pos2=1;
                    }
                    if(pos2==0  && pos==4)//abajo
                    {
                        pos=8;
                        pos2=1;
                    }
                }
                break;
                case 4://girar a la izquierda
                {
                    pos2=0;
                    if(pos2==0  && pos==8)//arriba
                    {
                        pos=4;
                        pos2=1;
                    }
                    if(pos2==0  && pos==4)//abajo
                    {
                        pos=2;
                        pos2=1;
                    }
                    if(pos2==0  && pos==2)//izquierda
                    {
                        pos=6;
                        pos2=1;
                    }
                    if(pos2==0  && pos==6)//derecha
                    {
                        pos=8;
                        pos2=1;
                    }
                }
                break;
                case 5:// avanzar
                    cout<<"Introduce la cantidad por avanzar";
                    cin>>dato;
                    cout<<endl;
                if(pos==2)//abajo
                {
                    if(pluma==1)
                    {
                        for(int i= tortuga[0];i<= tortuga[0]+dato;i++)
                        tablero[i][tortuga[0]]=1;
                    }
                    tortuga[0]= tortuga[0]+dato;
                }
                if(pos==8)// hacia arriba
                {
                    if(pluma==1)
                    {
                        for(int i = tortuga[0];i>= tortuga[0]-dato;i--)
                        tablero[i][tortuga[0]]=1;
                    }
                    tortuga[0]= tortuga[0]-dato;
                }
                if(pos==6)
                {//Mover hacia >>
                    if(pluma==1)
                    {
                        for(int i = tortuga[1];i<= tortuga[1]+dato;i++)
                        tablero[tortuga[0]][i]=1;
                    }
                    tortuga[1]= tortuga[1]+dato;
                }
                if(pos==4)
                {//Mover hacia <<
                    if(pluma==1)
                    {
                        for(int i = tortuga[1];i>= tortuga[1]-dato;i--)
                        tablero[tortuga[0]][i]=1;
                    }
                    tortuga[1]= tortuga[1]-dato;
                }

                case 6:
                {
                    mostrar(tablero,20);
                }
                }
}

return 0;
}
void mostrar(int ta[][20],int t)
{
    cout << endl;
        for(int r=0;r<20;r++)
    {
        for(int c=0;c<20;c++)
        cout<<ta[r][c];
        cout <<endl;
    }

}
void menu()
{
    int op;
    cout<<"MENU"<<endl;
    cout<<"1.- Pluma hacia arriba"<<endl;
    cout<<"2.- Pluma hacia abajo"<<endl;
    cout<<"3.- Girar a la derecha"<<endl;
    cout<<"4.- Girra a la izquierda"<<endl;
    cout<<"5.- Avanzar"<<endl;
    cout<<"6.- Imprimir el tablero"<<endl;
    cout<<"7.- Salir"<<endl;

}
