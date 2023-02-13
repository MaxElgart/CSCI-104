

#include <set>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
// add or remove necessary headers as you please
#include "schedwork.h"

using namespace std;

// a constant that can be used to indicate an INVALID 
// worker ID if that is useful to your implementation.
// Feel free to not use or delete.
static const Worker_T INVALID_ID = (unsigned int)-1;


// Add prototypes for any helper functions here
bool scheduleHelper(
    const AvailabilityMatrix& avail,
    const size_t dailyNeed,
    const size_t maxShifts,
    DailySchedule& sched, int row, int col, std::vector<int> count);

bool isValidSched(std::vector<int> count, const size_t maxShifts);

bool scheduleFilled(DailySchedule& sched, int row);

// Add your implementation of schedule() and other helper functions here

bool schedule(
    const AvailabilityMatrix& avail,
    const size_t dailyNeed,
    const size_t maxShifts,
    DailySchedule& sched
)
{
    if(avail.size() == 0U){
        return false;
    }
    sched.clear();
    // Add your code below
    
    if (dailyNeed > avail[0].size())
    {
        return false;
    }
    
    vector<int> counts;
    sched.resize(avail.size());
    for (int i = 0; i < avail[0].size(); i++)
    {
        counts.push_back(0);
    }
    
    for (int i = 0; i < avail.size(); i++)
    {
        for (int j = 0; j < dailyNeed; j++)
        {
            sched[i].push_back(INVALID_ID);
        }
    }
    
    return scheduleHelper(avail, dailyNeed, maxShifts, sched, 0, 0, counts);
}

bool scheduleHelper(
    const AvailabilityMatrix& avail,
    const size_t dailyNeed,
    const size_t maxShifts,
    DailySchedule& sched, int row, int col, std::vector<int> count)
{
    if (row == avail.size())
    {
        return true;
    }
    
    if (col > dailyNeed)
    {
        if(scheduleFilled(sched, row))
        {
            return scheduleHelper(avail, dailyNeed, maxShifts, sched, row + 1, 0, count);
        }
        else
        {
            return false;
        }
    }
    
    if (!isValidSched(count, maxShifts))
    {
        return false;
    }
    
    bool counted = false;
    
    for (int i = 0; i < avail[0].size(); i++)
    {
        if (avail[row][i] == 1 && col != dailyNeed)
        {
            if (col > 0 && std::find(sched[row].begin(), sched[row].end(), i) == sched[row].end())
            {
                continue;
            }
            sched[row][col] = i;
            count[i] += 1;
            counted = true;
        }
        bool status = scheduleHelper(avail, dailyNeed, maxShifts, sched, row, col + 1, count);
        if (status)
        {
            return true;
        }
        
        if (counted)
        {
            count[i] -= 1;
            sched[row][col] = INVALID_ID;
        }
    }
    return false;
}

bool isValidSched(std::vector<int> count, const size_t maxShifts)
{
//    for(int i = 0; i < sched.size(); i++)
//    {
//        for (int j = 0; j < avail[0].size(); j++)
//        {
//            if (count(sched[i].begin(), sched[i].end(), j) > maxShifts)
//            {
//                return false;
//            }
//        }
//    }
    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] > maxShifts)
        {
            return false;
        }
    }
    
    return true;
}

bool scheduleFilled(DailySchedule& sched, int row)
{
    for (int i = 0; i < sched[row].size(); i++)
    {
        if (sched[row][i] == -1)
        {
            return false;
        }
    }
    
    return true;
}
