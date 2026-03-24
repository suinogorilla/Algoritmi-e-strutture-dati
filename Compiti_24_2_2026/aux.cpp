#include "test.h"

int recursive_natural_sum (int n)   // somma n numeri naturali ricorsivamente
{
    if (n == 0) return 0;
    return (n + recursive_natural_sum(n-1));
}

void print_recursive_vector (vector<int>& v, int n) // stampa vettore ricorsivamente
{
    if (n == 0) return;
    print_recursive_vector(v, n - 1);
    cout << v[n-1] << " ";
}

vector <int> reverse_recursive_vector (vector<int>& v, unsigned n) // genera vettore inverso
{
    vector <int> aux;
    if(n == v.size()) return aux;
    aux = reverse_recursive_vector(v,n+1);
    aux.push_back(v[n]);
    return aux;
}

vector <int> copy_recursive_vector (vector<int>& v, int n) // copia vettore ricorsivamente
{
    vector <int> aux;
    if(n == 0) return aux;
    aux = copy_recursive_vector(v,n - 1);
    aux.push_back(v[n - 1]);
    return aux;
}