#include "move.h"

// Complete
Move::Move(Board* board)
{
    m.first = Vehicle::INVALID_ID;
    m.second = 0;
    b = board;
    g = 0;
    h = 0;
    prev = NULL;
}

// To be completed
Move::Move(const Board::MovePair& move, Board* b,  Move *parent)
{
    m = move;
    this->b = b;
    g = parent->g + 1;
    prev = parent;
}

// To be completed
Move::~Move()
{
    
}

// To be completed
bool Move::operator<(const Move& rhs) const
{
    if ((g + h) < (rhs.g + rhs.h))
    {
        return true;
    }
    else if((g + h) == (rhs.g + rhs.h) && h < rhs.h)
    {
        return true;
    }
    else if((g + h) == (rhs.g + rhs.h) && h == rhs.h && b < rhs.b)
    {
        return true;
    }
    
    return false;
}

// To be completed
void Move::score(Heuristic *heur) 
{
    h = heur->compute(*b);
}
