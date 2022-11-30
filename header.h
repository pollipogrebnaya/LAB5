#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


enum type {
    TERRESTRIAL,
    JOVIAN
};
class Planet {

public:
    string name;
    float mass_in_kg;
    float orbital_of_velocity;
    float mean_of_temperature;
    float lenght_of_day;
    type planetType;
    float distance_from_sun;


    Planet(string name, float mass_in_kg, float orbital_of_velocity, float mean_of_temperature, float lenght_of_day, float distance_from_sun, type planetType)
    {
        this->name = name;
        this->mass_in_kg = mass_in_kg;
        this->orbital_of_velocity = orbital_of_velocity;
        this->mean_of_temperature = mean_of_temperature;
        this->lenght_of_day = lenght_of_day;
        this->distance_from_sun = distance_from_sun;
        this->planetType = planetType;
    }

    ~Planet() {}
};

class Planetary
{
public:
    vector <Planet> planets;

    void addPlanet(Planet planet1) {
        planets.push_back(planet1);
    }

    static double findAverageMass(vector <Planet> planets)
    {
        float sum = 0;
        for (int i = 0; i < planets.size(); i++) {
            sum += planets[i].mass_in_kg;
        }

        double avarege = (double)sum / planets.size();
        return avarege;
    }

    static double findDistanceBetween(Planet* planet1, Planet* planet2)
    {
        return fabs((*planet1).distance_from_sun - (*planet2).distance_from_sun);
    }


    void SortByLenghtOfDay()
    {
        for (int i = 0; i < planets.size(); i++) {
            for (int j = i + 1; j < planets.size(); j++) {
                if (planets[j].lenght_of_day <= planets[i].lenght_of_day) {
                    swap(planets[j], planets[i]);
                }
            }
        }
    }

    void PrintPlanetsLengthOfDay()
    {
        for (int k = 0; k < planets.size(); k++) {
            cout << planets[k].name << " = " << planets[k].lenght_of_day << endl;
        }
    }
};