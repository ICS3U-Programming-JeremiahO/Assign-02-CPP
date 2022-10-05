// Copyright (c) 2021 Jeremiah omoike All rights reserved.
//
// Created by: Jeremiah omoike
// Date: October , 4 2022
// This program asks the user for the length,width and height  and then
// displays the Surface area and volume.
#include <cmath>
#include <iostream>

int main() {

    // declare variables
    float length;
    float width;
    float height;
    float surfaceArea;
    float volume;
    

    // get the length,width and height from the user
    std::cout << "Enter the length (cm): ";
    std::cin >> length;

    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    std::cout << "Enter the height (cm): ";
    std::cin >> height;

    float alpha = length * width + length * sqrt((width / 2) * (width / 2) + height * height);

    float beta = width * sqrt((length / 2) * (length / 2) + height * height);

    // calculate the surface area and volume 
    surfaceArea = alpha + beta;
    volume = length * width * height / 3;

    // display the surface area to the user
    std::cout << "\n";
    std::cout << "surfaceArea = " << surfaceArea << " cm^2" << std::endl;

    std::cout << "\n";
    std::cout << "volume = " << volume << " cm" << std::endl;
}