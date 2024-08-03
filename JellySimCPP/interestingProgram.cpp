//pull in standard input output lib
#include <iostream>

//protoype functions 

//declare function to welcome user
void welcomeUser();

//declare function to display jelly name
std::string getJellyName();

//declare function to display jelly's name
void displayJellyName(std::string yourJellyName);

//declare function to play with jelly affecting happines
void play(std::string yourJellyName,int* ptrHappiness);

//declare function to feed jelly, reducing hunger
void feed(std::string yourJellyName,int* ptrHunger);

//declare function to clean jelly poop, making it clean
void cleanPoop(std::string yourJellyName,bool* ptrPooped);

//declare function to deter predators and make it safe
void deterPredators(std::string jyourJellyName, bool* ptrSafe);

//declare function to show jellys stats such as happiness, hunger, cleanliness, and safety
void showStatus(std::string yourJellyName, int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe, int day);

//declare function to update jelly stats daily
void dailyUpdate(int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe);

//start program

int main ()
{ //starting operator

    //create a variable to hold happiness 
    int happiness = 50;
    //declare happiness pointer
    int* ptrHappiness = &happiness;
    
    //create a variable to hold hunger 
    int hunger = 50;
    //declare a hunger pointer
    int* ptrHunger = &hunger;

    //create a variable for pooped
    bool pooped = true;
    //declare a pooped pointer
    bool* ptrPooped = &pooped;

    //create a variable for safe
    bool safe = false;
    //declare a safe pointer
    bool* ptrSafe = &safe;

    //create a variable for choice
    int choice;

    //create a variable for day counter
    int day = 1;

    //display title
    std::cout <<"\n\n *** Jellyfish Guardian: Ocean Adventures *** \n";

    //welcome user
    welcomeUser();

    //introduce new jellyfish friend

    //create variable for jelly's name
    std::string yourJellyName;

    //call function to get jelly's name
    yourJellyName = getJellyName();

    //show jelly's name
    displayJellyName(yourJellyName);

    //gameloop here

    do {
        //display jelly's stats
        showStatus(yourJellyName, ptrHappiness, ptrHunger, ptrPooped, ptrSafe, day);
        
        //display options to user
        std::cout << "\n1. Play with jelly.\n2. Feed jelly.\n3. Clean jelly poop.\n4. Shoo away turtles.\n5. End day.\n6. Leave game.\nEnter choice:" << std::endl;
        //read user's choice
        std::cin >> choice;

        //use switch for loop
        switch (choice) {
            
            //play with jelly
            case 1:
            play(yourJellyName, ptrHappiness);
            break;
            
            //feed jelly
            case 2:
            feed(yourJellyName, ptrHunger);
            break;
            
            //clean jelly poop
            case 3:
            cleanPoop(yourJellyName, ptrPooped);
            break;

            //deter predators of jelly
            case 4:
            deterPredators(yourJellyName, ptrSafe);
            break;

            //end the day and update stats
            case 5:
            dailyUpdate(ptrHappiness, ptrHunger, ptrPooped, ptrSafe);
            day++;
            std::cout << "A new day dawns... Day " << day << " begins!" << std::endl;
            break;

            //end game
            case 6:
            std::cout <<"The jellyfish has been released to the wild. Thank you! Game Over.";
            break;
            
            //in case of mistake
            default: 
            std::cout << " Invalid choice, enter a number between 1 and 6" << std::endl;
        }

    //exit option
    } while (choice != 6); 

    //return a value
    return 0;

} //ending scoping operator and program

//display welcome
void welcomeUser()
{
    std::cout <<"\n Thank you for visiting this corner of the ocean,\n ";
    std::cout <<"\n We always appreciate volunteers for jellyfish baby raising!\n ";
    std::cout <<"\n It's a harsh world for little jellys out there, \n ";
    std::cout <<"\n but once they get big enough we can properly release them!\n ";
}

//update happiness from play
void play(std::string yourJellyName, int* ptrHappiness)
{
    std::cout << yourJellyName << " is so happy when you play together! Plus 10 happiness points!\n\n"<<std::endl;
    //add ten points to happiness 
    *ptrHappiness += 10;
    std::cout << "\nHappiness: "<< *ptrHappiness<< std::endl;
}

//update hunger from feeding
void feed(std::string yourJellyName,int* ptrHunger)
{
    std::cout << yourJellyName << " feels much better after a nice meal. Minus 10 hunger points!\n\n"<<std::endl;
    //reduce hunger by 10 points
    *ptrHunger -= 10;
    std::cout << "\nHunger: " << *ptrHunger<< std::endl;
}

//update poop status from cleaning
void cleanPoop(std::string yourJellyName,bool* ptrPooped)
{
    std::cout << yourJellyName << " has more room to float about happily in this little corner of the ocean.\n\n"<<std::endl;
    //declare poop to be cleaned
    *ptrPooped = false;
    std::cout << "\nClean: " << (*ptrPooped ? "No" : "Yes")<< std::endl;
}

//update safety from deterring predators
void deterPredators(std::string yourJellyName, bool* ptrSafe)
{
    std::cout << yourJellyName << " is relieved you told the bully turtles to pick on someone their own size.\n\n"<<std::endl;
    //declare jelly to be safe
    *ptrSafe = true;
    std::cout << "\nSafe: " << (*ptrSafe ? "Yes" : "No")  << std::endl;
}

//displays jelly stats
void showStatus(std::string yourJellyName, int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe, int day)
{
    std::cout << "Day: " << day << ", Happiness: "<< *ptrHappiness<< ", Hunger: " << *ptrHunger<< ", Clean: " << (*ptrPooped ? "No" : "Yes") << ", Safe: " << (*ptrSafe ? "Yes" : "No") << std::endl;
}

//get jelly name from user
std::string getJellyName()
{
    std::string yourJellyName;

    std::cout << "\n What will you name your Jelly?";

    getline (std::cin, yourJellyName);

    return yourJellyName;
}

//display jelly name
void displayJellyName (std::string yourJellyName)
{
    std::cout << "\n Congratulations on your new Jellyfish friend "<< yourJellyName << "!\n\n" << std::endl; 
}

//update jelly stats daily
void dailyUpdate(int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe)
{
    //decrease happiness
    *ptrHappiness -= 10;
    if (*ptrHappiness < 0) *ptrHappiness = 0;
    
    //increase hunger
    *ptrHunger += 20;
    if (*ptrHunger > 100) *ptrHunger = 100;
    
    //make environment dirty
    *ptrPooped = true;
    //make jelly unsafe
    *ptrSafe = false;
    
    std::cout << "A day has passed. Your jellyfish is getting hungry and needs attention!" << std::endl;
}