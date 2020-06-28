#include "iostream"
using namespace std;
int amedia, bmedia, altura, media;

int MEDIA()
{
    float altura[25];
    float suma=0;
    cout << "Por favor ingrese la Altura: " <<endl;
    for(int i=0; i<25; i++)
    {
        cout << endl << "******* Estudiante " << i + 1 <<"********" <<endl;
        cout << "Altura: ";
        cin >> altura[i];
             
    }
    for (int i=0; i<26; i++)
    {
    suma+=altura[i];
    }
    cout << "La media de las alturas es: " << suma/25 << endl;
    
    return media;
}

int main()
{
    cout << "Bienvenido a la calculadora de la media de estatura de estudiantes." << endl << endl;
    
    ;MEDIA();    

    system("pause");
}



