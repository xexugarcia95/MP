#include <iostream>
using namespace std;

int main()
{
    const int DIM_NOTAS = 100;
    double notas[DIM_NOTAS];
    int util_notas;
    double media = 0;

    do
    {
        cout << "Introduce numero de alumnos (1-" << DIM_NOTAS << "):";
        cin >> util_notas;
    }while(util_notas < 1 || util_notas > DIM_NOTAS);

    for(int i=0;i<util_notas;i++)
    {
        cout << "Nota[" << i << "]: \n";
        cin >> notas[i];
    }

    for(int i=0;i<util_notas;i++)
    {
        media += notas[i];
    }

    media /= util_notas;

    cout << "La media es: " << media << endl;
}
