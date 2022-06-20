//this is c++ pointers course codes
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b);
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
  
    int score{10};
    double high_temp{102.3};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout<<"value of score is :"<<score<<endl;
    cout<<"address of score is :"<<&score<<endl;
    cout<<"value  of score pointer is :"<<score_ptr<<endl;
    cout<<"value  of score pointer is :"<<*score_ptr<<endl;//derefrencing pointer and getting value of score

    //we cannot store double to int and others to initialized pointers

    //we can reassign values of pointers with same data types
    //if we reassign variables then it will reflect in pointer also

    vector<string> stooges{"akshay","anant","Narsanne"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooges;
    cout<<"stooges are "<<endl;
    for(auto stooge:*vector_ptr)
        cout<<stooge<<endl;

    cout<<endl;

    int *int_ptr{nullptr};

    int_ptr = new  int;
    cout<<int_ptr<<endl;

    delete int_ptr;
    size_t size{0};
    double *temp_ptr{nullptr};

    cout<<"how many temps "<<endl;
    cin>>size;
    
    temp_ptr = new double[size];
    
    cout<<temp_ptr<<endl;

    delete [] temp_ptr;

    //subscript notation
    //array_name[index] or pointername[index]
    //offset notation 
    //*(array_name + index)
    //*(pointer_name + index)

    int scores[] = {100,20,30};

    cout<<"values of scores"<<scores<<endl;

    int *score_ptr{scores};
    cout<<"values of score_ptr"<<score_ptr<<endl;

    cout<<"array subscript notation"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    
    cout<<"pointer subscript notation"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout<<"pointer offset notation "<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;
    
    cout<<"array offset notation "<<endl;
    cout<<*scores<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;


    //we can use arithmatic to the pointers 
    //increment opeator and decrement operator

    //when we are using pointer comparison pointers addresses to same location will be equal
    
    int scores[]{100,95,54,34,-2};
    int *scores_ptr{scores};

    while(*scores_ptr != -2)
        cout<<*scores_ptr++<<endl;

    string s1{"akshay"};
    string s2{"akshay"};
    string s3{"narsanne"};

    string *p1(&s1);
    string *p2(&s2);
    string *p3(&s3);

    cout<<boolalpha;
    cout<<p1<<"=="<<p2<<":"<<(p1==p2)<<endl;
    cout<<p1<<"=="<<p3<<":"<<(p1==p3)<<endl;
    
    cout<<*p1<<"=="<<*p2<<":"<<(*p1==*p2)<<endl;
    cout<<*p1<<"=="<<*p3<<":"<<(*p1==*p3)<<endl;

    int x{100},y={200};
    cout<<x<<endl;
    cout<<y<<endl;

    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;
*/
    

    return 0;
}
// void swap(int *a,int *b)
//     {
//         int temp = *a;
//         *a = *b;
//         *b = temp;
//     }
    