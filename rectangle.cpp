<<<<<<< HEAD
#include <cmath>
=======
#include <cmath.h>
>>>>>>> 23d8e9c (rectangle function)
double RectPerim (double lng, double height)
{
return 2*(lng + height);
}
double RectSquar (double lng, double height)
{
return lng*height;
}
double RectLgOfDiag (double lng, double height)
{
return sqrt(pow(lng,2)+pow(height,2));
}


