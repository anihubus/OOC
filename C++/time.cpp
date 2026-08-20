#include <iostream>
using namespace std;
class tm {
    private:
        int hour,min,sec;
    public:
        tm(int h=0,int m=0,int s=0):hour(h),min(m),sec(s){}
        tm add(const tm &t){
            tm t3;
            t3.hour=hour+t.hour;
            t3.min=min+t.min;
            t3.sec=sec+t.sec;
            if (t3.sec>=60) {
                t3.min++;
                t3.sec-=60;
            }
            if (t3.min>=60) {
                t3.hour++;
                t3.min-=60;
            }
            return t3;

        }
        tm subtract(const tm &t) {
            tm t2;
            if (t2.hour>t.hour || (t2.hour==t.hour && t2.min>t.min) || (t2.hour==t.hour && t2.min==t.min && t2.sec>t.sec)) {
                cout<<"Cannot subtract a larger time from a smaller time."<<endl;
                return tm(0,0,0);
            }
            t2.sec-=t.sec;
            t2.min-=t.min;
            t2.hour-=t.hour;
            if (t2.sec<0) {
                t2.min++;
                t2.sec+=60;
            }
            if (t2.min<0) {
                t2.hour++;
                t2.min+=60;
            }
            return tm(t2.hour,t2.min,t2.sec);
        }
        void display() const {
            cout<<hour<<":"<<min<<":"<<sec<<endl;
        }
    };
int main() {
    tm c1(4,61,71),c2(1,9,2);
    tm sum=c1.add(c2);
    tm diff=c1.subtract(c2);
    cout<<"First time : ";
    c1.display(); cout<<"Second time : ";
    c2.display(); cout<<"Addition: ";
    sum.display(); cout<<"Subtraction: ";
    diff.display();
    return 0;
} 