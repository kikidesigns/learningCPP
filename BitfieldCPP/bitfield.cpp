//add libraries
#include <iostream>
#include <string>

//prototype functions
void displayIntro ();
void displayOutro ();

//return strings
std::string tutorial();
std::string levelOne ();
std::string levelTwo();
std::string levelThree();

//take in data
void addPlayerXP(int *playerXP, int amount);
void addPlayerSatoshis(int& rPlayerSatoshis, int amount);
void addAcres(int& rAcres, int amount);

void introNewArea(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone);
void buildInfrastructure(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone);
void introPest(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone);
void villageScene(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone);
void introRemedy(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone);
void receiveGift(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone);

//do not return or take in data
void plantCare();
void livestockCare();
void businessCare();
void eventCare();


//start program
int main()

{
    //create variables to hold stats
    int playerXP = 0;
    int* rPlayerXP = &playerXP;
    int playerSatoshis = 0;
    int acres = 1;

    //create variables to keep track of progress
    bool tutorialDone = false;
    bool lvlOneDone = false;
    bool lvlTwoDone = false;
    bool lvlThreeDone = false;

    //display intro
    displayIntro();

    //begin tutorial
    std::string chosenCrop = tutorial();
        introNewArea(tutorialDone, lvlOneDone, lvlTwoDone);
        
        buildInfrastructure(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +4 XP!";

        addPlayerXP(rPlayerXP, 4 );

        introPest(tutorialDone, lvlOneDone, lvlTwoDone);

        villageScene(tutorialDone, lvlOneDone, lvlTwoDone);

        introRemedy(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";
        
        addPlayerXP(rPlayerXP, 2 );

        receiveGift(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        plantCare();

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        tutorialDone = true;

    //begin level one

    std::string chosenLivestock = levelOne ();

        addPlayerSatoshis(playerSatoshis, 84659668);

        introNewArea(tutorialDone, lvlOneDone, lvlTwoDone);
        
        buildInfrastructure(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 4 );

        introPest(tutorialDone, lvlOneDone, lvlTwoDone);

        villageScene(tutorialDone, lvlOneDone, lvlTwoDone);

        introRemedy(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        receiveGift(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 2 );

        std::cout <<"\n +2 XP!";

        plantCare();

        addPlayerXP(rPlayerXP, 2 );

        std::cout <<"\n +2 XP!";

        livestockCare();

        addPlayerXP(rPlayerXP, 2 );

        std::cout <<"\n +2 XP!";

        lvlOneDone = true;

    //begin level two

    std::string chosenBusiness = levelTwo();

        addPlayerSatoshis(playerSatoshis, 169319336);

        introNewArea(tutorialDone, lvlOneDone, lvlTwoDone);
        
        buildInfrastructure(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        introPest(tutorialDone, lvlOneDone, lvlTwoDone);

        villageScene(tutorialDone, lvlOneDone, lvlTwoDone);

        introRemedy(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        receiveGift(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        plantCare();

        addPlayerXP(rPlayerXP, 1 );

        std::cout <<"\n +1 XP!";

        livestockCare();

        addPlayerXP(rPlayerXP, 1 );

        std::cout <<"\n +1 XP!";

        businessCare();

        addPlayerXP(rPlayerXP, 2 );
        
        std::cout <<"\n +2 XP!";

        lvlTwoDone = true;

    //begin level three

    std::string chosenEvent = levelThree();



        addPlayerSatoshis(playerSatoshis, 314184209);

        introNewArea(tutorialDone, lvlOneDone, lvlTwoDone);
        
        buildInfrastructure(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        introPest(tutorialDone, lvlOneDone, lvlTwoDone);

        villageScene(tutorialDone, lvlOneDone, lvlTwoDone);

        introRemedy(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +2 XP!";

        addPlayerXP(rPlayerXP, 2 );

        receiveGift(tutorialDone, lvlOneDone, lvlTwoDone);

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 1 );

        plantCare();

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 1 );

        livestockCare();

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 1 );

        businessCare();

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 1 );

        eventCare();

        std::cout <<"\n +1 XP!";

        addPlayerXP(rPlayerXP, 2 );
        std::cout << "Player XP: " << *rPlayerXP << std::endl;

        lvlThreeDone = true;
    //display outro
    displayOutro();

    //return 0 to end the program
    return 0;
}

//implement our functions


void displayIntro()
{
    std::cout << "\n\nWelcome to Bitfield, a land of endless possibilities!";
    std::cout << "\n\nThe sun is shining over the green hills as Farmer Joe greets you.";
    std::cout << "\n\nFarmer Joe: 'Ready to embark on your farming adventure? Let's go!'";
    std::cout << "\n\n *** BITFIELD *** ";

    std::cout << "Press Enter to continue..." << std::endl;
    //pause
    std::cin.get();
    
}

std::string tutorial()
{
    std::string chosenCrop;

    std::cout << "\n\n Farmer Joe: ";
    std::cout << "\n\n 'you will choose a crop, ";
    std::cout << "\n\n care for the crop ";
    std::cout << "\n\n and once you reach 10 XP points";
    std::cout << "\n\n 90 days will pass and your inventory ";
    std::cout << "\n\n will sell for profit.";

    std::cout << "\n\n Your options are Basil, Peppermint and Mugwort";
    std::cout << "\n\n Enter your choice'"<< std::endl;

    //get user input
    getline (std::cin, chosenCrop);
    //return string
    return chosenCrop;
}

//LVL1
std::string levelOne ()
{   
    
    std::string chosenLivestock;

    std::cout << "\n\nFarmer Joe: '1 acre of more space, & 84,659,668 in more satoshis '";

    std::cout << "\n\n congratulations on reach level 1";
    std::cout << "\n\n you will choose a livestock, ";
    std::cout << "\n\n care for the livestock ";
    std::cout << "\n\n and once you reach 20 XP points";
    std::cout << "\n\n 90 days will pass and your inventory ";
    std::cout << "\n\n will sell for profit.";

    std::cout << "\n\n Your options are chickens, quail and rabbits";
    std::cout << "\n\n Enter your choice"<< std::endl;
    
    //get user input
    getline(std::cin, chosenLivestock);
    //return string
    return chosenLivestock;
}

//LVL2
std::string levelTwo()
{

    std::string chosenBusiness;

    std::cout << "\n\nFarmer Joe: '2 acres of more space, & 169,319,336 in more satoshis '";
    
    std::cout << "\n\n congratulations on reaching level 2";
    std::cout << "\n\n you will choose a business, ";
    std::cout << "\n\n market the business ";
    std::cout << "\n\n and once you reach 30 XP points";
    std::cout << "\n\n 90 days will pass ";
    std::cout << "\n\n and you'll receive your gross revenue";

    std::cout << "\n\n Your options are horse boarding, campground and orchard";
    std::cout << "\n\n Enter your choice"<< std::endl;

    //get user input 

    getline(std::cin, chosenBusiness);

    //return string

    return chosenBusiness;
}

//LVL3
std::string levelThree()
{
    

    std::string chosenEvent;

    std::cout << "\n\n Farmer Joe: '4 acres of more space, & 314,184,209 in more satoshis' ";

    std::cout << "\n\n congratulations on reaching level 3";
    std::cout << "\n\n you will choose an event, ";
    std::cout << "\n\n minvite the people to the event ";
    std::cout << "\n\n and once you reach 40 XP points";
    std::cout << "\n\n you win";

    std::cout << "\n\n Your options are music festival, family activity day ,and rodeo";
    std::cout << "\n\n Enter your choice"<< std::endl;

    //get user input

    getline(std::cin, chosenEvent);

    //return string

    return chosenEvent;
}

//display outro
void displayOutro()
{
    std::cout<<"\n\nFarmer Joe: 'you win'";
    std::cout<<"\n\nthank you for playing";
    std::cout<<"\n\n *** BITFIELD *** ";
}
//add amount to player xp through pointer
void addPlayerXP(int* playerXP, int amount) {
    (*playerXP) += amount;
}
//add amount to player balance through reference
void addPlayerSatoshis(int& rPlayerSatoshis, int amount)
{
    rPlayerSatoshis += amount;
}
//add amount through reference
void addAcres(int& rAcres, int amount)
{
    rAcres += amount;
}
//new area intro depending on game progression status
void introNewArea(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone)
{
    std::cout << "\n\n";
    if (lvlTwoDone) {
        std::cout << "\n\n it's about time we go see the town lake...";
    } 
    else if (lvlOneDone){
        std::cout << "\n\n let's find the Chamber of Commerce!";
    }
    else if (tutorialDone){
        std::cout << "\n\n how didn't I notice the cafe last time I was in town?";
    } 
    else {
        std::cout << "\n\n there's a hardware store, and a plant nursery, perfect.";
    }

    std::cout << "Press Enter to continue..." << std::endl;

    std::cin.get();
}
//new task depending on game progression status
void buildInfrastructure(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone)
{
        std::cout << "\n\nit's time to build, ";
    if (lvlTwoDone) {
        std::cout << "\n\n let's hire a production company!";
    } 
    else if (lvlOneDone){
        std::cout << "\n\n a new website is waht the business needs!";
    }
    else if (tutorialDone){
        std::cout << "\n\n our livestock will need roofs after all.";
    } 
    else {
        std::cout << "\n\n let's a raise a garden bed.";
    }

    std::cout << "Press Enter to continue..." << std::endl;

    std::cin.get();

}

//new villain intro depending on game progression status
void introPest(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone)
{
        std::cout << "\n\n uh, oh...";
    if (lvlTwoDone) {
        std::cout << "\n\n clients have seen snakes in teh grass!";
    } 
    else if (lvlOneDone){
        std::cout << "\n\n a fox got one of your animals!";
    }
    else if (tutorialDone){
        std::cout << "\n\n there's aphids on your plants!";
    } 
    else {
        std::cout << "\n\n mosquitoes won't stop biting!";
    }

    std::cout << "Press Enter to continue..." << std::endl;

    std::cin.get();
}

//new interactions depending on game progression status
void villageScene(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone)
{
        std::cout << "\n\nvillage";
    if (lvlTwoDone) {
        std::cout << "\n\n";
    } 
    else if (lvlOneDone){
        std::cout << "\n\nvillagescene";
    }
    else if (tutorialDone){
        std::cout << "\n\nmorevillagescene";
    } 
    else {
        std::cout << "\n\nthemostvillagescene";
    }

    std::cout << "Press Enter to continue..." << std::endl;

    std::cin.get();
}

//remedy to pest depending on game progression status
void introRemedy(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone)
{
        std::cout << "\n\n";
    if (lvlTwoDone) {
        std::cout << "\n\n you need to buy a good mower!";
    } 
    else if (lvlOneDone){
        std::cout << "\n\n you need to buy a livestock guardian dog!";
    }
    else if (tutorialDone){
        std::cout << "\n\n you need to buy an order of ladybugs!";
    } 
    else {
        std::cout << "\n\n you need to buy mosquito repellant!";
    }
    std::cout << "Press Enter to continue..." << std::endl;

    std::cin.get();

}
//new gift from npc depending on game progression status
void receiveGift(bool tutorialDone, bool lvlOneDone, bool lvlTwoDone)
{
        std::cout << "\n\n";
    if (lvlTwoDone) {
        std::cout << "\n\n you received a free paved road!";
    } 
    else if (lvlOneDone){
        std::cout << "\n\n you have an offer to lease your land!";
    }
    else if (tutorialDone){
        std::cout << "\n\n you received a flock of peacocks!";
    } 
    else {
        std::cout << "\n\n you received an truckload of peppermint! seedlings!";
    }

    std::cout << "\n\nPress Enter to continue..." << std::endl;

    std::cin.get();

}
//display plant care
void plantCare()
{
    std::cout << "\n\nyou watered and fertilized the plants!";
    std::cout << "\n\nPress Enter to continue..." << std::endl;

    std::cin.get();
}
//display livestock care
void livestockCare()
{
    std::cout << "\n\nyou fed and watered the livestock";
    
    std::cout << "\n\nPress Enter to continue..." << std::endl;

    std::cin.get();
}
//display business care

void businessCare()
{
    std::cout << "\n\nyou updated the website";

    std::cout << "\n\nPress Enter to continue..." << std::endl;

    std::cin.get();

}
//display event care
void eventCare()
{
    std::cout << "\n\nyou invited all the townsfolk";

    std::cout << "\n\nPress Enter to continue..." << std::endl;

    std::cin.get();

}