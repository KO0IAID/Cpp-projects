#include <iostream>

/*
    Enums       =       A user-defined data type
                        - Consists of paired of a name and integer/char constant.
                        - Great if you have a set of potential options
                        - If you DON'T declare int/char it defaults the values 0, and increments by each additional
*/

enum Day
{
    sunday = 0,
    monday,     // 1
    tuesday,    // 2
    wednesday,  // 3
    thursday,   // 4
    friday,     // 5
    saturday = 6,
};

enum Planet 
{
    // name  - size of each planet in km 
    mercury = 4880, 
    venus = 12104, 
    earth = 12756,
    mars = 6794,
    jupiter = 142984,
    saturn = 108728,
    uranus = 51118,
    neptune = 49532,
    pluto = 2320
};

void printDay(Day day);
void printPlanet(Planet planet);
int main()
{
    
    Day today = thursday;
    Planet home = earth;

    printDay(today);
    printPlanet(home);

    return 0;
}

void printDay(Day day)
{

    switch (day)
    {
        case sunday:    std::cout << "It is Sunday!\n"; break;
        case monday:    std::cout << "It is Monday!\n"; break;
        case tuesday:   std::cout << "It is Tuesday!\n";break;
        case wednesday: std::cout << "It is Wednesday!\n";break;
        case thursday:  std::cout << "It is Thursday!\n";break;
        case friday:    std::cout << "It is Friday!\n";break;
        case saturday:  std::cout << "It is Saturday!\n";break;
    }
}


void printPlanet(Planet planet)
{
    // To get the integer value out
    int diameter = static_cast<int>(planet);

    switch (planet)
    {
        case mercury:   std::cout << "Mercury\t"    << "in km: " << diameter << "\n"; break;
        case venus:     std::cout << "Venus\t"      << "in km: " << diameter << "\n"; break;
        case earth:     std::cout << "Earth\t"      << "in km: " << diameter << "\n"; break;
        case mars:      std::cout << "Mars\t"       << "in km: " << diameter << "\n"; break;
        case jupiter:   std::cout << "Jupiter\t"    << "in km: " << diameter << "\n"; break;
        case saturn:    std::cout << "Saturn\t"     << "in km: " << diameter << "\n"; break;
        case uranus:    std::cout << "Uranus\t"     << "in km: " << diameter << "\n"; break;
        case neptune:   std::cout << "Neptune\t"    << "in km: " << diameter << "\n"; break;
        case pluto:     std::cout << "Pluto\t"      << "in km: " << diameter << "\n"; break;
        default:        std::cout << "Unknown Planet\t" << "in km: " << diameter << "\n"; break;
    }
}