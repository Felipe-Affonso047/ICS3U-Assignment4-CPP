// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: May 2021
// This program calculates the factorial

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    float a;
    float b;
    float c;
    float descriptant;
    float x1;
    float x2;
    float x;

    std::cout << "This program solves quadratics equations.\n\n" <<
    "Every quadratic equation can be represented by ax² + bx + c = 0."
    << std::endl;

    try {
        std::cout << "Insert a: ";
        std::cin >> a;

        std::cout << "Insert b: ";
        std::cin >> b;

        std::cout << "Insert c: ";
        std::cin >> c;

        descriptant = pow(b, 2) - (4 * a * c);

        std::cout << std::endl;
        if (a != 0) {
            if (descriptant > 0) {
                x1 = (sqrt(descriptant) - b) / (2 * a);
                x2 = (- sqrt(descriptant) - b) / (2 * a);

                std::cout << "x1 = " << x1 << std::endl;
                std::cout << "x2 = " << x2 << std::endl;
            } else if (descriptant == 0) {
                x = (- b) / (2 * a);

                std::cout << "x = " << x << std::endl;
            } else {
                std::cout << "There is no value for x." << std::endl;
            }
        } else {
            std::cout <<
            "This input is invalid, please, " <<
            "insert an number different from 0 for a."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout <<
        "\nThis input is invalid, please, insert a number."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
