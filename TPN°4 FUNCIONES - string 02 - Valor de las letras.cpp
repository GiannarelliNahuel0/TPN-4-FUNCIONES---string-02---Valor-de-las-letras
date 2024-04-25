#include<iostream>
#include<string>
using namespace std;

int ValorLetra(string f){

int con = 0;
for (char c : f){

if (c=='a'|| c=='e'){
	con+=1;
}	
if (c=='o'|| c=='s'){
	con+=2;
}
if (c=='d'|| c=='i'|| c=='n'|| c=='r'){
	con+=3;
}
if (c=='c'|| c=='l'|| c=='t'|| c=='u'){
	con+=4;
}
if (c=='m'|| c=='p'){
	con+=5;
}
if (c=='b'|| c=='f'|| c=='g'|| c=='h'|| c=='j'|| c=='q'|| c=='v'|| c=='x'|| c=='y'|| c=='z'){
	con+=6;
}
if (c=='k'|| c=='w'){
	con+=7;
}
}
return con;
}
int main () {
string frase;	
int valor;
cout<<"escriba una frase: ";
getline(cin,frase);

valor = ValorLetra(frase);
	
cout<<"la suma de cada letra es de: "<<valor;	
	
	
	
	
	
	
	
	
	return 0;
}