#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m && (n != 0 || m != 0)) {
        set<int> jack_cds;
        int cd, count = 0;

        // Lê os CDs de Jack e os adiciona ao set
        for (int i = 0; i < n; i++) {
            cin >> cd;
            jack_cds.insert(cd);
        }

        // Compara cada CD de Jill com os CDs de Jack
        for (int i = 0; i < m; i++) {
            cin >> cd;
            //cout << jack_cds.end() << endl;
            if (jack_cds.find(cd) != 1) { // Encontrou um CD em comum
                count++;
            }
        }

        cout << count << endl; // Imprime a quantidade de CDs em comum
    }

    return 0;
}
