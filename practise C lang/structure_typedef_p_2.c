#include <stdio.h>
// structure
typedef struct _vector
{
    int x;
    int y;
} _vt;

// structure function
_vt sumVector(_vt v1, _vt v2)
{
    _vt result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
void main()
{
    // structure object
    _vt v1, v2, total_sum;
    v1.x = 5;
    v1.y = 10;
    printf("The v1 x:%d and y:%d\n", v1.x, v1.y);

    v2.x = 55;
    v2.y = 100;
    printf("The v2 x:%d and y:%d\n", v1.x, v2.y);

    // total vector variable
    total_sum = sumVector(v1, v2);
    printf("The X:dim result is : %d\nThe Y:dim result is : %d\n", total_sum.x, total_sum.y);
    system("pause");
}