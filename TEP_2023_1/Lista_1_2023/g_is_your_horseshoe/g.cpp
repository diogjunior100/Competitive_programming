#include <iostream>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){
    int n = 4, vetor[5];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    } 
    
    qsort(vetor, 4, sizeof(int), compare);

    for (int i = 0; i < n-1; i++)
    {
        if (vetor[i] == vetor[i+1])
        {
            count++;
        }
        
    }

    cout << count << endl;
    
    return 0;
}