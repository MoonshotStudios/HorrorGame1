#include <iostream>
using namespace std;
int main() {
//Variables
	string name;
	char woods;
	int follow;
	int access;
//Intro screen
    cout << "Hello, and welcome to HORROR GAME!" << endl;
    cout << "First of all, what's your name?" << endl;
    cin >> name;
    cout << "Alright, " << name << ". Let's start." << endl;
    cout << "" << endl;
//Prologue
	cout << "" << endl;
	cout << "Prologue" << endl;
	cout << "" << endl;
	cout << "You and a few friends are wandering around one hot summer night. After going to a few stores, you decide to leave downtown and explore." << endl;
	cout << "Skyler asks you and Jack if you want to explore the woods. He says that he knows a cool place to check out." << endl;
	cout << "Do you explore the woods?" << endl;
	cout << "Press [y] for yes		Press [n] for no" << endl;
	cin >> woods;
	if (woods == 'y')
		cout << "You say yes and Jack agrees. You set out into the woods." << endl;
	if (woods == 'n')
		cout << "Jack agrees and heads out with Skyler. You don't want to be left alone, and you eventually follow." << endl;
	cout << "" << endl;
//Woods
	cout << "" << endl;
	cout << "CHAPTER 1 - THE WOODS" << endl;
	cout << "" << endl;
	cout << "Skyler takes the lead and you stay behind with Jack. After a while of walking, Skyler realizes that he's lost, and tells you and Jack to stay behind while he runs ahead to get his bearings." << endl;
	cout << "Do you stay behind or follow him?" << endl;
	cout << "Press 1 to stay behind		Press 2 to follow" << endl;
	cin >> follow;
	if (follow == 1)
		cout << "You and Jack stay behind. After a few minutes, you hear a scream coming from Skyler's direction. Jack runs ahead and you quickly follow. Eventually, you reach a clearing." << endl;
	if (follow == 2)
		cout << "You and Jack refuse to split up and you follow Skyler. Eventually, you come to a clearing." << endl;
	cout << "In the clearing lies a large building, but because you're seeing it from the back, you can't tell what it's for. However, it's in the middle of nowhere, hours from the main road." << endl;
	cout << "" << endl;
//The building
	cout << "" << endl;
	cout << "CHAPTER 2 - THE BUILDING" << endl;
	cout << "" << endl;
	if (follow == 1)
		cout << "You decide to investigate further and start walking towards the building. After all, there may be people inside that could help." << endl;
	if (follow == 2)
		cout << "You and your friends start walking towards the building. After walking a few feet, you hear a sound coming from the wooods to you right. When you look back a moment later, Skyler is already at the building, which is still 30 yards away. You and Jack run towards him, but as you get closer, he disapears in the night's darkness." << endl;
	cout << "You and Jack reach a loading dock in the back of the building. Scared and tired, Jack asks if you want to try to open the loading dock or find a door." << endl;
	cout << "Loading dock - 1		Door - 2" << endl;
	cin >> access;
	if (access == 1)
		cout << "Jack manages to open the loading dock door and you walk inside. Before he can enter, the door slams shut. Jack tries to yell \"Help!\" but is cut off before he can finish." << endl;
	if (access == 2)
		cout << "You and Jack walk around to the side of the building to look for a door. Suddenly, a figure appears in the darkness, around 20 yards ahead. You rush out to meet it, and realize that it's Skyler! You call out to him, but he silently levels a handgun at you and Jack. You immediatly run, and manage to get back to the loading dock. You open the door, run insdide, and close it behind you. You lock the door and listen." << endl;
	cout << "You hear two gunshots, then silence. You're all alone in an unfamiliar building, with no one to help you, and nowhere to go. If only you'd seen the Hospital sign outside." << endl;
	cout << "" << endl;
//Credits
	cout << "" << endl;
	cout << "CREDITS" << endl;
	cout << "" << endl;
	cout << "This game was made by Jack Hudson" << endl;
	cout << "The game was one of a series of crowdsourced projects." << endl;
	cout << "The idea for this game was created by Tarah Sleight." << endl;
    return 0;
}
