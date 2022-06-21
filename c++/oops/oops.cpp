 #include<bits/stdc++.h>
 
 using namespace std;

//started with object oriented c++
//classes and objects
//just keeping things safe yes its safe

class Player
{
private:
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};

public:
    //methods
    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;};
    bool is_dead();

};
class Account 
{
private:
    string name{"Account"};
    double balance{0.0};

public:
    bool deposit(double bal){balance += bal;cout<<"in deposit"<<endl;}; 
    bool withdraw(double bal){balance-=bal;cout<<"In Withdraw"<<endl;};
};
 int main()
{
/*
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[] {frank,hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;
    Account frank_account;
    frank_account.name = "frank account";
    frank_account.balance = 5000;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);


    Player frank;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("hi there");

    Player *enemy = new Player;
    // cin>>(*enemy).name;
    (*enemy).name = "Akshay";
     (*enemy).health = 100;

    enemy->xp = 15;
    enemy->talk("i will destroy you");

    (*enemy).talk("its got "); 
*/  
    Player frank;
    // frank.name = "frank";gives an error bcz we are accessing private member
    frank.talk("Good Morning Akshay");
    return 0;
 }
