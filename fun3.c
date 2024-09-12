#include<stdio.h>
float Squarearea(float side);
float areaReactangle(float a,float b);
float areaCircle(float r);
int main()
{
    printf("Area of square:%f\n",Squarearea(2.0));
    printf("Area of rectagle:%f\n",areaReactangle(2,3));
    printf("Area of circle:%f\n",areaCircle(2.0));
    

    return 0;

}
float Squarearea(float side)
{
    return side*side;

}
float areaReactangle(float a,float b)
{
    return a*b;


}
float areaCircle(float r)
{
    return 3.14*r*r;

}


