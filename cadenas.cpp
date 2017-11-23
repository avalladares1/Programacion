#include <iostream>
#include <string>
using namespace std;
int contar_palabras(char cadena[]);
void aMinusculas(char c[]);
void titulos(char cadena[]);
bool Palindromo(char cadena[],int tamanio);
int longitud(char c[]);

int main()
{
    char oracion[100];
    char alreves[100];
    int n;
    char palabra[30];
    bool p;
    int lonpalabra;


    cout<<"Introduce una oracion"<<endl;
    cin.getline(oracion,100);

    n=contar_palabras(oracion);

    cout<<"Tu oracion tiene "<<n<<" palabras"<<endl;
    aMinusculas(oracion);
    cout<<"minusculas"<<oracion<<endl;

    titulos(oracion);
    cout<<"oracion"<<oracion<<endl;

    cout<<"Introduce una palabra"<<endl;
    cin.getline(palabra,30);

   lonpalabra=longitud(palabra);

    p=Palindromo(palabra,lonpalabra);

    cout<<p;




    return 0;
}
int contar_palabras(char cadena[])
{
    int contador=0;
    if(cadena[0]!=' ' )
        contador++;
    for(int i=0;cadena[i];i++)
    {
        if(cadena[i]==' ' && ( cadena[i+1]>='a' && cadena[i+1]<='z'))
            contador++;
        else
            if(cadena[i]==' ' && ( cadena[i+1]>='A' && cadena[i+1]<='Z'))
                contador++;

    }

    return contador;
}
void aMinusculas(char c[])
{
    for(int i=0; c[i];i++)
        if (c[i]>= 'A' && c[i]<='Z')
            c[i]+=32;
}
void titulos(char cadena[])//esta mal me cambia la palabra a signos de interrogacion y las que no cambia
						   //son las que quiero cambiar a mayusculas, pero las deja en minusculas
{
    cadena[0]-=32;
	for(int i=0;cadena[i];i++)
	{
		if(cadena[i]==' ' && ( cadena[i+1]>='a' && cadena[i+1]<='z'))
			{
				cadena[i+1]-=32;
			}

	}
}
//01123456789011234567890112345678901123456789
//Esta  es una   frase cualquiera

bool Palindromo(char cadena[], int tamanio)
{
    for(int i = 0; i < tamanio/2; i++)
    	if(cadena[i] != cadena[tamanio-i-1])
            return 0;
         else
    		return 1;

}

int longitud(char c[])
{
    int cont=0;
    for(;c[cont];cont++);
    return cont;
}
