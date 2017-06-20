#include <iostream>

using namespace std;

void wpisywanie (float **tab);

int main (){
cout << "Autorem programu jest Piotr Cichon" << endl;

float **tab = new float*[19];
for(int i = 0 ; i < 4 ; i++)
	tab[i]= new float[4];

wpisywanie(tab);


system("pause");
return 0;
}

void wpisywanie (float **tab){
for(int i = 0 ; i <=18 ; i++);
(*tab)[i] = (float)i*10;

}
