#include<stdio.h>
#include<cs50.h>
int main(void)
{
char name[];
float m;
float kg;
name=get_char("Enter your name\n");
m=get_float("Enter your height (in m)\n");
kg=get_float("Enter your weight(in kg)\n");
char category;
float bmi=kg/(m*m);
if (bmi<18.5)
{
  category="Underweight";
  printf("%c,%f,%c",name,bmi,category);
}
else if(18.5<bmi<24.9)
{
  category="Normal";
  printf("%c,%f,%c",name,bmi,category);
  }
else if(25<bmi<29.9)
{
  category="Overweight";
  printf("%c,%f,%c",name,bmi,category);
  }
else{
  category="Obese";
    printf("%c,%f,%c",name,bmi,category);
}
}
