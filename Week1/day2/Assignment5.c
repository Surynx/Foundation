#include<stdio.h>

void dispaly(char name[100]){
    printf("%s",name);
}

void main(void){
    int day;
    printf("Enter the day(1-7):");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        dispaly("Monday");
        break;
    case 2:
    dispaly("Tuesday");
    break;
     case 3:
        dispaly("wed");
        break;
    case 4:
    dispaly("Thurs");
    break;
     case 5:
        dispaly("fri");
        break;
    case 6:
    dispaly("sat");
    break;
     case 7:
    dispaly("sun");
    break;
    
    default:
    dispaly("Invalid");
        break;
    }
}