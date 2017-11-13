//
// Random.hpp
// QueueSystem
//

#ifndef Random_hpp
#define Random_hpp

#include <cstdlib>
#include <cmath>

class Random{
public:
    //[0,max)之间的服从均匀分布的随机值
    static double uniform(double max = 1) {
        return ((double)std::rand() / (RAND_MAX))*max;
    }

};

#endif /* Random_hpp */
