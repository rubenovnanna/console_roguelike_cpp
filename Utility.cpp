#include "Utility.h"

void InitializeSettings() {
    SetConsoleOutputCP( 65001 );
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void wait() {
    int a;
    cin >> a;
}

int KeyCheck(int Key) {
    if (Key == 'w' or Key == 'W' or Key == 230 or Key == 150) {
        return 1;
    } else if (Key == 'a' or Key == 'A' or Key == 228 or Key == 148) {
        return 2;
    } else if (Key == 's' or Key == 'S' or Key == 235 or Key == 155) {
        return 3;
    } else if (Key == 'd' or Key == 'D' or Key == 162 or Key == 130) {
        return 4;
      } else if(Key == 13){
        return 5;
    }
};

