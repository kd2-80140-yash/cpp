#include<iostream>

using namespace std;

class Time
{
    private:
    int h;
    int m;
    int s;

    public:
      Time()
      {

      }
      Time(int h,int m,int s)
      {
        this->h = h;
        this->m = m;
        this->s = s;
      }
      int getHour()
      {
        return this->h;
      }
      int getMinute()
      {
        return this->m;
      }
      int getseconds()
      {
        return this->s;
      }
      void printTime()
      {
        cout<<"Time is : "<<this->h<< " : "<<this->m<< " : "<<this->s;
      }
      void sethour()
      {
        cout<<"Enter minute : ";
        cin>>this->m;
      }
      void setseconds()
      {
        cout<<"Enter seconds : ";
        cin>>this->s;
      }
};
    int main()
    {
        Time **T = new Time *[2];

        T[0] = new Time(0,0,0);

        T[1] = new Time(10,10,10);

        for (int i  = 0; i < 2; i++)
        {
            cout<<"Default times in object : "<<i<<endl;
            cout<<T[i]->getHour()<< " : "<<T[i]->getMinute()<<" : "<<T[i]->getseconds()<<endl;

        }
        for (int i = 0; i < 2; i++)
        {
            cout<<"Enter time for object"<<i<<endl;
            T[i]->getHour();
            T[i]->getMinute();
            T[i]->getseconds();

        }
        for (int i = 0; i < 2; i++)
        {
            cout<<"Times in object : "<<i<<endl;
            cout<<T[i]->getHour()<<" : "<<T[i]->getMinute()<<" : "<<T[i]->getseconds()<<endl;
        }
        for (int i = 0; i < 2; i++)
    {
        delete T[i];
    }

    return 0;

        
        
        
    }

