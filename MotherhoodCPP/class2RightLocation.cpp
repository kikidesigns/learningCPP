#include <iostream>
#include <string>

int main()
{
    // Display the title
    std::cout << "\n\n\t *** Bastet's Embrace: The Maternal Odyssey ***" << std::endl;

    // ACT 1

    // Introduction for Act 1
    std::cout << "\n Temple of Bastet \n Before you stands the resplendent Temple of Bastet, \n its alabaster walls gleaming in the dappled sunlight. \n \n The air is fragrant with the aroma of incense, and the \n"
                 "soft, cool breeze carries with it a sense of ancient wisdom. \n"
                 "At the altar, you choose:"
              << std::endl;

    // Display choices for Act 1
    std::cout << "\n\n 1) Offer a tribute to Bastet" << std::endl;
    std::cout << "\n\n 2) Explore the temple's hidden alcoves" << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

    // Create a variable to hold user input for Act 1
    std::string userChoiceS1;

    // Get user input for Act 1
    getline(std::cin, userChoiceS1);

    // Evaluate the results for Act 1
    if (userChoiceS1 == "1")
    {
        std::cout << "\n Placing your offering amidst the vibrant flowers and fragrant herbs, Her radiant gaze embraces you, filling you with a profound sense of maternal strength and grace, and the mysterious promise of a hidden destiny.";
    }
    else if (userChoiceS1 == "2")
    {
        std::cout << "\n The walls are adorned with hieroglyphics that seem to whisper secrets of motherhood. Immersed in the sacred knowledge, you feel a deep resonance with the legacy of mothers who came before you, strengthening your resolve, and a whisper of impending magic.";
    }

    // ACT 2

    // Introduction for Act 2
    std::cout << "\n Desert Oasis\n\nThe relentless sun casts long shadows upon the golden sands, making each step a mirage. In the distance, a shimmering oasis beckons like a mirage. Decide: "
              << std::endl;

    // Display choices for Act 2
    std::cout << "\n\n 1) Rest beneath the shade of ancient palms" << std::endl;
    std::cout << "\n\n 2) Venture further into the desert's heart" << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

    // Create a variable to hold user input for Act 2
    std::string userChoiceS2;

    // Get user input for Act 2
    getline(std::cin, userChoiceS2);

    // Evaluate the results for Act 2
    if (userChoiceS2 == "1")
    {
        std::cout << "\n Emerald fronds are rustling soothingly in the breeze, and you take a sip of the cool, crystalline waters. A profound sense of rejuvenation washes over you, as if the oasis itself has bestowed you with newfound vitality, and the mysterious allure of the desert's secrets tugs at your heart.";
    }
    else if (userChoiceS2 == "2")
    {
        std::cout << "\n Your footprints leave ripples in the sands like whispers of your journey. As you navigate the vast dunes, you stumble upon a wise desert sage. Their eyes hold the wisdom of ages, and their words resonate in your heart, bestowing you with the courage and insight needed to continue, and a sense of impending romance.";
    }

    // ACT 3

    // Introduction for Act 3
    std::cout << "\n Enchanted Forest\n\nWithin the depths of the whispering forest, a symphony of nature plays. The towering trees stand like ancient sentinels, their gnarled roots clutching at the moss-covered ground. The cries of a newborn creature lead you onward. Choose:"
              << std::endl;

    // Display choices for Act 3
    std::cout << "\n\n 1) Approach the source of the cries " << std::endl;
    std::cout << "\n\n 2) Stray deeper into the forest's heart" << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

    // Create a variable to hold user input for Act 3
    std::string userChoiceS3;

    // Get user input for Act 3
    getline(std::cin, userChoiceS3);

    // Evaluate the results for Act 3
    if (userChoiceS3 == "1")
    {
        std::cout << "\n You discover a baby animal, its fur soft and warm to the touch. As you cradle it in your arms, you feel a deep wellspring of love and patience awaken within you. Nurturing the creature, you learn that motherhood is a sacred bond, filled with tenderness and the joy of watching life flourish, and the hint of a future love fills your heart.";
    }
    else if (userChoiceS3 == "2")
    {
        std::cout << "\n You're guided by the luminescent fireflies that twinkle like stars in the verdant night. Their soft, ethereal glow guides your path to a mystical tree. Gazing upon the ancient tree, you are granted a vision of your future as a mother, and the path becomes clear, shining like a beacon in the depths of your soul. The realm beyond the door hints at a magical romance waiting to unfold.";
    }

    // ACT 4

    // Introduction for Act 4
    std::cout << "\n River of Transition\n\nThe tranquil river whispers secrets of transition. Its waters flow gently, reflecting the cerulean sky above. Decide:"
              << std::endl;

    // Display choices for Act 4
    std::cout << "\n\n 1) Wade through the river " << std::endl;
    std::cout << "\n\n 2) Cross the bridge" << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

    // Create a variable to hold user input for Act 4
    std::string userChoiceS4;

    // Get user input for Act 4
    getline(std::cin, userChoiceS4);

    // Evaluate the results for Act 4
    if (userChoiceS4 == "1")
    {
        std::cout << "\n The cool waters enveloping you like a maternal embrace, as you face the challenges of transition head-on. The river's embrace strengthens your resolve, teaching you the resilience needed for the journey ahead, and the whisper of secrets lingers in your thoughts.";
    }
    else if (userChoiceS4 == "2")
    {
        std::cout << "\n The graceful structure that seems to shimmer with wisdom. Each step leads you closer to the next phase of your journey. Guided by the bridge, you embrace the wisdom of those who walked this path before you, making your journey smoother and more purposeful, and the promise of a magical romance beckons from the horizon.";
    }

    // ACT 5

    // Introduction for Act 5
    std::cout << "\n Cave of Reflection\n\nWithin the shadowed cave, a mirror awaits. Its surface shimmers with an otherworldly light. Act:"
              << std::endl;

    // Display choices for Act 5
    std::cout << "\n\n 1) Gaze into the mirror " << std::endl;
    std::cout << "\n\n 2) Leave the cave " << std::endl;
    std::cout << "\n\n Please Enter (1 or 2):" << std::endl;

    // Create a variable to hold user input for Act 5
    std::string userChoiceS5;

    // Get user input for Act 5
    getline(std::cin, userChoiceS5);

    // Evaluate the results for Act 5
    if (userChoiceS5 == "1")
    {
        std::cout << "\n As you confront your inner demons, you emerge from the cave with newfound confidence and self-assurance, ready to embrace the role of motherhood with unwavering strength, and the enigmatic figure remains etched in your memory.";
    }
    else if (userChoiceS5 == "2")
    {
        std::cout << "\n Challenges may await, but your determination remains unshaken, and you continue your journey, undaunted by the shadows of doubt, with the anticipation of a magical romance lingering in your heart.";
    }

    // Outro
    std::cout << "\n\n\n\n\nYour journey from maiden to mother has been a tapestry woven with foreshadowed destiny, mystery, and the enchantment of love. Now, armed with the radiant knowledge, strength, and a hint of a romantic promise, \n you step into the next phase of your life, ready to embrace motherhood and the nurturing spirit of Bastet, as the world around you continues to pulse with vivid life, beauty, and the allure of a captivating and magical romance yet to unfold."
              << std::endl;

    // Return 0 to end this function, which will also end this program since there is only one function.
    return 0;
}
