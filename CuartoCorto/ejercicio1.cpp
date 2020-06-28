#include "iostream"
using namespace std;

int Murcielago(){
char codigo[100];
 
cout<<"Ingrese la frase a encriptar: "<<endl;
cin.getline(codigo, 100);
 
for (int c=0; c<=100; c++) {
 
switch (codigo[c]) {
{case 'm':
codigo[c]=48;
break;
}
{case 'u':
codigo[c]=49;
break;
}
{case 'r':
codigo[c]=50;
break;}
{case 'c':
codigo[c]=51;
break;}
{case 'i':
codigo[c]=52;
break;}
{case 'e':
codigo[c]=53;
break;}
{case 'l':
codigo[c]=54;
break;}
{case 'a':
codigo[c]=55;
break;}
{case 'g':
codigo[c]=56;
break;}
{case 'o':
codigo[c]=57;
break;}
default:
codigo[c]=codigo[c];}
}
cout<<"Texto Encriptado: "<<codigo;
}

int main(void)
{
   cout << "Bienvenido al programa para encriptar frases en codigo MURCIELAGO" << endl;
   ;Murcielago();

   return 0;
}