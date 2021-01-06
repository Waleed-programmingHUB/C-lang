#include <stdio.h>
// structure
typedef struct _vector
{
    int x;
    int y;
} _vt;

void main()
{
    // structure object
    _vt v1, v2;
    v1.x = 5; // value declearing
    v1.y = 10;
    printf("The v1 x:%d and y:%d\n", v1.x, v1.y);

    v2.x = 55;
    v2.y = 100;
    printf("The v2 x:%d and y:%d\n", v1.x, v2.y);

    system("pause");
}