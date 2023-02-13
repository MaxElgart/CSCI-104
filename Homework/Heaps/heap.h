#ifndef HEAP_H
#define HEAP_H
#include <functional>
#include <stdexcept>
#include <vector>
#include <iostream>

template <typename T, typename PComparator = std::less<T> >
class Heap
{
public:
  /**
   * @brief Construct a new Heap object
   * 
   * @param m ary-ness of heap tree (default to 2)
   * @param c binary predicate function/functor that takes two items
   *          as an argument and returns a bool if the first argument has
   *          priority over the second.
   */
  Heap(int m=2, PComparator c = PComparator());

  /**
  * @brief Destroy the Heap object
  * 
  */
  ~Heap();

  /**
   * @brief Push an item to the heap
   * 
   * @param item item to heap
   */
  void push(const T& item);

  /**
   * @brief Returns the top (priority) item
   * 
   * @return T const& top priority item
   * @throw std::underflow_error if the heap is empty
   */
  T const & top() const;

  /**
   * @brief Remove the top priority item
   * 
   * @throw std::underflow_error if the heap is empty
   */
  void pop();

  /// returns true if the heap is empty

  /**
   * @brief Returns true if the heap is empty
   * 
   */
  bool empty() const;

private:
  /// Add whatever helper functions and data members you need below
    std::vector<T> myHeap;
    int mNary;
    PComparator comp;
};

// Add implementation of member functions here

//constructor
template <typename T, typename Comparator>
Heap<T,Comparator>::Heap(int m, Comparator c)
{
    mNary = m;
    comp = c;
}

//deconstructor
template <typename T, typename Comparator>
Heap<T,Comparator>::~Heap()
{
    
}

//checks if empty
template <typename T, typename PComparator>
bool Heap<T,PComparator>::empty() const
{
    if(myHeap.empty())
    {
        return true;
    }
    return false;
}

//push
template <typename T, typename PComparator>
void Heap<T,PComparator>::push(const T& item)
{
    //Used some code from the lab
    int i = myHeap.size();
    myHeap.push_back(item);
    
    while(i != 0)
    {
        int p = (i - 1)/mNary;
        T& current = myHeap[i];
        T& parent = myHeap[p];
        if(comp(parent, current))
        {
            break;
        }
        std::swap(current, parent);
        i = p;
    }
}

// We will start top() for you to handle the case of 
// calling top on an empty heap

//top
template <typename T, typename PComparator>
T const & Heap<T,PComparator>::top() const
{
  // Here we use exceptions to handle the case of trying
  // to access the top element of an empty heap
  if(empty()){
    // ================================
    // throw the appropriate exception
    // ================================
      throw std::underflow_error("The Heap is Empty");

  }
  // If we get here we know the heap has at least 1 item
  // Add code to return the top element
    return myHeap[0];


}


// We will start pop() for you to handle the case of 
// calling top on an empty heap

//pop
template <typename T, typename PComparator>
void Heap<T,PComparator>::pop()
{
  if(empty()){
    // ================================
    // throw the appropriate exception
    // ================================
      throw std::underflow_error("The Heap is Empty");

  }

    std::swap(myHeap[0], myHeap.back());
    myHeap.pop_back();
    
    if(myHeap.size() == 0)
    {
        return;
    }
    
    int i = 0;
    int l = mNary*i + 1;
    int r = mNary*i + 2;
    
    while(i <= (myHeap.size()-1))
    {
        if(l >= myHeap.size())
        {
            break;
        }
        
        for (int x = mNary*i + 2; x <= mNary*i + mNary; x++)
        {
            if (comp(myHeap[x], myHeap[l]) && x < myHeap.size())
            {
                l = x;
            }
        }
        
        if(comp(myHeap[l], myHeap[i]))
        {
            std::swap(myHeap[i], myHeap[l]);
            i = l;
            l = mNary*i + 1;
            r = mNary*i + 2;
        }
        else
        {
            break;
        }
    }
}



#endif

