#include<bits/stdc++.h>
using namespace std;

struct 
{
    string playerName;
    int playerHealth;
    string weapon;
}player1,player2,player3;


int main()
{
    player1.playerName="Mark";
    player1.playerHealth=100;
    player1.weapon="AK-47";
    player2.playerName="John";
    player1.playerHealth=200;
    player1.weapon="M416";

    string myName="vishal";
    string *ptr = &myName;
    cout<<ptr<<endl;
    cout<<*ptr;
    return 0;
}