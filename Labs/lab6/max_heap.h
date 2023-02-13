#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
class MaxHeap {
private:
    std::vector<T> data;
public:
    void push(const T& item);
    // Removes the largest element in the heap
    void pop();
    // Returns the largest element in the heap (but does not remove it)
    T const& top() const;
    std::size_t size() const;
};

template <typename T>
void MaxHeap<T>::push(const T& item) {
    data.push_back(item);
    std::size_t index = data.size() - 1;
    while (index != 0) {
        std::size_t parent_index = (index - 1) / 2;
        T& current = data[index];
        T& parent = data[parent_index];
        if (current <= parent) {
            break;
        }
        std::swap(current, parent);
        index = parent_index;
    }
}

template <typename T>
void MaxHeap<T>::pop() {
    if (data.empty()) {
        throw std::out_of_range("heap is empty");
    }

    std::swap(data[0], data.back());
    data.pop_back();
    int i = 0;
    int l = 2*i + 1;
    int r = 2*i + 2;
    
    while(i != (data.size()-1))
    {
        if(l >= data.size())
        {
            break;
        }
        else if (r >= data.size())
        {
            if(data[i] <= data[l])
            {
                std::swap(data[i], data[l]);
                i = l;
                l = 2*i + 1;
                r = 2*i + 2;
            }
            break;
        }
        if(data[i] <= data[l] && data[l] >= data[r])
        {
            std::swap(data[i], data[l]);
            i = l;
            l = 2*i + 1;
            r = 2*i + 2;
        }
        else if(data[i] <= data[r] && data[r] >= data[l])
        {
            std::swap(data[i], data[r]);
            i = r;
            r = 2*i + 2;
            l = 2*i + 1;
        }
        else
        {
            break;
        }
    }
    
}

template <typename T>
T const& MaxHeap<T>::top() const {
    if (data.empty()) {
        throw std::out_of_range("heap is empty");
    }
    return data[0];
}

template <typename T>
std::size_t MaxHeap<T>::size() const {
    return data.size();
}
