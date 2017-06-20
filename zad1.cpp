#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void losuj(int *tab);
int policz (int tab[], int a);

int main (){
cout << "Autorem programu jest Piotr Cichon" << endl;


srand(time(NULL));

int tab[100];
losuj(tab);

int a, b, licza, liczb;

cout << "Podaj pierwsza cyfre:";
cin >> a;
cout << "Podaj druga cyfre:";
cin >> b;

licza = policz (tab, a);
liczb = policz (tab, b);

cout << "Liczba " << a << " wystepuje " << licza << " razy" << endl;
cout << "Liczba " << b << " wystepuje " << liczb << " razy" << endl;

system("pause");
return 0;
}

void losuj(int *tab){
for(int i = 0 ; i < 100 ; i++){
	tab[i]=rand()%20+1;
	}
}

int policz (int tab[], int a){
	int suma = 0;
for (int i  = 0 ; i < 100 ; i++){
	if(tab[i] == a){
		suma++;
	}
}
return suma;
}
