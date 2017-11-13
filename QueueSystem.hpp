//
// QuseueSystem.hpp
// QueueSystem
//
//


#ifndef QueueSystem_hpp
#define QueueSystem_hpp

#include "Event.hpp"
#include "Queue.hpp"
#include "ServiceWindow.hpp"

class QueueSystem{

public:
    //初始化队列系统
    QueueSystem(int total_service_time,int window_num);

    //销毁
    ~QueueSystem();

    //启动模拟
    void simulate(int simulate_num);

    inline double getAvgStayTime() const {
        return avg_stay_time;
    }

    inline double getAvgCustomers() const {
        return avg_customer;
    }

private:
    //让队列系统运行一次
    double run();

    //初始化各种参数
    void init();

    //清空各种参数
    void end();

    //获得空闲窗口索引
    int getIdleServiceWindow();

    //处理顾客到达事件
    void customerArrived();

    //处理顾客离开事件
    void customerDeparture();

    //服务区窗口打总数
    int window_num;

    //总的营业时间
    int total_service_time;
    
    //顾客逗留的时间
    int customer_stay_time;

    //顾客总数
    int total_customer_num;

    //核心成员
    ServiceWindow* windows; //窗口数量
    Queue<Customer> customer_list; //顾客队列
    Queue<Event> event_list; //事件队列
    Event* current_event; //当前事件

    //给外部调用打结果
    double avg_customer;
    double avg_stay_time;
    
};


#endif /* QueueSystem_hpp */

