#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

	//seed the number generator

	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	//Introduction

	std::cout << "You wake up in a dimly lit and musty old basement, with its worn-out wooden beams and cracked stone walls, evokes a sense of eerie nostalgia and a mysterious atmosphere shrouded in darkness." << std::endl;
	std::cout << "You notice a nestled inconspicuously amidst the decaying walls, concealed by layers of grime and neglect, stands a solitary, weathered door. Its once vibrant paint has long faded, leaving behind a tapestry of rust that clings to its surface. The hinges creak with the weight of time as the door reluctantly opens, revealing a hidden portal to a forgotten world within the depths of the ancient basement." << std::endl;
	std::cout << "You entered into the door where time seems to be suspended." << std::endl;
	std::cout << "Welcome to the Whispers of the Enigmatic Maze!" << std::endl;
	std::cout << "Your mission is to find the hidden treasure within and confront the enigmatic creature that has haunted your every thought. Its presence looms in the shadows, its form shrouded in mystery and danger.." << std::endl;


	// Variables to track player progress and choices
	bool hasArtifact = false;
	int playerHealth = 100;

	// Main game loop

	while (true) {
		std::cout << "------------------------------------------" << std::endl;

		// Randomly determine the encounter
		int encounter = std::rand() % 3;
		// Use the encounter value in your logic or output
		if (encounter == 0) {
			// Handle encounter 0
			std::cout << "Encounter 0 occurred!" << std::endl;
		}
		else if (encounter == 1) {
			// Handle encounter 1
			std::cout << "Encounter 1 occurred!" << std::endl;
		}
		else if (encounter == 2) {
			// Handle encounter 2
			std::cout << "Encounter 2 occurred!" << std::endl;
		}
	}

		if (encounter == 0) {

			// Obstacle: Home bar
			std::cout << "You where attack by a mysterious creature." << std::endl;
			std::cout << "What do you do?" << std::endl;
			std::cout << "1. Fight" << std::endl;
			std::cout << "2. Look for a weapon" << std::endl;
			int choice;
			std::cin >> choice;
		}
		if (choice == 1) {
			// Randomly determine success or failure

			bool success = std::rand() % 2;
		}
		if (success) {
			std::cout << "You manage to exit home bar safely!" << std::endl;
		}
		else {
			std::cout << "The creature will eat every last piece of your body. You died." << std::endl;
			std::cout << "Game over!" << std::endl;
			break;
		}

	}
else {
std::cout << "You find a bowie knife and you razed the monsters and escaped the room safely." << std::endl;
			 }
}
else if (encounter == 1) {

// Obstacle: Research Facility
std::cout << "You were suffocated by nitrogen dioxide gas and were attacked by a mysterious creatures." << std::endl;
std::cout << "What do you do?" << std::endl;
std::cout << "1. Look for a gas mask inside the facility and fight." << std::endl;
std::cout << "2. Fight and escaped the room." << std::endl;
int choice;
std::cin >> choice;

if (choice == 1) {
	// Randomly determine success or failure

	bool success = std::rand() % 2;

	if (success) {
		std::cout << "You manage to exit Research Facility safely!" << std::endl;
	}
	else {
		std::cout << "The creature will eat every last piece of your body. You died." << std::endl;
		std::cout << "Game over!" << std::endl;
		break;
	}

}
else {
	std::cout << "You find a gas mask and you razed the monsters and escaped the room safely." << std::endl;
}
				}
else if (encounter == 1) {

// Obstacle: Locked Door
std::cout << "You come across a mysterious door blocking your path." << std::endl;

if (hasKey); {
	std::cout << "You have a key! You unlock the door and continue on." << std::endl;
}
else {
	std::cout << "The door is locked. You need to find a key to proceed." << std::endl;
}
				}
else {
// Treasure
std::cout << "Congratulations! You found the hidden treasure!" << std::endl;
std::cout << "You win!" << std::endl;
break;
		 }

		 // Decrease player health
		 playerHealth -= 10;
		 std::cout << "Your health: " << playerHealth << std::endl;

		 // Check if player's health reaches zero
		 if (playerHealth <= 0) {
			 std::cout << "Your health has reached zero. You collapse and cannot continue." << std::endl;
			 std::cout << "Game over!" << std::endl;
			 break;
		 }
		 // Randomly determine the chance of finding a key
		 bool foundKey = std::rand() % 2;
		 if (foundKey) {
			 std::cout << "You found a key!" << std::endl;
			 "hasKey" = true;
		 }
				}

				std::cout << "Thank you for playing!" << std::endl;

				return 0;
			}












