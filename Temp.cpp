#include "Function.h"
char ch;
string Menu1[] = { "Список студентов", "Добавить студента", "Редактировать данные", "Отчислить студента", "Выйти"};
int active_menu = 0;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_CURSOR_INFO structCursorInfo;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    //делаю курсор невидимым, ибо он бесит моргать уже
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(h, &structCursorInfo);
    structCursorInfo.bVisible = false;
    structCursorInfo.dwSize = 100;
    SetConsoleCursorInfo(h, &structCursorInfo);


    while (true)
    {
        ch = _getch();
        if (ch == -32) ch = _getch();
        switch (ch)
        {
            case ESC:
                exit(0);
            case UP:
                if (active_menu > 0)
                    active_menu--;
                system("CLS");
                break;
            case DOWN:
                if (active_menu < size(Menu1) - 1)
                    active_menu++;
                system("CLS");
                break;
            case ENTER:
                system("CLS");
        }
        for (int i = 0; i < size(Menu1); i++)
        {
            if (i == active_menu) 	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            else 	SetConsoleTextAttribute(h, FOREGROUND_RED);
            cout << Menu1[i] << endl;
        }
    }

}