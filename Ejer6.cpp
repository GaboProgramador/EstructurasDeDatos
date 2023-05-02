//6. Generalice la solución al problema anterior
//Gabriel Jimenez
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void findPointsOnCircle(int x, int y, int r, vector<pair<int,int>>& result) {
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
    findPointsOnCircle(x + 1, y, r, result);
}

int main() {
    int r;
    cout << "Ingrese el radio de la circunferencia: ";
    cin >> r;
    vector<pair<int,int>> result;
    findPointsOnCircle(0, r, r, result);
    cout << "Los puntos de coordenadas enteras en la circunferencia de radio " << r << " son:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "(" << result[i].first << ", " << result[i].second << ")" << endl;
    }
    return 0;
}