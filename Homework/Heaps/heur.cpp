#include <cmath>
#include "heur.h"
#include <vector>
#include <set>
using namespace std;

// Complete
size_t BFSHeuristic::compute(const Board& b)
{
    return 0U;
}


// To be completed
size_t DirectHeuristic::compute(const Board& b)
{
    // Avoid compiler warnings -- replace this
    int direct = 0;
    for (int i = b.escapeVehicle().startc; i < b.size(); i++)
    {
        if(b.at(b.escapeVehicle().startr, i) != '.' && b.at(b.escapeVehicle().startr, i) != 'a')
        {
            direct += 1;
        }
    }
    return direct;
}

// To be completed
size_t IndirectHeuristic::compute(const Board& b)
{
    // Avoid compiler warnings -- replace this
    int indirect = 0;
    bool success = false;
    char prev;
    char current;
    bool doubCount = false;
    
    for (int i = b.escapeVehicle().startc; i < b.size(); i++)
    {
        if(b.at(b.escapeVehicle().startr, i) != '.' && b.at(b.escapeVehicle().startr, i) != 'a')
        {
            indirect += 1;
            success = false;
            doubCount = false;
            char car = b.at(b.escapeVehicle().startr, i);
            int carLen = b.vehicle(car).length;
            int space = 0;
            int spaceNeeded = b.vehicle(car).startr - b.escapeVehicle().startr + b.vehicle(car).length;
                //going above blocking car to check
                for (int j = b.vehicle(car).startr - 1; j >= 0; j--)
                {
                    if (b.vehicle(car).startr - spaceNeeded < 0)
                    {
                        break;
                    }
                    
                    if (b.at(j, i) != '.' && space < spaceNeeded)
                    {
                        current = b.at(j, i);
                        if (prev == current)
                        {
                            indirect += 1;
                            success = true;
                            prev = current;
                            break;
                        }
                        prev = current;
                        indirect += 1;
                        success = true;
                        break;
                        space += 1;
                    }
                    space += 1;
                }
            
                if (space >= spaceNeeded)
                {
                    continue;
                }
            
                spaceNeeded = b.escapeVehicle().startr - b.vehicle(car).startr + 1;
                space = 0;
                for (int j = b.vehicle(car).startr + b.vehicle(car).length; j < b.size(); j++)
                {
                    if (b.vehicle(car).startr + b.vehicle(car).length + spaceNeeded > b.size())
                    {
                        break;
                    }
                    
                    if (b.at(j, i) != '.' && space < spaceNeeded)
                    {
                        current = b.at(j, i);
                        if (prev == current)
                        {
                            prev = current;
                            break;
                        }
                        prev = current;
                        indirect += 1;
                        if (success == true)
                        {
                            indirect -= 2;
                            doubCount = true;
                        }
                        space += 1;
                        break;
                    }
                    space += 1;
                }
            if (space >= spaceNeeded && success == true && doubCount == false)
            {
                indirect -= 1;
            }
        }
    }
    return indirect;
}

