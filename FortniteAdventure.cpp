


// try not to kill yourself :)
#include<cstdlib>
#include <iostream>


int dumbInput;

int playerHealth = 100;

int playersheild = 0;

int selectslot;

int selectslot2;

int hadPots = 2;

int hadMinis = 4;

int bildrenLeft = 100;

int CanRunChecker;

int storeHealth2;

bool HasDeath = false;

int pickup1, pickup2;

int storeHealth;
int botHealth;


bool lastFight = false;

int randForPump1()
{

    int dammage = rand() % 40 + 45;
    int noHead = rand() % 100 + 0;

    if (noHead < 25)
    {
        dammage = dammage * 1.22;
    }
    return dammage;
}

int randForPump2()
{

    int dammage = rand() % 70 + 40;
    int noHead = rand() % 100 + 0;

    if (noHead < 25)
    {
        dammage = dammage * 1.22;
    }
    return dammage;
}

int randForPump3()
{
    int dammage = rand() % 90 + 70;
    int noHead = rand() % 100 + 0;

    if (noHead < 25)
    {
        dammage = dammage * 1.22;
    }
    return dammage;
}

int randForPump4()
{
    int dammage = rand() % 119 + 80;
    int noHead = rand() % 100 + 0;

    if (noHead < 25)
    {
        dammage = dammage * 1.22;
    }
    return dammage;
}


int randForPump5()
{
    int dammage = rand() % 100 + 100;

    int noHead = rand() % 100 + 0;

    if (noHead < 25)
    {
        dammage = dammage * 1.22;
    }
    return dammage;
}


int randForAR1()
{
    int hits = rand() % 10 + 5;
    int dammage = 6 * hits;
    return dammage;
}
int randForAR2()
{
    int hits = rand() % 10 + 5;
    int dammage = 8 * hits;
    return dammage;
}
int randForAR3()
{
    int hits = rand() % 10 + 5;
    int dammage = 12 * hits;
    return dammage;
}
int randForAR4()
{
    int hits = rand() % 10 + 5;
    int dammage = 14 * hits;
    return dammage;
}


int randForAR5()
{
    int hits = rand() % 10 + 5;
    int dammage = 18 * hits;
    return dammage;
}


int randPumpChoice()
{
    int result;
    result = rand() % 100 + 1;

    if (result < 5)
    {
        return 0;
    }
    else
    {
        if (result >= 5 && result < 45)
        {
            return 1;
        }
        else
        {
            if (result >= 45 && result < 60)
            {
                return 2;
            }
            else
            {
                if (result >= 60 && result < 90)
                {
                    return 3;
                }
                else
                {
                    if (result >= 90)
                    {
                        return 4;
                    }
                    else
                    {

                        return -1;
                    }
                }
            }
        }
    }
}


int randARChoice()
{
    int result;
    result = rand() % 100 + 1;

    if (result < 5)
    {
        return 5;
    }
    else
    {
        if (result >= 5 && result < 45)
        {
            return 6;
        }
        else
        {
            if (result >= 45 && result < 60)
            {
                return 7;
            }
            else
            {
                if (result >= 60 && result < 90)
                {
                    return 8;
                }
                else
                {
                    if (result >= 90)
                    {
                        return 9;
                    }
                    else
                    {

                        return -1;
                    }
                }
            }
        }
    }
}


void order66()
{
    lastFight = false;

    bildrenLeft = bildrenLeft - (rand() % 10 + 5);
    if (bildrenLeft < 5)
    {
        lastFight = true;

    }
    if (lastFight != true)
    {
        std::cout << "          There are " << bildrenLeft << " People left" << std::endl;
    }



}

#include <iostream>
#include <utility>      // std::pair, std::make_pair
#include <string>
#include <stdlib.h>  //rand stuff
#include <time.h>  // rand stuff




using namespace std;


int main()

