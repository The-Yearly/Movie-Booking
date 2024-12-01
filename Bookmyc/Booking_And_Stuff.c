#include <stdio.h>
int main(){
    char seatschart[40][5]={ "a1","a2","a3","a4","a5","a6","a7","a8","a9","a10","b1","b2","b3","b4","b5","b6","b7","b8","b9","b10","c1","c2","c3","c4","c5","c6","c7","c8","c9","c10","d1","d2","d3","d4","d5","d6","d7","d8","d9","d10"};
    int m;
    while(1)
    {   
        int c=0;
        int c2=0;
        char seats[40]="0000000000000000000000000000000000000000";
        for(int j=0;j<4;j++){
            for(int a=0;a<10;a++){
                printf("     %s",seatschart[c2]);
                c2+=1;
            }
            printf("\n");
            for(int g=0;g<10;g++){
                if(seats[c]=='0'){
                    printf("    | |");
                }
                else if(seats[c]=='1'){
                    printf("    |\\|");
                }
                c+=1;
            }
            printf("\n");
        }
        printf("\n |  | Represent Empty Seats |\\| Represent  Booked Seats\n");
        printf("1: Choose Seats \n");
        printf("2: Buy\n");
        printf("3: Clear Selection\n");
        printf("4: Leave\n");
        printf("What Do You Want To Do ");
        scanf("%d",&m);
        if(m==4){
            break;
        }
    }
    
}