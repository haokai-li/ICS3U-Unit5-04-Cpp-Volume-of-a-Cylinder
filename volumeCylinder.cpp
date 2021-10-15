// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program calculate the volume of a cylinder
#include <iostream>
#include <string>
#include <cmath>

float VolumeCylinder(float userRadiusNumber, float userHeightNumber) {
    // This Program calculate the volume of a cylinder
    float volume;

    // process
    volume = pow(userRadiusNumber, 2) * userHeightNumber * M_PI;

    return volume;
}

main() {
    // This function just call other functions
    std::string userRadiusString;
    float userRadiusNumber;
    std::string userHeightString;
    float userHeightNumber;
    float volumeCylinder;

    std::cout << "This Program calculates the volume of a cylinder."
    << std::endl;
    std::cout << "YPlease enter the radius and height." << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "Please enter the radius of a cylinder(cm): ";
    std::cin >> userRadiusString;
    std::cout << "Please enter the height of a triangle(cm): ";
    std::cin >> userHeightString;
    std::cout << "" << std::endl;

    try {
        userRadiusNumber = std::stof(userRadiusString);
        userHeightNumber = std::stof(userHeightString);

        // call functions
        volumeCylinder = VolumeCylinder(userRadiusNumber, userHeightNumber);

        // output
        std::cout << "The volume of the cylinder is "
        << volumeCylinder << " cm³." << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
