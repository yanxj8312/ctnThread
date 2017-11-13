//
// Node.hpp
// QueueSystem
//
// 队列节点，用户用来组成用户队列
//

#ifndef Node_hpp
#define Node_hpp

#include "Random.hpp"

#define RANDOM_PARAMETER 100

struct Node {
    int arrive_time;
    int duration;
    struct Node *next;

    //默认到达事件为0,需服务的时间是随机的
    Node(int arrive_time = 0,
         int duration = Random::uniform(RANDOM_PARAMETER)):
    arrive_time(arrive_time),duration(duration),next(NULL)
    {

    }
};
typedef struct Node Node;//重命名

typedef struct Node Customer;

#endif /* Node_hpp */
