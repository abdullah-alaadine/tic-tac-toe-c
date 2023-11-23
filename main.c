#include <stdio.h>

const char padding[5] = "    ";

const char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};

char current_player = 'X';

void clear_console()
{
    system("clear || cls");
}

const char *print_cell(const char c)
{
    switch (c)
    {
    case 'X':
        return " X ";
        break;
    case 'O':
        return " O ";
        break;
    default:
        return "   ";
    }
}

void print_board()
{
    printf("\n%s+---+---+---+\n", padding);
    for (int i = 0; i < 3; i++)
    {
        printf("%s|", padding);
        for (int j = 0; j < 3; j++)
        {
            printf("%s|", print_cell(board[i][j]));
        }
        printf("\n%s+---+---+---+\n", padding);
    }
}

int check_rows()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return 1;
        }
    }
    return 0;
}

int check_columns()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return 1;
        }
    }
    return 0;
}

int check_diagonals()
{
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][3] != ' ' && board[0][3] == board[1][1] && board[1][1] == board[2][0])
        return 1;
    return 0;
}

void switch_player()
{
    if (current_player == 'X')
        current_player = 'O';
    else
        current_player = 'X';
}

int main()
{
    printf("hello world\n");
}
