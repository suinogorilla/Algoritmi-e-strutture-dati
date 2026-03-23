#include "test.h"

int recursive_natural_sum (int n)
{
    if (n == 0) return 0;
    return (n + recursive_natural_sum(n-1));
}

void print_recursive_vector (vector<int>& v, int n)
{
    if (n == 0) return;
    print_recursive_vector(v, n - 1);
    cout << v[n-1] << " ";
}

vector <int> reverse_recursive_vector (vector<int>& v, int n)
{
    vector <int> newvec;
    if (n == 0) return newvec;
    newvec.push_back(v[n-1]);
    reverse_recursive_vector(v, n - 1);
}