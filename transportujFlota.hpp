#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    unsigned int licznik_zaglowcow  = 0;
    unsigned int przewieziony_towar = 0;
    Stocznia     stocznia_1{};

    while (przewieziony_towar < towar) {

        Statek* statek_1 = stocznia_1();
        if (dynamic_cast< Zaglowiec* >(statek_1) != nullptr) {
            licznik_zaglowcow++;
        }
        przewieziony_towar += statek_1->transportuj();

        delete statek_1;
    }

    return licznik_zaglowcow;
}