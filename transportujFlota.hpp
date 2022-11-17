#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int licznik_zaglowcow = 0;

    while (towar > 0) {
        Stocznia stocznia_1{};
        Statek*  statek_1 = stocznia_1();
        if (dynamic_cast< Zaglowiec* >(statek_1) != nullptr) {
            licznik_zaglowcow++;
        }
        towar -= statek_1->transportuj();

        delete statek_1;
    }

    return licznik_zaglowcow;
}