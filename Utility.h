#ifndef CONSOLE_ROGUELIKE_CPP_UTILITY_H
#define CONSOLE_ROGUELIKE_CPP_UTILITY_H

#include <typeinfo>
#include <string>
#include <iostream>
#include <windows.h>
#include <chrono>
#include <vector>
#include <conio.h>
#include <thread>
#include <future>


using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
using namespace std::literals; //future  -   Enable standard literals as 2s and ""s.
using namespace std;


#define TurnBlack SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0)
#define TurnBlue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1)
#define TurnGreen SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2)
#define TurnAqua SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3)
#define TurnLightRed SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4)
#define TurnMagenta SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5)
#define TurnYellow SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6)
#define TurnWhite SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7)
#define TurnGrey   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8)        //BrightBlack
#define TurnBrightBlue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9)
#define TurnBrightGreen SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10)
#define TurnBrightAqua SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11)
#define TurnBrightWhite SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
// >15 changes font background add if u want


typedef struct InvSlot {
    string Name;
    int Point;
} InvSlot;

typedef struct Coors {
    int x;
    int y;
} Coords;

void InitializeSettings();
void gotoxy(int x, int y);
void wait();
int KeyCheck(int Key);



#endif //CONSOLE_ROGUELIKE_CPP_UTILITY_H
