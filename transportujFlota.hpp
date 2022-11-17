#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznik_zaglowcow = 0;
    int          pozostały_towar   = towar;
    Stocznia     stocznia_1{};

    while (pozostały_towar > 0) {

        Statek* statek_1 = stocznia_1();
        if (dynamic_cast< Zaglowiec* >(statek_1) != nullptr) {
            licznik_zaglowcow++;
        }
        pozostały_towar -= statek_1->transportuj();

        delete statek_1;
    }

    return licznik_zaglowcow;
}