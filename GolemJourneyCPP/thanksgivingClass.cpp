// add our libraries

//input and output library
#include <iostream>
// string library
#include <string>


//prototype the function above main
//think of this as declaring a variable
//this function does not take or return data
void displayTitle();
void displayOutro(std::string myGolemName);

//this function returns data but does not take it
std::string get_GolemName ();

std::string sceneOne();

std::string sceneTwo();

//this function will take data but not reutrn it
void displayGolemName (std::string myGolemName);

void sceneThree(std::string userChoiceS1, std::string userChoiceS2);


//golem types
std::string golemType1 = "caring golem radiating warmth and compassion, always eager to help.";
std::string golemType2 = "wise guardian, protective yet enigmatic, offering sage advice.";
std::string golemType3 = "clever enigma, delighting in puzzles and wit, adding intrigue to your journey.";
std::string golemType4 = "mischievous prankster, always ready for playful tricks and brain-teasing surprises.";

std::string determineGolemType(std::string userChoiceS1, std::string userChoiceS2);

int main()
{ //this is the starting scope operator

    //call the display title function
    displayTitle();

    std::string userChoiceS1 = sceneOne();

    std:: string userChoiceS2 = sceneTwo();

    sceneThree(userChoiceS1, userChoiceS2);


    //create a string local variable to hold our username
    std::string myGolemName;

    //call our golem name function and put the return value into our username variable
    myGolemName = get_GolemName();

    //pass the username in our welcome
    displayGolemName(myGolemName);
    
    //display outro
    displayOutro(myGolemName);

    //this is our integer return type
    return 0;

} //this is the ending scope operator

//implement our functions
void displayTitle()
{

std::cout << "\n\n\t *** A Golem's Awakening ***" << std::endl;

// if you are not returning anything this return is optional
//return or the last scope operator ends the function
return;
}

void displayOutro(std::string myGolemName)
{
    std::cout << "\n*** Journey's End ***\n" << std::endl;
    std::cout << "With the dawn's first light, you and " << myGolemName << " reflect on your shared adventures." << std::endl;
    std::cout << "The bond you've formed is evident in " << myGolemName << "'s grateful gaze." << std::endl;
    std::cout << "Though this chapter closes, the memories with " << myGolemName << " will last a lifetime." << std::endl;
    std::cout << "\nThank you for playing 'A Golem's Awakening'." << std::endl;
}

//scene 1
std::string sceneOne() {
    std::cout << "\n\nWandering beneath the moonlit forest canopy, two intriguing objects beckon:" << std::endl;
    std::cout << "\n\n 1) A Bluebell: Delicate and serene, this flower symbolizes tranquility and peace." << std::endl;
    std::cout << "\n 2) A Raven Feather: Sharp and ebony, it carries an air of mystery and enchantment." << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

    //create a variable
    std::string userChoiceS1;
    
    //get user input for scene 1
    getline(std::cin, userChoiceS1);

    //evaluate results for scene 1
    if (userChoiceS1 =="1")
    {
       std::cout << "\n\n You picked up the Bluebell! Let's keep going!" << std::endl;
    }
    else if (userChoiceS1 == "2")
    {
    std::cout << "\n\n You picked up the Feather! Let's keep going!" << std::endl;
    }

    return userChoiceS1;
}

//scene 2
std::string sceneTwo()
{
    std::cout << "\n\nYour path takes you to a clearing, where two more captivating objects await:" << std::endl;
    std::cout << "\n\n 1) A Joyful Chocolate Truffle: A decadent treat known to evoke joy and delight." << std::endl;
    std::cout << "\n 2) An Ancient Riddle Tome: An aged book brimming with secrets and wisdom, filled with intriguing puzzles." << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

        //create a variable
    std::string userChoiceS2;
    
    //get user input for scene 2
    getline(std::cin, userChoiceS2);

    //evaluate results for scene 2
    if (userChoiceS2 =="1")
    {
        std::cout << "\n\n You picked up the Chocolate! What could be next?!" << std::endl;
    }
    else if (userChoiceS2 == "2")
    {
        std::cout << "\n\n You picked up the Tome! What could be next?!" << std::endl;
    }

    return userChoiceS2;
}

//scene 3
void sceneThree(std::string userChoiceS1, std::string userChoiceS2)
{
    std::cout << "\n\nVenturing further, you find a quaint, crooked hut nestled among the trees. Inside, Mabel, the whimsical witch, awaits your arrival." << std::endl;
    std::cout << "\n\n You throw your items into her cauldron." << std::endl;

    //determine golem type based on items chosen
    std::string golemType = determineGolemType(userChoiceS1, userChoiceS2);

    std::cout << "\n\n its a "<< golemType <<"!"<<std::endl;
}


//get golem name function
std::string get_GolemName()
{   
    //create a string var to hold golem name
    std::string myGolemName;
    //ask the user for their new golems name
    std::cout <<"\n\nWhat will you name your golem?"<< std::endl;
    //get the golems name
    getline(std::cin, myGolemName);
    //return the string data
    return myGolemName;

}

//congratulate user on new golem by name
void displayGolemName(std::string myGolemName)
{
    //display the golem's name
    std::cout <<" \n Congratulations on your new Golem Friend "<< myGolemName <<"!"<<std::endl;

}

std::string determineGolemType(std::string userChoiceS1, std::string userChoiceS2)
{
    if (userChoiceS1 == "1" && userChoiceS2 == "1")
    { return golemType1;
    }
    else if (userChoiceS1 == "2" && userChoiceS2 == "1")
    { return golemType2;
    }
        else if (userChoiceS1 == "1" && userChoiceS2 == "2")
    { return golemType3;
    }
        else if (userChoiceS1 == "2" && userChoiceS2 == "2")
    { return golemType4;
    }
    return "Unknown Golem Type, WHAT HAVE YOU DONE";
}