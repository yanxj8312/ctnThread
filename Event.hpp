//
// Event.hpp
// QueueSystem
// 事件结构，一共由两种事件，顾客到达，顾客离开
//
//

#ifndef Event_hpp
#define Event_hpp

#include "Random.hpp"
#define RANDOM_PARAMETER 100

struct Event {
    int occur_time;

    //使用-1表示到达事件，>=0表示离开事件，同时数值表示所离开打服务窗口
    int event_type;
    Event* next;

    //默认为到达事件，发生事件随机
    Event(int occur_time = Random::uniform(RANDOM_PARAMETER),int event_type = -1):
    occur_time(occur_time),event_type(event_type),next(NULL)
    {

    }

};

#endif /* Event_hpp */
