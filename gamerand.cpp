#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

//Andrew Crantas
//andcrantas@gmail.com
//15/01/2018



void version1()
{
    //In this version the game randomly picks who starts using the rand function
    //and then they attack eachother very other turn. It also has the bonus to attack
    //
    srand(time(NULL)); //random initialiser
    int turn=0;
    int attack;
    int start;
    int playerhealth=50;
    int enemyhealth=50;
    int playerattack=10;
    int enemyattack=11;

    //picking the random beginning;

    start=rand() % 2;
    // cout<<"Start="<<start<<endl; //test
    while (playerhealth>0 && enemyhealth>0)
    {
        cout<<"----Turn "<<turn<<"----"<<endl;
        if (start==0)
        {
            attack=rand() % playerattack + 1; // random range is from 1 to playerattack inclusive
            enemyhealth=enemyhealth-attack;
            cout<<"The player attacks the enemy for "<<attack<<endl;
            start=1;
        }
        else if (start==1)
        {
            attack=rand() % enemyattack + 1; // random range is from 1 to playerattack inclusive
            playerhealth=playerhealth-attack;
            cout<<"The enemy attacks the player for "<<attack<<endl;
            start=0;
        }
        cout<<"The player has now "<<playerhealth<<" hp."<<endl;
        cout<<"The enemy has now "<<enemyhealth<<" hp."<<endl;
        turn++;

    }

    if(playerhealth<=0)
    {
        cout<<"The player died! You lost";
    }
    else
    {
        cout<<"The enemy died! You win!";
    }
    cout<<endl;
}

//-------------------------------------

void version2()
{
    //In this version the game randomly picks who starts using the rand function
    //and they attack eachother in a random order. That means that either the
    //enemy or the player can attack each other more than 1 time
    srand(time(NULL));  //random initialiser
    int turn=0;
    int attack;
    int start;
    int playerhealth=50;
    int enemyhealth=50;
    int playerattack=10;
    int enemyattack=11;

    //picking the random beginning;



    while (playerhealth>0 && enemyhealth>0)
    {

        start=rand() % 2;
        cout<<"----Turn "<<turn<<"----"<<endl;
        if (start==0)
        {
            attack=rand() % playerattack + 1; // random range is from 1 to playerattack inclusive
            enemyhealth=enemyhealth-attack;
            cout<<"The player attacks the enemy for "<<attack<<endl;

        }
        else if (start==1)
        {
            attack=rand() % enemyattack + 1; // random range is from 1 to playerattack inclusive
            playerhealth=playerhealth-attack;
            cout<<"The enemy attacks the player for "<<attack<<endl;

        }
        cout<<"The player has now "<<playerhealth<<" hp."<<endl;
        cout<<"The enemy has now "<<enemyhealth<<" hp."<<endl;
        turn++;

    }

    if(playerhealth<=0)
    {
        cout<<"The player died! You lost";
    }
    else
    {
        cout<<"The enemy died! You win!";
    }
    cout<<endl;
}

int main()
{
    int vers;
    cout<<"Please enter the version you want to run"<<endl;
    cout<<"1. Random pick between player and enemy and from then they hit each other one turn"<<endl;
    cout<<"2. Every turn is random pick to who attacks"<<endl;

    cout<<"The version you pick is: ";
    cin >> vers;


    if(vers==1)
    {
        version1();
    }
    else if (vers==2)
    {
        version2();
    }
    else
    {
        cout<<"You entered a non existant version please try again"<<endl;
    }
}
