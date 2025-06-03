 #include<stdio.h>

void main(void){

    int row,space,star;
    for(row=0;row<5;row++){
       if(row==0 || row==4){
        for(int star=0;star<5;star++){
            printf("* ");
        }
       }else{
        for(star=0;star<5;star++){
              if(star==0||star==4||star==row){
                    printf("* ");
              }else{
                printf("  ");
              }
        }
       }
        printf("\n");
    }
        
    }


