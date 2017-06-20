#include <iostream>
#include <math.h>
#define debug(x) cout << #x << ":" << x << endl;
using namespace std;

void wpisywanie (double **tab);
void wyswietl (double **tab);

int main (){
cout << "Autorem programu jest Piotr Cichon" << endl;

double **tab = new double*[19];
for(int i = 0 ; i < 19 ; i++)
	tab[i]= new double[5];

wpisywanie(tab);
wyswietl(tab);
delete []tab;

system("pause");
return 0;
}

void wpisywanie (double **tab){
	
for(int i = 0 ; i <19 ; i++){
tab[i][0] = (double)i*10;
}
for(int i = 0 ; i < 19 ; i++){
	tab[i][1] = sin(tab[i][0]*M_PI/180);
	tab[i][2] = cos(tab[i][0]*M_PI/180);
	tab[i][3] = tab[i][1]-tab[i][2];
	tab[i][4] = tab[i][1]+tab[i][2];
}
}

void wyswietl (double **tab){
 for (int i = 0; i < 19 ; i++){
 	cout << tab[i][0] << endl;
 	cout << tab[i][1] << "\t" << tab[i][2]<< "\t" << tab[i][3]<< "\t" << tab[i][4];
 	cout << endl << endl;
 }

}
