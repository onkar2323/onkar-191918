#include<iostream>
#include<bits/stdc++.h>
#include<bits/stl_pair.h>

using namespace std;

class Time;
Time addTime(Time , Time);
class Time{
    private:
        int hrs;
        int min;
        friend Time addTime(Time a , Time b);
       
    public:
        Time():hrs(0),min(0){
            return;
        }
        Time(int hour ,int minutes):hrs(hour),min(minutes){
            return;
        }

        ~Time(){
            return ; 
        }

        
        
        std::pair<int,int> getData(){
            return  make_pair(hrs,min);
        }

        void setData(int hour, int minutes){
            this->hrs = hour;
            this->min = minutes;
        }
        
};

Time addTime(Time  a, Time b){
    int hours = a.hrs + b.hrs;
    int minutes = a.min + b.min;
    Time output(hours,minutes);
    return output;
}

int main(){
    Time a(8,15), b(1,20);
	Time output = addTime(a,b);
	std:: pair<int,int> p = output.getData();
	cout<<p.first<<":"<<p.second<<endl;		
    return 0;
}
