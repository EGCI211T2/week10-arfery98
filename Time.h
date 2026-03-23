/* struct Time{
    int h,m,s;
};
void getTime (struct Time &t);
struct Time subtract (struct Time ,struct Time );
void display (struct Time );

void getTime (struct Time &t){
    cout<<"Input Time(H M S) : ";
    cin>>t.h>>t.m>>t.s;
}

struct Time subtract (struct Time t2,struct Time t1){
    struct Time t3;
    if((t2.s-t1.s)<0){
        --t2.m;
        t3.s = (t2.s-t1.s)+60;
    }
    else t3.s = t2.s-t1.s;

    if((t2.m-t1.m)<0){
        --t2.h;
        t3.m = (t2.m-t1.m)+60;
    }
    else t3.m = t2.m-t1.m;

    if((t2.h-t1.h)<0){
        t3.h = (t2.h-t1.h)+24;
    }
    else t3.h = t2.h-t1.h;

    return t3;
}

void display (struct Time t){
    cout<<setfill('0')<<setw(2)<<t.h<<":"
	<<setfill('0')<<setw(2)<<t.m<<":"
	<<setfill('0')<<setw(2)<<t.s << endl;

} */

class Time{
    private:
        int h,m,s;
    public:
        void set_time(int=0,int=0,int=0);
        void display();
        void getTime ();
        Time subtract(Time,Time);
        //Time operator-(Time);
};

    void Time::set_time(int hh,int mm,int ss){
		h=(hh>0&&hh<24)?hh:0; 
	    m=(mm>0 && mm<60)?mm:0; 
		s=(ss>0 && ss<60)?ss:0; 
    }

    void Time::display(){
        cout<< setw(2) << setfill('0') <<h<<":"
		<< setw(2) << setfill('0') <<m<<":"
	    << setw(2) << setfill('0') <<s<<endl;
    }
    
    void Time::getTime(){
        cout<<"Input Time(H M S) : ";
        cin>>h>>m>>s;
    }

    Time Time::subtract(Time t2,Time t1){
    Time t3;
        if((t2.s-t1.s)<0){
            --t2.m;
            t3.s = (t2.s-t1.s)+60;
        } else t3.s = t2.s-t1.s;

        if((t2.m-t1.m)<0){
        --t2.h;
        t3.m = (t2.m-t1.m)+60;
        } else t3.m = t2.m-t1.m;

        if((t2.h-t1.h)<0){
        t3.h = (t2.h-t1.h)+24;
        } else t3.h = t2.h-t1.h;

        return t3;
    }