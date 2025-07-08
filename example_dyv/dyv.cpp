#include <vector>
#include <algorithm> // para std::max

using namespace std;

bool pequeno(int p, int q) {
    return p == q;
}

int solucionPequena() {
    return 1;
}

int combinar(const vector<int>& S, int p, int m, int q, int izq, int der) {
    int i_izq = m;
    while (i_izq - 1 >= p && S[i_izq] >= S[i_izq - 1]) {
        i_izq--;
    }

    int i_der = m + 1;
    while (i_der + 1 <= q && S[i_der] <= S[i_der + 1]) {
        i_der++;
    }

    if (S[m] <= S[m + 1]) {
        int cent = i_der - i_izq + 1;
        return max({izq, der, cent});
    }

    return max(izq, der);
}

int subsecuenciaMasLargaDyV(const vector<int>& S, int p, int q) {
    if (pequeno(p, q)) {
        return solucionPequena();
    }

    int m = (p + q) / 2;
    int izq = subsecuenciaMasLargaDyV(S, p, m);
    int der = subsecuenciaMasLargaDyV(S, m + 1, q);
    return combinar(S, p, m, q, izq, der);
}

int subsecuenciaMasLargaIterativo(const std::vector<int>& S) {
    int n = S.size();
    if (n == 0) return 0;

    int maxLen = 1;

    for (int i = 0; i < n; ++i) {
        int currLen = 1;

        for (int j = i + 1; j < n; ++j) {
            if (S[j] >= S[j - 1]) {
                currLen++;
                maxLen = std::max(maxLen, currLen);
            } else {
                break;
            }
        }
    }

    return maxLen;
}
