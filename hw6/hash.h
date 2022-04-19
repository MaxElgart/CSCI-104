#ifndef HASH_H
#define HASH_H

#include <iostream>
#include <cmath>
#include <random>
#include <chrono>

typedef std::size_t HASH_INDEX_T;

struct MyStringHash {
    HASH_INDEX_T rValues[5] { 983132572, 1468777056, 552714139, 984953261, 261934300 };
    MyStringHash(bool debug = true)
    {
        if(false == debug){
            generateRValues();
        }
    }
    // hash function entry point (i.e. this is h(k))
    HASH_INDEX_T operator()(const std::string& k) const
    {
        // Add your code here
        unsigned long long w[5] = {0, 0, 0, 0, 0};
        
        if (k.size() <= 6)
        {
            int j = 0;
            for (int i = k.size() - 1; i >= 0; i--)
            {
                w[4] += letterDigitToNumber(k[i])*pow(36, j);
                j++;
            }
        }
        else
        {
            int pos = 4;
            for (int i = k.size(); i >= 0; i -= 6)
            {
                if (i - 6 < 0)
                {
                    for (int j = 0; j < i; j++)
                    {
                        w[pos] += letterDigitToNumber(k[i - j - 1])*pow(36, j);
                    }
                }
                else
                {
                    for (int j = 0; j < 6; j++)
                    {
                        w[pos] += letterDigitToNumber(k[i - j - 1])*pow(36, j);
                    }
                }
                pos--;
            }
        }
        
        return (rValues[0]*w[0] + rValues[1]*w[1] + rValues[2]*w[2] + rValues[3]*w[3] + rValues[4]*w[4]);
    }

    // A likely helper function is to convert a-z,0-9 to an integral value 0-35
    HASH_INDEX_T letterDigitToNumber(char letter) const
    {
        // Add code here or delete this helper function if you do not want it
        if ((int)letter <= 57 && (int)letter >= 48)
        {
            return (int)letter - 22;
        }
        
        if ((int)letter <= 90 && (int)letter >= 65)
        {
            return (int)letter - 65;
        }
        
        if ((int)letter <= 122 && (int)letter >= 97)
        {
            return (int)letter - 97;
        }
    }

    // Code to generate the random R values
    void generateRValues()
    {
        // obtain a seed from the system clock:
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::mt19937 generator (seed);  // mt19937 is a standard random number generator

        // Simply call generator() [it has an operator()] to get another random number
        for(int i{ 0 }; i < 5; ++i)
        {
            rValues[i] = generator();
        }
    }
};

#endif
