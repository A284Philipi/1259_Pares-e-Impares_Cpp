#include <iostream>
#include <list>
#include <math.h>

using namespace std;

int main()
{
    int cont = 0, casos, numero, cont2;
    list<int> lista_par;
    list<int> lista_impar;
    list<int>::iterator it;
    cin >> casos;
    lista_par.clear();
    lista_impar.clear();
    while (cont < casos){
        cin >> numero;
        if (numero % 2 == 1){
            lista_impar.push_back(numero);
        }else{
            lista_par.push_back(numero);
        }
        cont++;
    }
    lista_par.sort();
    lista_impar.sort();
    for (it = lista_par.begin(); it != lista_par.end(); it++){
        cout << *it <<endl;
    }
    cont2 = lista_impar.size();
    while (cont2 > 0){
        cout << lista_impar.back() <<endl;
        it = lista_impar.end();
        *it--;
        lista_impar.erase(it);
        cont2--;
    }
    return 0;
}
