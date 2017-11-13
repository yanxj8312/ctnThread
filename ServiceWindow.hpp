//
// ServiceWindow.hpp
// QueueSystem
//

#ifndef ServiceWindow_hpp
#define ServiceWindow_hpp

#include "Node.hpp"

//银行窗口状态
enum WindowStatus{
    SERVICE,
    IDLE,
};

class ServiceWindow {
public:
    inline ServiceWindow(){
        window_status = IDLE;//默认窗口为空闲状态
    };

    inline bool isIdle() const { //判断窗口是否空闲
        if(window_status == IDLE){
            return true;
        }else{
            return false;
        }
    }

    inline void serveCustomer(Customer &customer){ //当前服务的顾客，消耗队列中的节点
        this->customer = customer;
    }
    inline void setBusy(){ //设置窗口为忙碌状态
        window_status = SERVICE;
    }
    inline void setIdle(){ //设置窗口为空闲状态
        window_status = IDLE;
    }
    inline int getCustomerArriveTime() const{ //获取顾客到达时间
        return customer.arrive_time;
    }
    inline int getCustomerDuration() const{ //获取顾客服务时间
        return customer.duration;
    }

private:
    Customer customer;//顾客
    WindowStatus window_status;//窗口状态
};

#endif /* ServiceWindow_hpp */
