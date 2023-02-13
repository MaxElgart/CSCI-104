#include "stones.h"
#include "max_heap.h"

int lastStoneWeight(std::vector<int>& stones) {
    MaxHeap<int> heap;
    
    // TO BE COMPLETED
    if(stones.size() == 0)
    {
        return 0;
    }
    
    if(stones.size() == 1)
    {
        return stones[0];
    }
    
    for(int i = 0; i < stones.size(); i++)
    {
        heap.push(stones[i]);
    }
    
    int biggest = 0;
    int second = 0;
    biggest = heap.top();
    heap.pop();
    second = heap.top();
    heap.pop();
    
    while(heap.size() != 0)
    {

        
        if(biggest == second)
        {
            if(heap.size() == 1)
            {
                return heap.top();
            }
            biggest = heap.top();
            heap.pop();
            second = heap.top();
            heap.pop();
            continue;
        }
        else if(second > biggest)
        {
            biggest = second - biggest;
            second = heap.top();
            heap.pop();
        }
        else
        {
            biggest -= second;
            second = heap.top();
            heap.pop();
        }
    }
    biggest -= second;
    if (biggest <= 0)
    {
        return 0;
    }
    else
    {
        return biggest;
    }
}
