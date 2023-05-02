//5. Determinar los puntos de coordenadas enteras que están sobre la circunferencia X^2 + Y^2 = 25
//Gabriel Jimenez 7182
#include <iostream>
#include <vector>
using namespace std;

void EncontrarPuntosCir(int x, int y, int r, vector<pair<int,int>>& result) {
    if (x > y) {
        return;
    }
    if (x == y) {
        result.push_back(make_pair(x, y));
        return;
    }
    // Verificar si (x,y) es un punto válido en la circunferencia
    if ((x * x) + (y * y) == r * r) {
        result.push_back(make_pair(x, y));
        result.push_back(make_pair(x, -y));
        result.push_back(make_pair(-x, y));
        result.push_back(make_pair(-x, -y));
    }
    EncontrarPuntosCir(x + 1, y, r, result);
}

int main() {
    int r = 5; // radio de la circunferencia
    vector<pair<int,int>> result;
    EncontrarPuntosCir(0, r, r, result);
    for (int i = 0; i < result.size(); i++) {
        cout << "(" << result[i].first << ", " << result[i].second << ")" << endl;
    }
    return 0;
}