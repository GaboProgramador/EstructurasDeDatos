//10. Determinar las letras más repetidas encontradas en una cadena ingresada (evitar repeticiones)
//Gabriel Jimenez 7182

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

void countChars(string str, unordered_map<char, int>& charCountMap) {
    if (str.empty()) {
        return;
    }

    char c = tolower(str[0]);
    if (isalpha(c)) {
        charCountMap[c]++;
    }

    countChars(str.substr(1), charCountMap);
}

void findMostRepeatedLetters(unordered_map<char, int>& charCountMap, vector<char>& mostRepeatedLetters, int maxCount) {
    if (charCountMap.empty()) {
        return;
    }

    const auto& pair = *charCountMap.begin();

    if (pair.second == maxCount) {
        mostRepeatedLetters.push_back(pair.first);
    }

    charCountMap.erase(charCountMap.begin());

    findMostRepeatedLetters(charCountMap, mostRepeatedLetters, maxCount);
}

int main() {
    string str = "Hello, World!";
    unordered_map<char, int> charCountMap;
    vector<char> mostRepeatedLetters;

    // Contar la cantidad de veces que aparece cada letra en la cadena
    countChars(str, charCountMap);

    // Encontrar la mayor cantidad de repeticiones de una letra en la cadena
    int maxCount = 0;
    for (const auto& pair : charCountMap) {
        maxCount = max(maxCount, pair.second);
    }

    // Encontrar las letras que se repiten maxCount veces en la cadena
    findMostRepeatedLetters(charCountMap, mostRepeatedLetters, maxCount);

    // Imprimir las letras más repetidas
    cout << "Las letras más repetidas en la cadena son: ";
    for (char c : mostRepeatedLetters) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
