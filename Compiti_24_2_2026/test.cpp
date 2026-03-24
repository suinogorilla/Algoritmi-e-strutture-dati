#include "test.h"

int main ()
{
    int n;
    cout << "Inserire un numero intero ";
    cin >> n;
    cout << endl << "la somma dei primi " << n << " numeri interi e: ";
    int m = recursive_natural_sum(n);
    cout << m << endl; 

    std::srand(std::time(0));
    std::vector<int> vettore(10);

    for(int i = 0; i < 10; i++) {
        vettore[i] = std::rand() % 101;
    }
    
    for(int i = 0; i < 10; i++) {
       cout <<  vettore[i] << " ";
    }
    cout << endl;
    print_recursive_vector(vettore, vettore.size());

    vector <int>  reversevettore = reverse_recursive_vector(vettore);
    cout << endl << "Il vettore ribaltato e: "<< endl;
    for(int i = 0; i < 10; i++) {
       cout <<  reversevettore[i] << " ";
    }
    return 0;
}

