#include <stdio.h>

void beverage() {
    int sop = 0;
    int i;
    char ch;
    char *items[20];
    int prices[] = {170, 250, 280, 270, 290, 40, 180, 180, 300, 320, 310, 280, 310, 230};
    char *food[] = {
        "COCO COLA", "FRENCH FRIES(NORMAL)", "FRENCH FRIES(CHEESE OVERLOAD)", "POPCORN(NORMAL)", 
        "POPCORN(CHOCOLATE MASHUP)", "MINERAL WATER", "CAPPUCCINO", "CAFE LATTE 250 ML", 
        "CHICKEN NUGGETS", "CHICKEN TIKKA PIZZA 25 CM", "CHICKEN TIKKA ROLL", "NACHOS LARGE 130GM", 
        "PERI PERI CHICKEN BURGER", "CHICKEN SESAME DUMSUMS 5 PCS"
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
        items[count] = food[i - 1];
        count++;
        
        printf("Do you want to continue? (y/n): ");
        getchar();
        scanf("%c", &ch);
        
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
