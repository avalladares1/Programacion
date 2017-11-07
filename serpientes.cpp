#include<iostream>
#include <cstdlib>
#include<ctime>
int dado();
using namespace std;
int main()
{
    srand(time(NULL));
    int jugador1=0;
    int jugador2=0;

    int v[101]={0};

    //escaleras
    v[3]=6;
    v[18]=20;
    v[24]=21;
    v[27]=20;
    v[40]=20;
    v[46]=20;
    v[50]=21;
    v[72]=20;
    v[77]=17;
    v[79]=17;

    //serpientes
    v[21]=-19;
    v[30]=-20;
    v[34]=-19;
    v[44]=-28;
    v[53]=-20;
    v[74]=-20;
    v[76]=-20;
    v[93]=-20;
    v[97]=-40;
    v[98]=-55;

    do{
        jugador1+=dado();
        jugador1+=v[jugador1];
        jugador2+=dado();
        jugador2+=v[jugador2];

        cout<<"Jugador 1:"<<" "<<jugador1<<endl;
        cout<<"Jugador 2:"<<" "<<jugador2<<endl;

      }while(jugador1<100 && jugador2<100);

    if(jugador1>jugador2)
        cout<<"Gano jugador 1"<<endl;
    else
        cout<<"Gano jugador 2"<<endl;


}
int dado()
{
    int n;
    n=1+rand()%6;

    return n;
}
