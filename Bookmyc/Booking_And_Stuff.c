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
#include <stdio.h>
#include <string.h>

void beverage() {
    int sop = 0;
    int i;
    char ch;
    char items[20][50];
    int prices[] = {170, 250, 280, 270, 290, 40, 180, 180, 300, 320, 310, 280, 310, 230};
    char food[14][50] = {
        "COCO COLA", 
        "FRENCH FRIES(NORMAL)", 
        "FRENCH FRIES(CHEESE OVERLOAD)", 
        "POPCORN(NORMAL)", 
        "POPCORN(CHOCOLATE MASHUP)", 
        "MINERAL WATER", 
        "CAPPUCCINO", 
        "CAFE LATTE 250 ML", 
        "CHICKEN NUGGETS", 
        "CHICKEN TIKKA PIZZA 25 CM", 
        "CHICKEN TIKKA ROLL", 
        "NACHOS LARGE 130GM", 
        "PERI PERI CHICKEN BURGER", 
        "CHICKEN SESAME DUMSUMS 5 PCS"
    };
    
    int count = 0;
    
    while (1) {
        printf("1. COCO COLA 170\n");
        printf("2. FRENCH FRIES(NORMAL) 250\n");
        printf("3. FRENCH FRIES(CHEESE OVERLOAD) 280\n");
        printf("4. POPCORN(NORMAL) 270\n");
        printf("5. POPCORN(CHOCOLATE MASHUP) 290\n");
        printf("6. MINERAL WATER 40\n");
        printf("7. CAPPUCCINO 180\n");
        printf("8. CAFE LATTE 250 ML 180\n");
        printf("9. CHICKEN NUGGETS 300\n");
        printf("10. CHICKEN TIKKA PIZZA 25 CM 320\n");
        printf("11. CHICKEN TIKKA ROLL 310\n");
        printf("12. NACHOS LARGE 130GM 280\n");
        printf("13. PERI PERI CHICKEN BURGER 310\n");
        printf("14. CHICKEN SESAME DUMSUMS 5 PCS 230\n");
        
        printf("Enter Your Food Choice From Above: ");
        scanf("%d", &i);
        
        sop += prices[i - 1];
        strcpy(items[count], food[i - 1]);
        count++;
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);
        
        if (ch == 'n') {
            break;
        }
    }
    
    printf("Your items:\n");
    for (int j = 0; j < count; j++) {
        printf("%s\n", items[j]);
    }
    
    printf("Total sum: %d\n", sop);
}

int main() {
    beverage();
    return 0;
}
