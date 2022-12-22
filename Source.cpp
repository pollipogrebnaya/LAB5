#include <iostream>
#include <string>
#include <vector>
#include "header.h"
using namespace std;

int main() {
    Planet planet1("Mercury", 233049.65, 10892.6, 647.4, 23.6, 69820000.765, TERRESTRIAL);
    Planet planet2("Venera", 27405.87, 44536.9, 364.7, 23.9, 56546473.978, TERRESTRIAL);
    Planet planet3("Earth", 54739.54, 65545.5, 654.4, 44.4, 54677533.654, TERRESTRIAL);
    Planet planet4("Mars", 98976.65, 65768.3, 345.6, 23.6, 56873412.820, TERRESTRIAL);
    Planet planet5("Jupiter", 65743.23, 87965.2, 432.1, 65.5, 87965463.876, JOVIAN);
    Planet planet6("Saturn", 87965.23, 23435.4, 765.3, 23.1, 27186574.546, JOVIAN);
    Planet planet7("Urban", 53426.54, 87965.2, 324.1, 34.5, 76854903.867, JOVIAN);
    Planet planet8("Neptun", 73295.98, 87965.3, 543.2, 25.6, 76943245.876, JOVIAN);

    Planetary planets;
    planets.addPlanet(planet1);
    planets.addPlanet(planet2);
    planets.addPlanet(planet3);
    planets.addPlanet(planet4);
    planets.addPlanet(planet5);
    planets.addPlanet(planet6);
    planets.addPlanet(planet7);
    planets.addPlanet(planet8);

    planets.sortByLenghtOfDay();
    planets.printPlanetsLengthOfDay();

    double distanceBetweenMarsAndNeptun = Planetary::findDistanceBetween(&planet4, &planet8);
    cout << "Distance between Mars and Neptun: " << distanceBetweenMarsAndNeptun << endl;

    double avarage = Planetary::findAverageMass(planets.planets);
    cout << "Avarage mass of planets in planetary: " << avarage << endl;
};