{
    
    string sometimesNeeded;
    int storeMedsValue;
    string yesOrNo;

    int slotNumber;
    int numMinis;
    string move;
    //Drop thing

    string location;
    std::cout << "          Please type where you want to drop with no spaces" << std::endl;
    std::cin >> location;
    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
    int GunInts = 1;
    std::cout << "          Gliding to " << location << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;




    srand(time(NULL));

    //Gun ints

    pair<string, int> Cheststorage[19] =
    {
    make_pair("GreyPump", 0),
    make_pair("GreenPump",  1),
    make_pair("BluePump", 2),
    make_pair("PurplePump", 3),
    make_pair("GoldPump", 4),
    make_pair("GreyAR", 5),
    make_pair("GreenAR", 6),
    make_pair("BlueAR", 7),
    make_pair("PurpleAR", 8),
    make_pair("GoldAR", 9),
    make_pair("MedKit",10),
    make_pair("BigPot(2)",11),
    make_pair("BigPot(1)",12),
    make_pair("Empty",13),
    make_pair("Minis(4)",14),
    make_pair("Minis(3)",15),
    make_pair("Minis(2)",16),
    make_pair("Minis(1)",17),
    make_pair("Empty",18)
    };
    pair<string, int> playerstorage[4] = { make_pair("Empty",-1),make_pair("Empty",-1),make_pair("Empty",-1),make_pair("Empty",-1),

    };


    string names[17]{ "AssMan","FatalRhombus","FazeTommyBoyl","cheeks","TTV_Ass_GrAss","Demon_Auriza","Demon_Tej","NoodleMan","P$ssyslayer","horewolf","JoeMama","squishyKnight76,yourMother9000","Iasic334","rydro20","mcGloop","HarryPotthead" };


    int numchestsLol = rand() % 3 + 1;

    int chestspawnTypes[5]; // 0=shotGun 1= AR chest;

    

    for (int i = 0; i < numchestsLol; i++)
    {
        chestspawnTypes[i] = rand() % 2 + 1;
    }

    int gunChose;

    std::cout << "          You found " << numchestsLol << " chest(s) in " << location << std::endl;


    for (int i = 0; i < numchestsLol; i++)//chest spawnstuff + loadOutMaking
    {
        std::cout << "          Enter 1 to open a chest" << std::endl;
        std::cin >> dumbInput;
        std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;



        if (chestspawnTypes[i] == 1)
        {
            gunChose = randPumpChoice();
        }
        else
        {
            gunChose = randARChoice();
        }



        std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }
        std::cout << " " << std::endl;

        std::cout << "          The chest gave you a " << Cheststorage[gunChose].first << std::endl;

        std::cout << "          which slot would like to put in?" << std::endl;
        int selectslot;
        std::cin >> selectslot;
        std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
        playerstorage[selectslot - 1].first = Cheststorage[gunChose].first;
        playerstorage[selectslot - 1].second = Cheststorage[gunChose].second;

        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }

        std::cout << "          Enter w to keep looting! or s to stop!" << std::endl;
        std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;

        std::cin >> sometimesNeeded;


        if (sometimesNeeded == "s")
        {
            break;
        }


    }

    int randMeds = rand() % 3 + 1;

    switch (randMeds)
    {
    case 1:
        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }
        cout << "           You found 4 minis, where would you like to put them? (max of 4 can be held)" << endl;
        cin >> selectslot;

        playerstorage[selectslot - 1].first = Cheststorage[14].first;
        playerstorage[selectslot - 1].second = Cheststorage[14].second;


        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }
        break;

    case 2:
        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }
        cout << "           You found 2 bigPots, where would you like to put them? (max of 2 can be held in a single slot)" << endl;
            cin >> selectslot;

        playerstorage[selectslot - 1].first = Cheststorage[11].first;
        playerstorage[selectslot - 1].second = Cheststorage[11].second;


        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }
        break;


    case 3:

        cout << "         You found 0 meds :( Good luck" << endl;
        break;
  
    }
    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;

    

    std::cout << "           Would you like to use an item? yes or no" << endl;
    std::cin >> yesOrNo;


    if (yesOrNo == "yes")
    {
        std::cout << "          Your loadout is  " << std::endl;

        for (int i = 0; i < 4; i++)
        {
            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
        }
       std:: cout << "          Please enter the items slot number" << endl;
       std:: cin >> selectslot >> selectslot2;
        if (playerstorage[selectslot - 1].second<10|| playerstorage[selectslot - 1].first=="Empty")
        {
            std::cout << "          Please enter a valid item slot:" << endl;
           std:: cin>>selectslot;
        }




        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



        switch (playerstorage[selectslot-1].second)//Geneva convention??? More like Gneva suggestion :)))))))))))
        {
        case 11:
           std:: cout << "          Please enter how many" << playerstorage[selectslot - 1].first << "'s you would like to use         " << endl;
            std::cin >> selectslot2;
            switch (selectslot2)
            {
            case 1:
               
                
                if (playersheild >= 100)
                {
                    std::cout << "          A big pot has no effect!       " << endl;
                    break;
                }
                playersheild = playersheild + 50;
                if (playersheild > 100)
                {
                    playersheild = 100;
                }
                 storeMedsValue= playerstorage[selectslot - 1].second  ;
                playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue+1].second;
                playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue+1].first;
                
                break;
                

            case 2:

                if (playersheild >= 100)
                {
                    cout << "          A big pot has no effect!       " << endl;
                    break;
                }

                if (playersheild >= 50)
                {
                    playersheild = playersheild + 50;
                    if (playersheild > 100)
                    {
                        playersheild = 100;
                    }
                    storeMedsValue = playerstorage[selectslot - 1].second;
                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue+1].second;
                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue+1].first;
                    break;
                }
                else
                {
                    if (Cheststorage[playerstorage[selectslot - 1].second + 1].first == "Empty")
                    {
                        cout << "          You only have 1 big pot!" << endl;
                        playersheild = playersheild + 50;

                        storeMedsValue = playerstorage[selectslot - 1].second;
                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue+1].second;
                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue+1].first;
                        break;
                    }
                    else
                    {
                        playersheild = playersheild + 100;
                        if (playersheild > 100)
                        {
                            playersheild = 100;
                            storeMedsValue = playerstorage[selectslot - 1].second;
                            playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                            playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                            break;

                        }
                    }
                }

             
                
            }
           std:: cout << "          You have " << playersheild << " Sheild" << endl;
            break;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        case 12:
            std::cout << "Enter 1 to use your bigpot         " << endl;
            std::cin >> selectslot2;
            if (playersheild > 100)
            {
                std::cout << "          Can not use a big pot!" << endl;
                    break;
            }
            else
            {
                playersheild = playersheild + 50;
                if (playersheild > 100)
                {
                    playersheild = 100;
                    
                }
                playerstorage[selectslot - 1].first = "Empty";
                playerstorage[selectslot - 1].second = -1;
            }
            std::cout << "          You have" << playersheild << " Sheild" << endl;
            break;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 14:
            std::cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
            std::cin >> selectslot2;
            switch (selectslot2)
            {
            case 1:
                if (playersheild >= 50)
                {
                    std::cout << "          Can't use a mini!" << endl;
                    break;
                }
                else
                {
                    playersheild = playersheild + 25;
                    if (playersheild > 50)
                    {
                        playersheild = 50;
                        

                    }
                    
                }
                break;

            case 2:
                if (playersheild >= 50)
                {
                    std::cout << "          Can't use a mini!" << endl;
                    break;
                }
                else
                {
                    if (playersheild >= 25)
                    {
                        playersheild = playersheild + 25;
                        if (playersheild > 50)
                        {
                            playersheild = 50;
                            

                        }
                        storeMedsValue = playerstorage[selectslot - 1].second;
                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                    }
                    else
                    {
                        playersheild = 50;
                    }
                }
                break;



            }
            cout << "          You have " << playersheild << " Sheild" << endl;
            break;
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 15:
            cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
            cin >> selectslot2;
            switch (selectslot2)
            {
            case 1:
                if (playersheild >= 50)
                {
                    cout << "          Can't use a mini!" << endl;
                    break;
                }
                else
                {
                    playersheild = playersheild + 25;
                    if (playersheild > 50)
                    {
                        playersheild = 50;


                    }
                    storeMedsValue = playerstorage[selectslot - 1].second;
                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                }
                break;

            case 2:
                if (playersheild >= 50)
                {
                    cout << "          Can't use a mini!" << endl;
                    break;
                }
                else
                {
                    if (playersheild >= 25)
                    {
                        playersheild = playersheild + 25;
                        if (playersheild > 50)
                        {
                            playersheild = 50;


                        }
                        storeMedsValue = playerstorage[selectslot - 1].second;
                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                    }
                }
                break;



            }
            cout << "          You have " << playersheild << " Sheild" << endl;
            break;
            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 16:
            cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
            cin >> selectslot2;
            switch (selectslot2)
            {
            case 1:
                if (playersheild >= 50)
                {
                    cout << "          Can't use a mini!" << endl;
                    break;
                }
                else
                {
                    playersheild = playersheild + 25;
                    if (playersheild > 50)
                    {
                        playersheild = 50;


                    }
                    storeMedsValue = playerstorage[selectslot - 1].second;
                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                }
                break;

            case 2:
                if (playersheild >= 50)
                {
                    cout << "          Can't use a mini!" << endl;
                    break;
                }
                else
                {
                    if (playersheild >= 25)
                    {
                        playersheild = playersheild + 25;
                        if (playersheild > 50)
                        {
                            playersheild = 50;


                        }
                        storeMedsValue = playerstorage[selectslot - 1].second;
                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                    }
                }
                break;



            }
            cout << "          You have " << playersheild << " Sheild" << endl;
            break;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case 17:
            cout << "          Enter 1 to use your one mini";
            cin >> selectslot;
            if (playersheild > 50)
            {
                cout << "          Can't use a mini!" << endl;
                break;
            }
            else
            {
                playersheild = playersheild + 25;
                if (playersheild > 50)
                {
                    playersheild = 50;
                }
                playerstorage[selectslot - 1].first = "Empty";
                playerstorage[selectslot - 1].second = -1;
                cout << "          You have " << playersheild << " Sheild" << endl;
                break;
            }
            break;


        }
                
            
    }

    std::cout << "          Your loadout is  " << std::endl;


    for (int i = 0; i < 4; i++)
    {
        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
    }

    cout << "------------------------------------------------------------------------------------------" << endl;
    
    int pewPew;
    std::cout << "" << std::endl;

    std::cout << " " << std::endl;

    int targetHealth;

    string bottName;

    int range = rand() % 100;

    pair<string, int> Botstorage[4] = { make_pair("Empty",-1),make_pair("Empty",-1),make_pair("Empty",-1),make_pair("Empty",-1) };

    string pushHoe;//decides if you are in the inner camping loop or outer onTheMap loop

    int gtfo = 0; // should be a bool... for running away input

    int randForEncounter;

    bool Fightingszn = false;

    int randGunType = 0;//randomized int for storing either shotgun or AR spawning in loop chests

    int theGun;//randomized int for chosing and storing a guns "id" from a chest

    int slotChoice;

    string campspots[7]{ "bush","box","house","building"," bit_of_long_grass","snowman" };//strings for camping type names

    int canCamp;// Needs some work to be better when you find where Im using it lol...

    int randForLFR; //finding a random chest integer!

    int pushOrBePushed;//if rand for encounter decides its fighting szn can you get away or not...

    int campMax;// randomized int to limit length of camp length, also is zone moving timer

    string microwaveBenny;//lmao I made this at mmmm'oclock... just used for inputing smth 

    int hansolo; //same with this one...randomized in fights to see who shoots first

   

   




    while (bildrenLeft < 1000000)// The one and only fabled big fucker loop...its big
    {
        std::cout << "          Do you want to explore the map? (w for yes or s for no)" << std::endl;
        std::cin >> pushHoe;
        std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;




        for (int i = 0; i < 1000; i++) //Exisitng, but not in a fight loop 
        {
            Fightingszn = false;

            gtfo = 0;//cross loop comtanimation 


            randForLFR = rand() % 10 + 1;

            if (randForLFR == 2 || randForLFR == 1)
            {
                std::cout << "          while on the map, you found a chest! Enter 1 to open it " << std::endl;
                std::cin >> dumbInput;
                std::cout << "--------------------------------------------------------------------------------------------------" << std::endl;
                randGunType = rand() % 2 + 1;
                if (randGunType == 1)
                {
                    theGun = randPumpChoice();
                }
                else
                {
                    theGun = randARChoice();
                }
                std::cout << "          You found a " << Cheststorage[theGun].first << ".  Enter 1 to continue" << std::endl;
                std::cout << " " << std::endl;
                std::cin >> dumbInput;

                std::cout << " " << std::endl;
                std::cout << "----------------------------------------------------------------------------------" << std::endl;
                std::cout << "          Your load out is" << std::endl;
                for (int i = 0; i < 4; i++)
                {
                    std::cout << i + 1 << ": " << playerstorage[i].first << std::endl;
                }
                std::cout << "          Enter the slot number you would like to put the " << Cheststorage[theGun].first << std::endl;
                std::cin >> slotChoice;
                playerstorage[slotChoice - 1].second = Cheststorage[theGun].second;
                playerstorage[slotChoice - 1].first = Cheststorage[theGun].first;

                cout << "--------------------------------------------------------------" << endl;
                std::cout << "          Your load out is" << std::endl;
                for (int i = 0; i < 4; i++)
                {
                    std::cout << i + 1 << ": " << playerstorage[i].first << std::endl;
                }
                std::cout << "         Enter 1 to continue" << std::endl;
                std::cin >> dumbInput;

                randMeds = rand() % 3 + 1;

                switch (randMeds)
                {
                case 1:
                    std::cout << "          Your loadout is  " << std::endl;

                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }
                    cout << "           You found 4 minis, where would you like to put them? (max of 4 can be held)" << endl;
                    cin >> selectslot;

                    playerstorage[selectslot - 1].first = Cheststorage[14].first;
                    playerstorage[selectslot - 1].second = Cheststorage[14].second;


                    std::cout << "          Your loadout is  " << std::endl;

                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }
                    break;

                case 2:
                    std::cout << "          Your loadout is  " << std::endl;

                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }
                    cout << "           You found 2 bigPots, where would you like to put them? (max of 2 can be held in a single slot)" << endl;
                    cin >> selectslot;

                    playerstorage[selectslot - 1].first = Cheststorage[11].first;
                    playerstorage[selectslot - 1].second = Cheststorage[11].second;


                    std::cout << "          Your loadout is  " << std::endl;

                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }
                    break;


                case 3:

                    cout << "         You found 0 meds :( Good luck" << endl;
                    break;

                }
                std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;



                cout << "           Would you like to use an item? " << endl;

                if (yesOrNo == "yes")
                {
                    std::cout << "          Your loadout is  " << std::endl;

                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }
                    std::cout << "          Please enter the items slot number" << endl;
                    std::cin >> selectslot >> selectslot2;
                    if (playerstorage[selectslot - 1].second < 10 || playerstorage[selectslot - 1].first == "Empty")
                    {
                        std::cout << "          Please enter a valid item slot:" << endl;
                        std::cin >> selectslot;
                    }




                    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



                    switch (playerstorage[selectslot - 1].second)//Geneva convention??? More like Gneva suggestion :)))))))))))
                    {
                    case 11:
                        std::cout << "          Please enter how many" << playerstorage[selectslot - 1].first << "'s you would like to use         " << endl;
                        std::cin >> selectslot2;
                        switch (selectslot2)
                        {
                        case 1:


                            if (playersheild >= 100)
                            {
                                std::cout << "          A big pot has no effect!       " << endl;
                                break;
                            }
                            playersheild = playersheild + 50;
                            if (playersheild > 100)
                            {
                                playersheild = 100;
                            }
                            storeMedsValue = playerstorage[selectslot - 1].second;
                            playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                            playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;

                            break;


                        case 2:

                            if (playersheild >= 100)
                            {
                                cout << "          A big pot has no effect!       " << endl;
                                break;
                            }

                            if (playersheild >= 50)
                            {
                                playersheild = playersheild + 50;
                                if (playersheild > 100)
                                {
                                    playersheild = 100;
                                }
                                storeMedsValue = playerstorage[selectslot - 1].second;
                                playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                break;
                            }
                            else
                            {
                                if (Cheststorage[playerstorage[selectslot - 1].second + 1].first == "Empty")
                                {
                                    cout << "          You only have 1 big pot!" << endl;
                                    playersheild = playersheild + 50;

                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                    break;
                                }
                                else
                                {
                                    playersheild = playersheild + 100;
                                    if (playersheild > 100)
                                    {
                                        playersheild = 100;
                                        storeMedsValue = playerstorage[selectslot - 1].second;
                                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                        break;

                                    }
                                }
                            }



                        }
                        std::cout << "          You have " << playersheild << " Sheild" << endl;
                        break;
                        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                    case 12:
                        std::cout << "Enter 1 to use your bigpot         " << endl;
                        std::cin >> selectslot2;
                        if (playersheild > 100)
                        {
                            std::cout << "          Can not use a big pot!" << endl;
                            break;
                        }
                        else
                        {
                            playersheild = playersheild + 50;
                            if (playersheild > 100)
                            {
                                playersheild = 100;

                            }
                            playerstorage[selectslot - 1].first = "Empty";
                            playerstorage[selectslot - 1].second = -1;
                        }
                        std::cout << "          You have" << playersheild << " Sheild" << endl;
                        break;
                        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    case 14:
                        std::cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
                        std::cin >> selectslot2;
                        switch (selectslot2)
                        {
                        case 1:
                            if (playersheild >= 50)
                            {
                                std::cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                playersheild = playersheild + 25;
                                if (playersheild > 50)
                                {
                                    playersheild = 50;


                                }

                            }
                            break;

                        case 2:
                            if (playersheild >= 50)
                            {
                                std::cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                if (playersheild >= 25)
                                {
                                    playersheild = playersheild + 25;
                                    if (playersheild > 50)
                                    {
                                        playersheild = 50;


                                    }
                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                }
                                else
                                {
                                    playersheild = 50;
                                }
                            }
                            break;



                        }
                        cout << "          You have " << playersheild << " Sheild" << endl;
                        break;
                        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    case 15:
                        cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
                        cin >> selectslot2;
                        switch (selectslot2)
                        {
                        case 1:
                            if (playersheild >= 50)
                            {
                                cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                playersheild = playersheild + 25;
                                if (playersheild > 50)
                                {
                                    playersheild = 50;


                                }
                                storeMedsValue = playerstorage[selectslot - 1].second;
                                playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                            }
                            break;

                        case 2:
                            if (playersheild >= 50)
                            {
                                cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                if (playersheild >= 25)
                                {
                                    playersheild = playersheild + 25;
                                    if (playersheild > 50)
                                    {
                                        playersheild = 50;


                                    }
                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                }
                            }
                            break;



                        }
                        cout << "          You have " << playersheild << " Sheild" << endl;
                        break;
                        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    case 16:
                        cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
                        cin >> selectslot2;
                        switch (selectslot2)
                        {
                        case 1:
                            if (playersheild >= 50)
                            {
                                cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                playersheild = playersheild + 25;
                                if (playersheild > 50)
                                {
                                    playersheild = 50;


                                }
                                storeMedsValue = playerstorage[selectslot - 1].second;
                                playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                            }
                            break;

                        case 2:
                            if (playersheild >= 50)
                            {
                                cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                if (playersheild >= 25)
                                {
                                    playersheild = playersheild + 25;
                                    if (playersheild > 50)
                                    {
                                        playersheild = 50;


                                    }
                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                }
                            }
                            break;



                        }
                        cout << "          You have " << playersheild << " Sheild" << endl;
                        break;
                        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    case 17:
                        cout << "          Enter 1 to use your one mini";
                        cin >> selectslot;
                        if (playersheild > 50)
                        {
                            cout << "          Can't use a mini!" << endl;
                            break;
                        }
                        else
                        {
                            playersheild = playersheild + 25;
                            if (playersheild > 50)
                            {
                                playersheild = 50;
                            }
                            playerstorage[selectslot - 1].first = "Empty";
                            playerstorage[selectslot - 1].second = -1;
                            cout << "          You have " << playersheild << " Sheild" << endl;
                            break;
                        }
                        break;


                    }


                }

                std::cout << "          Your loadout is  " << std::endl;


                for (int i = 0; i < 4; i++)
                {
                    std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                }


                


            }


            if (pushHoe == "w" || pushHoe == "w")
            {

                std::cout << "          walking around the map... Press w to continue or s to start camping" << std::endl;
                std::cin >> pushHoe;
                if (pushHoe == "s")
                {
                    canCamp = rand() % 5;
                    if (canCamp == 1 || canCamp == 2)
                    {
                        std::cout << "          You can't camp here!, enter w to continue" << std::endl;
                        std::cin >> pushHoe;

                    }
                    else
                    {
                        pushHoe = "s";
                        std::cout << "         You found a perfect " << campspots[rand() % 6] << " to camp in... enter 1 to continue" << std::endl;
                        cin >> dumbInput;
                    }
                }

            }



            std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
            if (pushHoe == "s" || pushHoe == "s")
            {
                campMax = rand() % 7 + 1;
                for (int i = campMax; i > 0; i--)
                {
                    std::cout << "          Sitting around hidden like a little kitty cat... " << std::endl;
                    cout << " " << endl;
                    std::cout << "          You have to go to zone in " << i << " mins, enter w to stop camping or s to continue" << std::endl;
                   
                    std::cin >> pushHoe;

                    if (pushHoe == "w")
                    {

                        break;
                    }

                    std::cout << "-----------------------------------------------------" << std::endl;

                    randForEncounter = rand() % 10 + 1;

                    if (randForEncounter == 1 || randForEncounter == 2)
                    {
                        Fightingszn = true;
                        if (pushHoe == "w")
                        {
                            cout << "          Oh no!  you have been spotted leaving your camping spot! Enter 1 to continue! " << endl;
                        }
                        else
                        {
                            cout << "          Oh no! You have been spotted in you hiding spot! Enter 1 to continue!" << endl;
                        }

                        std::cin >> dumbInput;
                        Fightingszn = true;
                        break;
                    }


                    order66();
                    if (lastFight == true)
                    {
                        break;
                    }
                    std::cout << "" << std::endl;


                }

                if (Fightingszn == true)
                {
                    break;
                }

                if (lastFight == true)
                {
                    break;
                }

                if (pushHoe == "w")
                {
                    std::cout << "----------------------------------------------" << std::endl;
                    std::cout << "" << std::endl;
                    std::cout << "" << std::endl;
                    std::cout << "          Leaving the campsite...Enter w to continue" << std::endl;
                    std::cin >> pushHoe;
                    std::cout << "---------------------------------------------------------------------------" << std::endl;
                }
                cout << "         Enter 1 to not break the game:" << endl;
                pushHoe = "w";
                cin>> dumbInput;

            }



            randForEncounter = rand() % 10 + 1; // decides if you gonna be kicked to fight loop

            if (randForEncounter > 1 && randForEncounter < 6)
            {
               
                    std::cout << "          You see a distant child in the distance... w key to push or s to not..." << std::endl;
                    std::cin >> microwaveBenny;
                    if (microwaveBenny == "w")
                    {
                        std::cout << "____________________________________________________________________________________________________________" << std::endl;
                        break;
                    }
                    else
                    {
                        gtfo = rand() % 3 + 1;
                        if (gtfo != 2)
                        {
                            std::cout << "          You stay away and watch them leave....Enter 1 to continue" << std::endl;
                            cin >> dumbInput;
                            std::cout << "___________________________________________________________________________________________________________________________" << std::endl;
                            gtfo = 0;

                        }
                        else
                        {
                            cout << "          They found you first...enter 1 to continue" << endl;
                            cin >> dumbInput;
                            gtfo = 0;
                            cout << "----------------------------------------------------------------------------------------------------------------------------------------" << endl;
                            break;
                        }
                    
                    }



            }

            order66();
            if (lastFight == true)
            {

                break;
            }

            pushHoe = "w";

        }



            if (lastFight == true)
            {

                hansolo = rand() % 2 + 1;


                bottName = names[rand() % 10];
                range = rand() % 100;

                for (int i = 0; i < 3; i++)
                {
                    Botstorage[i].first = Cheststorage[rand() % 10].first;
                    Botstorage[i].second = Cheststorage[rand() % 10].second;
                }
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                playerHealth = playerHealth + playersheild;
                std::cout << "          You have found the final enemy: Dwayne_The_Rock_Johnson!" << std::endl;
                std::cout << " " << std::endl;
                std::cout << " " << std::endl;
                std::cout << " " << std::endl;
                range = 3;
                std::cout << "          They are " << range << " meters away!" << std::endl;
                std::cout << "" << std::endl;
                std::cout << "" << std::endl;
                std::cout << "          Their Load out is" << std::endl;
                for (int i = 0; i < 3; i++)
                {
                    std::cout << i + 1 << ":" << Botstorage[i].first << " " << std::endl;
                }
                std::cout << "" << std::endl;
                cout << "--------------------------------------------------------------------------" << endl;

                pushHoe = "w";

                std::cout << "          Your Load out is" << std::endl;
                for (int i = 0; i < 4; i++)
                {
                    std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                }
                std::cout << " " << std::endl;

                botHealth = rand() % 200 + 150;

                if (botHealth > 200)
                {
                    botHealth = 200;
                }
             




                while (botHealth < 100000 && gtfo != 1)
                {
                    


                    storeHealth2 = playerHealth;
                    std::cout << "          The enemy has " << botHealth << " Health" << std::endl;
                    storeHealth = botHealth;
                    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
                    std::cout << "          Prepare to fight! Input the slot number of the wepean or item you would like to use!" << std::endl;
                    std::cin >> pewPew;
                    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;


                    range = range + 20;
                    std::cout << "User has shot " << playerstorage[pewPew - 1].first << " Press 1 to see dammage" << std::endl;
                    std::cin >> dumbInput;
                    switch (playerstorage[pewPew - 1].second)
                    {
                    case 0:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }

                        else
                        {
                            botHealth = botHealth - randForPump1();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << " Dammage" << std::endl;
                        }

                        break;


                    case 1:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump2();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 2:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump3();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 3:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump4();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 4:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump4();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 5:
                        botHealth = botHealth - randForAR1();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 6:
                        botHealth = botHealth - randForAR2();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 7:
                        botHealth = botHealth - randForAR3();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 8:
                        botHealth = botHealth - randForAR4();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 9:
                        botHealth = botHealth - randForAR5();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;





                    }

                    std::cout << "---------------------------------------------------------------------------------" << std::endl;
                    std::cout << "          Enter 1 to continue!" << std::endl;
                    std::cin >> dumbInput;


                    pewPew = rand() % 3;
                    std::cout << "          The enemy has decided to use their " << Botstorage[pewPew].first << std::endl;

                    std::cout << "----------------------------------------------------------------" << std::endl;
                    std::cout << "          Enter 1 to see the Dammage!" << std::endl;
                    std::cin >> dumbInput;


                    std::cout << " " << std::endl;
                    switch (Botstorage[pewPew].second)

                    {
                    case 0:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump1();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 1:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump2();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 2:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump3();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 3:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump4();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 4:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump4();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 5:
                        playerHealth = playerHealth - randForAR1();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 6:
                        playerHealth = playerHealth - randForAR2();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 7:
                        playerHealth = playerHealth - randForAR3();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 8:
                        playerHealth = playerHealth - randForAR4();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 9:
                        playerHealth = playerHealth - randForAR5();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;




                    }


                    std::cout << "  " << std::endl;
                    std::cout << "  " << std::endl;



                    if (hansolo == 1)
                    {
                        std::cout << "          The enemy has shot first!" << std::endl;

                        if (playerHealth <= 0 && botHealth <= 0)
                        {
                            std::cout << "          You have died:( enter 1 to exit" << std::endl;
                            cin >> dumbInput;
                            exit(EXIT_FAILURE);
                        }
                      
                           
                        

                    }
                    else
                    {

                        std::cout << "          The player shot first!" << std::endl;

                        if (playerHealth <= 0 && botHealth <= 0)
                        {
                            std::cout << "        Victory Royale!!!" << std::endl;
                            cout << "         Enter 1 to claim your W and exit the game" << endl;
                            cin >> dumbInput;
                            exit(EXIT_FAILURE);
                          

                        }
                        

                    }

                    if (botHealth <= 0)
                    {
                        std::cout << "        Victory Royale!!!" << std::endl;
                        cout << "         Enter 1 to claim your W and exit the game" << endl;
                        cin >> dumbInput;
                        exit(EXIT_FAILURE);
                    }

                    if (playerHealth <= 0)
                    {
                        std::cout << "          You have died:( enter 1 to exit" << std::endl;
                        cin >> dumbInput;
                        exit(EXIT_FAILURE);
                    }
                  
                    if (playerHealth - 100 <= 0)
                    {
                        std::cout << "          You have 0 sheild and " << playerHealth << " HP" << std::endl;
                    }
                    else
                    {
                        std::cout << "          You have" << playerHealth - 100 << " sheild and 100 HP" << std::endl;
                    }


                    std::cout << "------------------------------------------------------------------" << std::endl;
                    std::cout << "          Enter 1 to continue!" << std::endl;
                    std::cin >> dumbInput;





                }





            }



            hansolo = rand() % 2 + 1;


            bottName = names[rand() % 10];
            range = rand() % 100;

            for (int i = 0; i < 3; i++)
            {
                Botstorage[i].first = Cheststorage[rand() % 10].first;
                Botstorage[i].second = Cheststorage[rand() % 10].second;
            }
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            playerHealth = playerHealth + playersheild;
            std::cout << "          You have found " << bottName << "!" << std::endl;
            std::cout << " " << std::endl;
            std::cout << " " << std::endl;
            std::cout << " " << std::endl;
            std::cout << "          They are " << range << " meters away!" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "" << std::endl;
            std::cout << "          Their Load out is" << std::endl;
            for (int i = 0; i < 3; i++)
            {
                std::cout << i + 1 << ":" << Botstorage[i].first << " " << std::endl;
            }
            std::cout << "" << std::endl;
            cout << "--------------------------------------------------------------------------" << endl;

            pushHoe = "w";

            std::cout << "          Your Load out is" << std::endl;
            for (int i = 0; i < 4; i++)
            {
                std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
            }
            std::cout << " " << std::endl;

            botHealth = rand() % 200 + 150;

            if (botHealth > 200)
            {
                botHealth = 200;
            }
            std::cout << "          Enter 's' to try to get away or 'w' to fight!" << std::endl;
            std::cin >> pushHoe;



            if (pushHoe == "s")

            {
                pushHoe == "w";
                CanRunChecker = rand() % 10;
                if (CanRunChecker > 5)
                {
                    gtfo = 1;
                    cout << "          You got away!" << endl;
                }
                else
                {
                    std::cout << "          You could not get away!" << std::endl;
                }
            }





            while (botHealth < 100000 && gtfo != 1)
            {
                if (botHealth <= 0)
                {
                    std::cout << "          You have killed "<<bottName<<"! Enter w to continue" << std::endl;
                    std::cin >> pushHoe;
                    std::cout << "---------------------------------------------------------------" << std::endl;
                    std::cin >> pushHoe;
                    std::cout << "-------------------------------------------------------------------" << std::endl;
                    std::cout << "          The loot is:" << std::endl;
                    for (int i = 0; i < 3; i++)
                    {
                        std::cout << i + 1 << ":" << Botstorage[i].first << " " << std::endl;
                    }
                    std::cout << "-------------------------------------------------------------------------" << std::endl;

                    std::cout << "          Your loot is" << std::endl;
                    for (int i = 0; i < 4; i++)
                    {

                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }
                    std::cout << "-------------------------------------------------------------------------" << std::endl;

                    std::cout << "          If you would like to take loot, input your slot number and the loot number!" << std::endl;

                    std::cin >> pickup1 >> pickup2;
                    std::cout << "-------------------------------------------------------------------------" << std::endl;
                    playerstorage[pickup1 - 1].first = Botstorage[pickup2 - 1].first;
                    playerstorage[pickup1 - 1].second = Cheststorage[pickup2 - 1].second;
                    std::cout << "-------------------------------------------------------------------------" << std::endl;


                    std::cout << "          Your loot is" << std::endl;
                    for (int i = 0; i < 3; i++)
                    {

                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }

                    randMeds = rand() % 3 + 1;
                  
                    switch (randMeds)
                    {
                    case 1:
                        std::cout << "          Your loadout is  " << std::endl;

                        for (int i = 0; i < 4; i++)
                        {
                            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                        }
                        cout << "           You found 4 minis, where would you like to put them? (max of 4 can be held)" << endl;
                        cin >> selectslot;

                        playerstorage[selectslot - 1].first = Cheststorage[14].first;
                        playerstorage[selectslot - 1].second = Cheststorage[14].second;


                        std::cout << "          Your loadout is  " << std::endl;

                        for (int i = 0; i < 4; i++)
                        {
                            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                        }
                        break;

                    case 2:
                        std::cout << "          Your loadout is  " << std::endl;

                        for (int i = 0; i < 4; i++)
                        {
                            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                        }
                        cout << "           You found 2 bigPots, where would you like to put them? (max of 2 can be held in a single slot)" << endl;
                        cin >> selectslot;

                        playerstorage[selectslot - 1].first = Cheststorage[11].first;
                        playerstorage[selectslot - 1].second = Cheststorage[11].second;


                        std::cout << "          Your loadout is  " << std::endl;

                        for (int i = 0; i < 4; i++)
                        {
                            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                        }
                        break;


                    case 3:

                        cout << "         You found 0 meds :( Good luck" << endl;
                        break;

                    }
                    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;



                    cout << "           Would you like to use an item? " << endl;
                    cin >> yesOrNo;


                    if (yesOrNo == "yes")
                    {
                        std::cout << "          Your loadout is  " << std::endl;

                        for (int i = 0; i < 4; i++)
                        {
                            std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                        }
                        std::cout << "          Please enter the items slot number" << endl;
                        std::cin >> selectslot >> selectslot2;
                        if (playerstorage[selectslot - 1].second < 10 || playerstorage[selectslot - 1].first == "Empty")
                        {
                            std::cout << "          Please enter a valid item slot:" << endl;
                            std::cin >> selectslot;
                        }




                        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



                        switch (playerstorage[selectslot - 1].second)//Geneva convention??? More like Gneva suggestion :)))))))))))
                        {
                        case 11:
                            std::cout << "          Please enter how many" << playerstorage[selectslot - 1].first << "'s you would like to use         " << endl;
                            std::cin >> selectslot2;
                            switch (selectslot2)
                            {
                            case 1:


                                if (playersheild >= 100)
                                {
                                    std::cout << "          A big pot has no effect!       " << endl;
                                    break;
                                }
                                playersheild = playersheild + 50;
                                if (playersheild > 100)
                                {
                                    playersheild = 100;
                                }
                                storeMedsValue = playerstorage[selectslot - 1].second;
                                playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;

                                break;


                            case 2:

                                if (playersheild >= 100)
                                {
                                    cout << "          A big pot has no effect!       " << endl;
                                    break;
                                }

                                if (playersheild >= 50)
                                {
                                    playersheild = playersheild + 50;
                                    if (playersheild > 100)
                                    {
                                        playersheild = 100;
                                    }
                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                    break;
                                }
                                else
                                {
                                    if (Cheststorage[playerstorage[selectslot - 1].second + 1].first == "Empty")
                                    {
                                        cout << "          You only have 1 big pot!" << endl;
                                        playersheild = playersheild + 50;

                                        storeMedsValue = playerstorage[selectslot - 1].second;
                                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                        break;
                                    }
                                    else
                                    {
                                        playersheild = playersheild + 100;
                                        if (playersheild > 100)
                                        {
                                            playersheild = 100;
                                            storeMedsValue = playerstorage[selectslot - 1].second;
                                            playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                            playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                            break;

                                        }
                                    }
                                }



                            }
                            std::cout << "          You have " << playersheild << " Sheild" << endl;
                            break;
                            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                        case 12:
                            std::cout << "Enter 1 to use your bigpot         " << endl;
                            std::cin >> selectslot2;
                            if (playersheild > 100)
                            {
                                std::cout << "          Can not use a big pot!" << endl;
                                break;
                            }
                            else
                            {
                                playersheild = playersheild + 50;
                                if (playersheild > 100)
                                {
                                    playersheild = 100;

                                }
                                playerstorage[selectslot - 1].first = "Empty";
                                playerstorage[selectslot - 1].second = -1;
                            }
                            std::cout << "          You have" << playersheild << " Sheild" << endl;
                            break;
                            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        case 14:
                            std::cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
                            std::cin >> selectslot2;
                            switch (selectslot2)
                            {
                            case 1:
                                if (playersheild >= 50)
                                {
                                    std::cout << "          Can't use a mini!" << endl;
                                    break;
                                }
                                else
                                {
                                    playersheild = playersheild + 25;
                                    if (playersheild > 50)
                                    {
                                        playersheild = 50;


                                    }

                                }
                                break;

                            case 2:
                                if (playersheild >= 50)
                                {
                                    std::cout << "          Can't use a mini!" << endl;
                                    break;
                                }
                                else
                                {
                                    if (playersheild >= 25)
                                    {
                                        playersheild = playersheild + 25;
                                        if (playersheild > 50)
                                        {
                                            playersheild = 50;


                                        }
                                        storeMedsValue = playerstorage[selectslot - 1].second;
                                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                    }
                                    else
                                    {
                                        playersheild = 50;
                                    }
                                }
                                break;



                            }
                            cout << "          You have " << playersheild << " Sheild" << endl;
                            break;
                            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        case 15:
                            cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
                            cin >> selectslot2;
                            switch (selectslot2)
                            {
                            case 1:
                                if (playersheild >= 50)
                                {
                                    cout << "          Can't use a mini!" << endl;
                                    break;
                                }
                                else
                                {
                                    playersheild = playersheild + 25;
                                    if (playersheild > 50)
                                    {
                                        playersheild = 50;


                                    }
                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 1].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 1].first;
                                }
                                break;

                            case 2:
                                if (playersheild >= 50)
                                {
                                    cout << "          Can't use a mini!" << endl;
                                    break;
                                }
                                else
                                {
                                    if (playersheild >= 25)
                                    {
                                        playersheild = playersheild + 25;
                                        if (playersheild > 50)
                                        {
                                            playersheild = 50;


                                        }
                                        storeMedsValue = playerstorage[selectslot - 1].second;
                                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                    }
                                }
                                break;



                            }
                            cout << "          You have " << playersheild << " Sheild" << endl;
                            break;
                            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        case 16:
                            cout << "         Enter 1 or 2 to chose how many mini's you would like to use" << endl;
                            cin >> selectslot2;
                            switch (selectslot2)
                            {
                            case 1:
                                if (playersheild >= 50)
                                {
                                    cout << "          Can't use a mini!" << endl;
                                    break;
                                }
                                else
                                {
                                    playersheild = playersheild + 25;
                                    if (playersheild > 50)
                                    {
                                        playersheild = 50;


                                    }
                                    storeMedsValue = playerstorage[selectslot - 1].second;
                                    playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                    playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                }
                                break;

                            case 2:
                                if (playersheild >= 50)
                                {
                                    cout << "          Can't use a mini!" << endl;
                                    break;
                                }
                                else
                                {
                                    if (playersheild >= 25)
                                    {
                                        playersheild = playersheild + 25;
                                        if (playersheild > 50)
                                        {
                                            playersheild = 50;


                                        }
                                        storeMedsValue = playerstorage[selectslot - 1].second;
                                        playerstorage[selectslot - 1].second = Cheststorage[storeMedsValue + 2].second;
                                        playerstorage[selectslot - 1].first = Cheststorage[storeMedsValue + 2].first;
                                    }
                                }
                                break;



                            }
                            cout << "          You have " << playersheild << " Sheild" << endl;
                            break;
                            /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                        case 17:
                            cout << "          Enter 1 to use your one mini";
                            cin >> selectslot;
                            if (playersheild > 50)
                            {
                                cout << "          Can't use a mini!" << endl;
                                break;
                            }
                            else
                            {
                                playersheild = playersheild + 25;
                                if (playersheild > 50)
                                {
                                    playersheild = 50;
                                }
                                playerstorage[selectslot - 1].first = "Empty";
                                playerstorage[selectslot - 1].second = -1;
                                cout << "          You have " << playersheild << " Sheild" << endl;
                                break;
                            }
                            break;


                        }


                    }

                    std::cout << "          Your loadout is  " << std::endl;


                    for (int i = 0; i < 4; i++)
                    {
                        std::cout << i + 1 << ":" << playerstorage[i].first << " " << std::endl;
                    }







                    std::cout << "          You found a med kit! Enter 1 to use it or 2 to drop it!" << std::endl;
                    std::cin >> dumbInput;
                    if (dumbInput == 1)
                    {
                        playerHealth = 100;
                    }
                    std::cout << "          You have " << playerHealth << " hp and " << playersheild << " sheild" << std::endl;



                    break;
                }







                    storeHealth2 = playerHealth;
                    std::cout << "          The enemy has " << botHealth << " Health" << std::endl;
                    storeHealth = botHealth;
                    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
                    std::cout << "          Prepare to fight! Input the slot number of the wepean or item you would like to use!" << std::endl;
                    std::cin >> pewPew;
                    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;


                    range = range + 20;
                    std::cout << "User has shot " << playerstorage[pewPew - 1].first << " Press 1 to see dammage" << std::endl;
                    std::cin >> dumbInput;
                    switch (playerstorage[pewPew - 1].second)
                    {
                    case 0:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }

                        else
                        {
                            botHealth = botHealth - randForPump1();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << " Dammage" << std::endl;
                        }

                        break;


                    case 1:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump2();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 2:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump3();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 3:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump4();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 4:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            botHealth = botHealth - randForPump4();
                            std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;
                        }
                        break;
                    case 5:
                        botHealth = botHealth - randForAR1();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 6:
                        botHealth = botHealth - randForAR2();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 7:
                        botHealth = botHealth - randForAR3();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 8:
                        botHealth = botHealth - randForAR4();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;
                    case 9:
                        botHealth = botHealth - randForAR5();
                        std::cout << "BANG! You  hit them for " << storeHealth - botHealth << "Dammage" << std::endl;

                        break;





                    }

                    std::cout << "---------------------------------------------------------------------------------" << std::endl;
                    std::cout << "          Enter 1 to continue!" << std::endl;
                    std::cin >> dumbInput;


                    pewPew = rand() % 3;
                    std::cout << "          The enemy has decided to use their " << Botstorage[pewPew].first << std::endl;

                    std::cout << "----------------------------------------------------------------" << std::endl;
                    std::cout << "          Enter 1 to see the Dammage!" << std::endl;
                    std::cin >> dumbInput;


                    std::cout << " " << std::endl;
                    switch (Botstorage[pewPew].second)

                    {
                    case 0:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump1();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 1:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump2();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 2:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump3();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 3:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump4();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 4:
                        if (range > 60)
                        {
                            std::cout << "Too far away for shotGun!" << std::endl;
                            break;
                        }
                        else
                        {
                            playerHealth = playerHealth - randForPump4();
                            std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;
                        }
                        break;
                    case 5:
                        playerHealth = playerHealth - randForAR1();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 6:
                        playerHealth = playerHealth - randForAR2();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 7:
                        playerHealth = playerHealth - randForAR3();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 8:
                        playerHealth = playerHealth - randForAR4();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;
                    case 9:
                        playerHealth = playerHealth - randForAR5();
                        std::cout << "You were hit for " << storeHealth2 - playerHealth << " Dammage" << std::endl;

                        break;




                    }


                    std::cout << "  " << std::endl;
                    std::cout << "  " << std::endl;

                    

                    if (hansolo == 1)
                    {
                        std::cout << "          The enemy has shot first!" << std::endl;

                        if (playerHealth <= 0 && botHealth <= 0)
                        {
                            std::cout << "          You have died:( enter 1 to exit" << std::endl;
                            cin >> dumbInput;
                            exit(EXIT_FAILURE);
                        }
                        else
                        {
                            if (playerHealth <= 0)
                            {
                                std::cout << "          You have died:( enter 1 to continue" << std::endl;
                                cin >> dumbInput;
                                exit(EXIT_FAILURE);
                            }
                        }

                    }
                    else
                    {

                        std::cout << "          The player shot first!" << std::endl;

                        if (playerHealth <= 0 && botHealth <= 0)
                        {
                            std::cout << "        You killed them!" << std::endl; 
                                playerHealth = storeHealth2;

                        }
                        else
                        {
                            if (playerHealth <= 0)
                            {
                                std::cout << "          You have died:( enter 1 to exit program" << std::endl;
                                cin >> dumbInput;

                                exit(EXIT_FAILURE);
                            }
                        }

                    }

                    if (playerHealth - 100 <= 0)
                    {
                        std::cout << "          You have 0 sheild and " << playerHealth << " HP" << std::endl;
                    }
                    else
                    {
                        std::cout << "          You have" << playerHealth - 100 << " sheild and 100 HP" << std::endl;
                    }


                    std::cout << "------------------------------------------------------------------" << std::endl;
                    std::cout << "          Enter 1 to continue!" << std::endl;
                    std::cin >> dumbInput;




            }




            }

      
    


    return 0;

}



