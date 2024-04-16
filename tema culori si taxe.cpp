// tema culori si taxe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Funcție pentru rotunjirea la următorul număr întreg
int rotunjire_la_urmatorul_numar_intreg(double x) {
    int intreg = static_cast<int>(x);
    if (x > intreg) {
        return intreg + 1;
    }
    else {
        return intreg;
    }
}

int main() {
    int numar_culori;
    const double pret_culoare = 5.00;
    const double pret_panza_pensule = 40.00;
    const double taxa = 0.10;

    std::cout << "Introdu numarul total de culori necesare: ";
    std::cin >> numar_culori;

    // Calcularea costului culorilor
    double cost_culori = numar_culori * pret_culoare;

    // Adăugarea costului pentru panza și pensule
    double cost_panza_pensule = pret_panza_pensule;

    // Calcularea taxei
    double cost_taxa = static_cast<double>(rotunjire_la_urmatorul_numar_intreg((cost_culori + cost_panza_pensule) * taxa));

    // Calcularea costului total
    double cost_total = cost_culori + cost_panza_pensule + cost_taxa;

    // Rotunjirea costului total la cel mai mare număr întreg
    int cost_total_rotunjit = rotunjire_la_urmatorul_numar_intreg(cost_total);

    std::cout << "Costul total al proiectului este: " << cost_total_rotunjit << " RON\n";

    return 0;
}
