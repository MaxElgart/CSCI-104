#include <iostream>
#include <sstream>
#include "graphiso.h"

using namespace std;

// ================= Complete - Begin Graph class implementation ===================
Graph::Graph(std::istream& istr)
{
    string aline;
    while(getline(istr,aline))
    {
        istringstream iss(aline);
        string u, v;
        if(iss >> u){
            VERTEX_SET_T neighbors;
            while(iss >> v)
            {
                neighbors.insert(v);
            }
            adj_.insert(std::make_pair(u,neighbors));
        }
    }
}


bool Graph::edgeExists(const VERTEX_T& u, const VERTEX_T& v) const
{
    if((adj_.find(u) != adj_.end()) && (adj_.at(u).find(v) != adj_.at(u).end()))
    {
        return true;
    }
    return false;
}
const VERTEX_SET_T& Graph::neighbors(const VERTEX_T& v) const
{
    if(adj_.find(v) == adj_.end()){
        throw std::invalid_argument("Neighbors: invalid vertex - not in  map");
    }
    return adj_.at(v);
}
VERTEX_LIST_T Graph::vertices() const
{
    VERTEX_LIST_T verts;
    for(const auto& p : adj_)
    {
        verts.push_back(p.first);
    }
    return verts;
}
// ================= Complete - End Graph class implementation ===================

// Prototype and helper functions here
bool helperGraph(const Graph& g1, const Graph& g2, VERTEX_ID_MAP_T& mapping, VERTEX_LIST_T g1verts, VERTEX_SET_T mappedG2, VERTEX_LIST_T g2verts, int index);

// To be completed
bool isConsistent(const Graph& g1, const Graph& g2, VERTEX_ID_MAP_T& mapping)
{
    // Feel free to change or remove this starter code
    VERTEX_LIST_T g1verts = g1.vertices();
    for(const auto& g1u : g1verts)
    {
        // Check mappings for necessary vertices to see if there is any violation
        // and return false
        if (mapping.find(g1u) == nullptr)
        {
            continue;
        }
        else if (g1.neighbors(g1u).size() != g2.neighbors(mapping.at(g1u)).size())
        {
            return false;
        }
        
        VERTEX_SET_T neighbors = g1.neighbors(g1u);
        for (auto x : neighbors)
        {
            if(mapping.find(x) == nullptr || (g1.edgeExists(g1u, x) && g2.edgeExists(mapping.at(g1u), mapping.at(x))))
            {
                continue;
            }
            return false;
        }
    }
    return true;
}

// Add any helper functions you deem useful

// To be completed
bool graphIso(const Graph& g1, const Graph& g2, VERTEX_ID_MAP_T& mapping)
{
    VERTEX_LIST_T g1verts = g1.vertices();
    if(g1verts.size() != g2.vertices().size())
    {
        return false;
    }
    // Add code here
    VERTEX_LIST_T g2verts = g2.vertices();
    VERTEX_SET_T mappedG2;
    int index = 0;
    // Delete this and return the correct value...
    // This is just placeholder to allow compilation
    return helperGraph(g1, g2, mapping, g1verts, mappedG2, g2verts, index);
}

bool helperGraph(const Graph& g1, const Graph& g2, VERTEX_ID_MAP_T& mapping, VERTEX_LIST_T g1verts, VERTEX_SET_T mappedG2, VERTEX_LIST_T g2verts, int index)
{
    if (index == g1verts.size())
    {
        return true;
    }

    for (auto vert : g2verts)
    {
        if (mappedG2.find(vert) != mappedG2.end())
        {
            continue;
        }
        
        mapping.insert(make_pair(g1verts[index], vert));
        mappedG2.insert(vert);
        
        if (isConsistent(g1, g2, mapping))
        {
            bool status = helperGraph(g1, g2, mapping, g1verts, mappedG2, g2verts, index + 1);
            if (status == true)
            {
                return true;
            }
        }
        mapping.remove(g1verts[index]);
        mappedG2.erase(vert);
    }
    
    return false;
}
