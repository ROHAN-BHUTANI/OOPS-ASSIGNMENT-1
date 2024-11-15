#include <iostream>
using namespace std;
class Time
{
private:
        int hours;
        int minutes;
        int seconds;
public:
        void read()
        {
            cout<<"ENTER THE VALUES";
            cin>>hours;
            cin>>minutes;
            cin>>seconds;
            if(seconds>59)
            {
                minutes=minutes+(seconds/60);
                seconds=seconds%60;
            }
             if(minutes>59)
            {
                hours=hours+(minutes/60);
                minutes=minutes%60;
            }
        }
        Time add(Time&t1)
        {
            Time t3;
            t3.hours=hours+t1.hours;
            t3.minutes=minutes+t1.minutes;
            t3.seconds=seconds+t1.seconds;
            if(t3.seconds>59)
            {
                minutes=minutes+(seconds/60);
                seconds=seconds%60;
            }
             if(t3.minutes>59)
            {
                hours=hours+(minutes/60);
                minutes=minutes%60;
            }
            return t3;
        }
        void display()
        {

                cout<<hours<<":"<<minutes<<":"<<seconds;
        }

};
int main()
{
    Time o1,o2,o3;
    o1.read();
    o2.read();
    o3=o1.add(o2);;
    o3.display();
    return 0;
}
