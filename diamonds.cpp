//08_homework_03_answer.cpp
//diamond// 1 a diamond using for loop
#include <iostream>
using namespace std;
int main()
{
    for(int a=1;a<=4;a++)
    {
        //1
        for(int b=1;b<=3;b++)
        {
            if(a<=b)
                cout<<" ";
        }
        //2
        for(int c=1; c<=4;c++)
        {
            if(a >=c)
                cout<<"*";
        }
        //3
        for(int d=1;d<=3;d++)
        {
            if(a >d)
                cout<<"*";
        }
        cout<<endl;
    }
    for(int f=4;f>=1;f--
    {
        //4
        for(int g=1;g<=4;g++)
        {
            if(f<g)
                cout<<" ";
        }
        //5
        for(int h=1;h<=4;h++)
        {
            if(f>=h)
                cout<<"*";
        }
        //6
        for(int i=1;i<=3;i++)
        {
            if(f>i)
                cout<<"*";
        }
        cout<<endl;
    }
}

/*
//2 a diamond using while loop
#include <iostream>
using namespace std;
int main()
{
    int a=1;
    while(a<=4)
    {
        //1
        int b=1;
        while(b<=3)
        {
            if(a<=b)
                cout<<" ";
            b++;
        }
        //2
        int c=1;
        while( c<=4)
        {
            if(a >=c)
                cout<<"*";
            c++;
        }
        //3
        int d=1;
        while(d<=3)
        {
            if(a >d)
                cout<<"*";
            d++;
        }
        cout<<endl;
        a++;
    }
    int f=4;
    while(f>=1)
    {
        //4
        int g=1;
        while(g<=4)
        {
            if(f<g)
                cout<<" ";
            g++;
        }
        //5
        int h=1;
        while(h<=4)
        {
            if(f>=h)
                cout<<"*";
            h++;
        }
        //6
        int i=1;
        while(i<=3)
        {
            if(f>i)
                cout<<"*";
            i++;
        }
        cout<<endl;
        f--;
    }
}
*/
