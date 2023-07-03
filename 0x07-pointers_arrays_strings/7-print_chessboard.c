#include "main h"

void print_chessboard(char (a*)[8])
{
    int rank, file;

    for (rank = 0; rank < 8; rank++)
    {
        for (file = 0; file < 8; file++)
        {
            _putchar(a[rank][file]);
        }
        _putchar('\n');
    }
}
