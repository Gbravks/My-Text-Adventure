#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	


	std::cout << "You wake up in a dimly lit and musty old basement, with its worn-out wooden beams and cracked stone walls, evoking a sense of eerie nostalgia and a mysterious atmosphere shrouded in darkness." << std::endl;
	std::cout << "You notice a door nestled inconspicuously amidst the decaying walls, concealed by layers of grime and neglect. It stands solitary and weathered, its once-vibrant paint long faded, leaving behind a tapestry of rust clinging to its surface. The hinges creak with the weight of time as the door reluctantly opens, revealing a hidden portal to a forgotten world within the depths of the ancient basement." << std::endl;
	std::cout << "You enter through the door, where time seems to be suspended." << std::endl;
	std::cout << "Welcome to the Whispers of the Enigmatic Maze!" << std::endl;
	std::cout << "Your mission is to find the hidden treasure within and confront the enigmatic creature that has haunted your every thought. Its presence looms in the shadows, its form shrouded in mystery and danger." << std::endl;

	bool hasArtifact = false;
	int playerHealth = 100;

	while (true) {
		std::cout << "------------------------------------------" << std::endl;

		int encounter = std::rand() % 3;


		if (encounter == 0) {
			std::cout << "You were attacked by a mysterious creature." << std::endl;
			std::cout << "What do you do?" << std::endl;
			std::cout << "1" << "Fight" << std::endl;
			std::cout << "2" << "Look for a weapon" << std::endl;
			int choice;
			std::cin >> choice;

			if (choice == 0) {
				bool success = std::rand() % 3;

				if (success) {
					std::cout << "You manage to escape the room safely!" << std::endl;
				}
				else {
					std::cout << "The creature devours every last piece of your body. You died." << std::endl;
					std::cout << "Game over!" << std::endl;
					break;
				}
			}
			else {
				std::cout << "You find a weapon, slay the monster, and escape the room safely." << std::endl;
			}
		}
		else if (encounter == 1) {
			std::cout << "You were suffocated by nitrogen dioxide gas and attacked by a mysterious creature." << std::endl;
			std::cout << "What do you do?" << std::endl;
			std::cout << "1" << "Look for a gas mask inside the facility and fight" << std::endl;
			std::cout << "2" << "Fight and escape the room" << std::endl;
			int choice;
			std::cin >> choice;

			if (choice == 1) {
				bool success = std::rand() % 3;

				if (success) {
					std::cout << "You manage to escape the Research Facility safely!" << std::endl;
				}
				else {
					std::cout << "The creature devours every last piece of your body. You died." << std::endl;
					std::cout << "Game over!" << std::endl;
                    break;
                }
            }
            else {
                std::cout << "You fight off the creature and escape the room safely." << std::endl;
            }
        }
        else if (encounter == 2) {
            std::cout << "You come across a mysterious door blocking your path." << std::endl;
            int choice;
            std::cin >> choice;

            if (hasArtifact) {
                std::cout << "You have a key! You unlock the door and continue on." << std::endl;
            }
            else {
                std::cout << "The door is locked. You need to find a key to proceed." << std::endl;
            }
            if (choice == 2) {
                bool success = std::rand() % 3;
        }
        else {
            std::cout << "Congratulations! You found the hidden treasure!" << std::endl;
            std::cout << "You win!" << std::endl;
            break;
        }

        playerHealth -= 10;
        std::cout << "Your health: " << playerHealth << std::endl;

        if (playerHealth <= 0); {
            std::cout << "Your health has reached zero. You collapse and cannot continue." << std::endl;
            std::cout << "Game over!" << std::endl;
            break;
        }

        bool foundKey = std::rand() % 2;
        if (foundKey) {
            std::cout << "You found a key!" << std::endl;
            hasArtifact = true;
        }
    }

    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}

    }