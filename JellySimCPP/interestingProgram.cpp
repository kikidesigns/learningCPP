//pull in standard input output lib
#include <iostream>

//protoype functions 

void welcomeUser();
std::string getJellyName();
void displayJellyName(std::string yourJellyName);
void play(std::string yourJellyName,int* ptrHappiness);
void feed(std::string yourJellyName,int* ptrHunger);
void cleanPoop(std::string yourJellyName,bool* ptrPooped);
void deterPredators(std::string jyourJellyName, bool* ptrSafe);
void showStatus(std::string yourJellyName, int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe, int day);
void dailyUpdate(int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe);

int main ()
{
    int happiness = 50;
    int* ptrHappiness = &happiness;
    
    int hunger = 50;
    int* ptrHunger = &hunger;

    bool pooped = true;
    bool* ptrPooped = &pooped;

    bool safe = false;
    bool* ptrSafe = &safe;

    int choice;
    int day = 1;

    std::cout <<"\n\n *** Jellyfish Guardian: Ocean Adventures *** \n";
    welcomeUser();

    std::string yourJellyName;
    yourJellyName = getJellyName();
    displayJellyName(yourJellyName);

    do {
        showStatus(yourJellyName, ptrHappiness, ptrHunger, ptrPooped, ptrSafe, day);
        
        std::cout << "\n1. Play with jelly.\n2. Feed jelly.\n3. Clean jelly poop.\n4. Shoo away turtles.\n5. End day.\n6. Leave game.\nEnter choice:" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1:
                play(yourJellyName, ptrHappiness);
                break;
            case 2:
                feed(yourJellyName, ptrHunger);
                break;
            case 3:
                cleanPoop(yourJellyName, ptrPooped);
                break;
            case 4:
                deterPredators(yourJellyName, ptrSafe);
                break;
            case 5:
                dailyUpdate(ptrHappiness, ptrHunger, ptrPooped, ptrSafe);
                day++;
                std::cout << "A new day dawns... Day " << day << " begins!" << std::endl;
                break;
            case 6:
                std::cout <<"The jellyfish has been released to the wild. Thank you! Game Over.";
                break;
            default: 
                std::cout << " Invalid choice, enter a number between 1 and 6" << std::endl;
        }
    } while (choice != 6); 

    return 0;
}

// ... [keep all other functions as they were] ...

void showStatus(std::string yourJellyName, int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe, int day)
{
    std::cout << "Day: " << day << ", Happiness: "<< *ptrHappiness<< ", Hunger: " << *ptrHunger<< ", Clean: " << (*ptrPooped ? "No" : "Yes") << ", Safe: " << (*ptrSafe ? "Yes" : "No") << std::endl;
}

void dailyUpdate(int* ptrHappiness, int* ptrHunger, bool* ptrPooped, bool* ptrSafe)
{
    *ptrHappiness -= 10;
    if (*ptrHappiness < 0) *ptrHappiness = 0;
    
    *ptrHunger += 20;
    if (*ptrHunger > 100) *ptrHunger = 100;
    
    *ptrPooped = true;
    *ptrSafe = false;
    
    std::cout << "A day has passed. Your jellyfish is getting hungry and needs attention!" << std::endl;
}