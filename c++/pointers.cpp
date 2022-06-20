//this is c++ pointers course codes
#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
    int num{10};
    cout<<"value of num is :"<<num<<endl;
    cout<<"Size of num is :"<<sizeof num<<endl;
    cout<<"addres of num is :"<<&num<<endl;
    
    int *p;
    cout<<"value of p is :"<<p<<endl;
    cout<<"Address of p is :"<<&p<<endl;
    cout<<"size of p is :"<<sizeof p<<endl;

    p=nullptr;
    cout<<"value of p is :"<<p<<endl;

    int *p1 {nullptr};//point to int 
    double *p2 {nullptr};//point to double
    unsigned long long *p3 {nullptr};//point to 
    vector<string> *p4{nullptr};//points to string vector
    string *p5{nullptr};

    cout<<"size of p1 is :"<<sizeof p1<<endl;
    cout<<"size of p2 is :"<<sizeof p2<<endl;
    cout<<"size of p3 is :"<<sizeof p3<<endl;
    cout<<"size of p4 is :"<<sizeof p4<<endl;
    cout<<"size of p5 is :"<<sizeof p5<<endl;
*/    
    int score{10};
    double high_temp{102.3};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout<<"value of score is :"<<score<<endl;
    cout<<"address of score is :"<<&score<<endl;
    cout<<"value  of score pointer is :"<<score_ptr<<endl;
    cout<<"value  of score pointer is :"<<*score_ptr<<endl;//derefrencing pointer and getting value of score
    
    //we cannot store double to int and others to initialized pointers

    return 0;
}