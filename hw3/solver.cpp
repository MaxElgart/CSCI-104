#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include "solver.h"

using namespace std;

// To be completed
Solver::Solver(const Board& b, Heuristic *heur)
{
    b_ = b;
    heur_ = heur;
}

// To be completed
Solver::~Solver()
{

}

// To be completed
bool Solver::run()
{
    // Avoid compiler warnings - replace this
    
    //open is a heap of moves and closed is a set
    MoveHeap openList;
    MoveSet closedList;
    std::vector<std::pair<Board::VID_T, int>> allMoves = b_.potentialMoves();
    
    for (unsigned int i = 0; i < allMoves.size(); i++)
    {
        Move* newMove = new Move(&b_);
        newMove->m = allMoves[i];
        newMove->score(heur_);
        openList.push(newMove);
    }
    
    while(!(openList.empty()))
    {
        Move* current = openList.top();
        openList.pop();
        closedList.insert(current);
        b_ = *(current->b);
        if (b_.solved())
        {
            for (MoveSet::iterator it = closedList.begin(); it != closedList.end(); it++)
            {
                solution_.push_back(std::make_pair((*it)->m.first, (*it)->m.second));
            }
            std::reverse(solution_.begin(), solution_.end());
            for (auto x : closedList)
            {
                delete x;
            }
            
            return true;
        }
        allMoves = b_.potentialMoves();
        for (unsigned int i = 0; i < allMoves.size(); i++)
        {
            Board* temp = new Board;
            temp = &b_;
            temp->move(allMoves[i].first, allMoves[i].second);
            Move* newMove = new Move(allMoves[i], temp, current);
            newMove->score(heur_);
            if (closedList.find(newMove) == closedList.end())
            {
                openList.push(newMove);
            }
            else
            {
                delete newMove;
            }
        }
    }
    
    for (auto x : closedList)
    {
        delete x;
    }
    return false;
}

// To be completed
Board::MovePairList Solver::solution() const
{
    // Avoid compiler warnings - replace this
    return solution_;
}

// Complete
size_t Solver::numExpansions() const
{
    return expansions_;
}
