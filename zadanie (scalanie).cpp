#include<iostream>
using namespace std;
void merge(int tablica[], int start, int srodek, int koniec)
{
int *tab_pom = new int[(koniec-start)];
int i=start, j=srodek+1, k=0;
while (i <= srodek && j <= koniec)
{
if (tablica[j] < tablica[i])
{
tab_pom[k] = tablica[j];
j++;
}
else
{
tab_pom[k] = tablica[i];
i++;
}
k++;
}

return 0
}