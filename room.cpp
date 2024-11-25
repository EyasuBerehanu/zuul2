//Room cpp/header
// Main cpp
//Items strut or cpp/header do the memory storing thing like search

#include "room.h"
#include <iostream>
#include <cstring>
using namespace std;


room::room(char* cr, char* e, char* si, char* d) { //constructor for the DigitalMedia

    currentRoom = new char[80];
    strpy(currentRoom, cr);
  
    exits = new char[80];
    strcpy(exits, t);  //copys t into the array

    storedItems = new char[80];
    strpy(storedItems, si);

    description = new char[80];
    strcpy(description, d);  //copys t into the array

room::~room() { //destructor for the DigitalMedia
    delete[] currentRoom;
    delete[] exits;
    delete[] description;
    delete[] storedItems;
}

char* room::getCurrentRoom() {
  return currentRoom();
}
char* room::getExits() { //getter for the exits
    return exits;
}
char* room::getDescription() {
  return description();
}
char* room::getExits() { //getter for the exits
    return storedItems;
}

void room::setExit(){

}

room* room::getExit(){

}

void room displayInfo(){
    cout << "You are in: " << currentRoom << endl;
    cout << "Description: " << description << endl;
}
