#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char *argv[])
{
  int i;
  double d;
  char c[8] = {'A','B','C','D','E','F','G','H'};
  int votos[8] = {0,0,0,0,0,0,0,0};
  ifstream fentrada;
  fentrada.open(argv[1]);
  if(fentrada)
  {
    fentrada >> i;
    for(int x=0;x<i;x++)
    {
      char v;
      int va,v2;
      fentrada >> v;
      bool encontrado = false;
      for(int j=0;j<8 && !encontrado;j++)
      {
        if(c[j] == v)
        {
          va = j;
          encontrado = true;
        }
      }
      fentrada >> v2;
      votos[va]+=v2;
    }

    if(!fentrada)
    {
      cerr << "Error de lectura del fichero\n";
    }
    fentrada.close();
    cout << "Numero de votaciones: " << i << endl;
    for(int i=0;i<8;i++)
    {
      cout << "El partido " << c[i] << " ha obtenido " << votos[i] << " votos\n";
    }

  }
  else
  {
    cerr << "Error de apertura del fichero\n";
  }

  return 0;
}
