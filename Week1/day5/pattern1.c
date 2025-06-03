 #include<stdio.h>

void main(void){

    int row,space;
    for(row=0;row<5;row++){
       if(row==0 || row==4){
        for(int star=0;star<5;star++){
            printf("* ");
        }
       }else{
        for(int star=0;star<5;star++){
            if(star==0 || star==4){
                printf("* ");
            }else{
                printf("  ");
            }
        }
       }
        printf("\n");
    }
        
    }


