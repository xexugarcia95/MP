#include <iostream>
using namespace std;

int main()
{
    const int DIM_NOTAS = 100;
    double notas[DIM_NOTAS];
    double media;
    int i;

    cout << "nota[0]: (-1 para terminar): ";
    cin >> notas[0];

    for(i=1;notas[i-1]!=-1 && i<DIM_NOTAS-1;i++)
    {
        cout << "Nota[" << i << "]: (-1 para terminar):  \n";
        cin >> notas[i];
    }

    if(i==DIM_NOTAS-1)
        notas[i] = -1;

    media = 0;

    for(i=0;notas[i]!=-1;i++)
    {
        media += notas[i];
    }

    if(i==0)
        cout << "No se introdujo ninguna nota\n";
    else
    {
        media /= i;
        cout << "La media es: " << media << endl;
    }



}
