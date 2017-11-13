/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月07日 星期二 13时47分13秒
    > 端午节当天，某个银行从早上八点开始服务并只服务到中午十二点就停止营业
    > 假设当天银行只提供了w个服务窗口进行服务，问：
    > 平均每分钟由多少个顾客抵达银行，平均每个顾客占用窗口时间是多少
 ************************************************************************/
#include "QueueSystem.hpp" 

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char** argv)
{
    srand((unsigned)time(0));  //使用当前时间为随机数种子

    int total_service_time = 240;   //按分钟计算
    int window_num = 4;
    int simulate_num = 100000;  //模拟次数
    
    QueueSystem system(total_service_time,window_num);
    //system.simulate(simulate_num);
    system.simulate(simulate_num);

    cout << "The average time of customer stay in bank : "<<system.getAvgStayTime()<<endl;
    cout << "The number ofcustomer arrive bank per minute: " << system.getAvgCustomers() << endl;
    return 0;
}
