#include<stdio.h>
#include<stdlib.h>

int num_of_Pizza = 0;
int num_of_burgger = 0;
int num_of_GrilledChicken = 0;
int num_of_cheescake = 0;
int num_of_icecream = 0;
int num_of_Redbull = 0;

void project_title(){
    printf("Food order simulator Project\n");
    printf("Developed by Saga.A\n");
}

void display_welcome(){
    printf("Welcome to our Online food order system...\n");
}

void display_regular(){
    printf("Ok, you can place your order using the regular menu...\n");
}

void display_today_special(){
    printf("Do you want see today's special (y/n): ");
    getchar();  // consume leftover newline
    int x = getchar();

    if (x == 'y' || x == 'Y'){
        printf("Here is our today's special menu...\n");
    }
    else{
        display_regular();
    }
}

void display_order(){
    printf("Do you want order something (y/n): ");
    int c = getchar();

    if (c == 'y' || c == 'Y'){
        display_today_special();
    }
    else{
        printf("Alright! See you next time!\n");
        exit(1); 
    }
}

int display_takeout_or_delivery(){
    printf("Do want to takeout or delivery (t/d): ");
    getchar();  // consume leftover newline
    int c = getchar();

    if (c == 't' || c == 'T'){
        return 1;
    }
    else if (c == 'd' || c == 'D'){
        return 0;
    }
    else{
        return -1;
    }
}

void display_menu(){
    printf("Menu options:\n");
    printf("a) Pizza, b) Burger, c) Grilled Chicken, d) Cheesecake, e) Ice Cream, f) Redbull, q) Quit\n");
}

void take_the_order(){
    while (1){
        display_menu();
        getchar();  // consume leftover newline
        int choice = getchar();

        switch (choice){
            case 'a':
                num_of_Pizza++;
                break;
            case 'b':
                num_of_burgger++;
                break;
            case 'c':
                num_of_GrilledChicken++;
                break;
            case 'd':
                num_of_cheescake++;
                break;
            case 'e':
                num_of_icecream++;
                break;
            case 'f':
                num_of_Redbull++;
                break;
            case 'q':
                return;
            default:
                printf("Please enter a valid menu choice only\n");
        }
    }    
}

void thank_for_your_order(){
    printf("Thanks for your order, see you again :)\n");
}

int main(){
    project_title();
    display_welcome();
    display_order();

    int result = display_takeout_or_delivery();

    if (result == 1){
        printf("Enter takeout details\n");
    }
    else if (result == 0){
        printf("Enter delivery details\n");
    }
    else{
        printf("Error! Try again.\n");
        return 1;
    }
    
    take_the_order();

    int total = num_of_Pizza + num_of_burgger + num_of_GrilledChicken + num_of_cheescake + num_of_icecream + num_of_Redbull;
    printf("Your total ordered items are:\n");

    if (num_of_Pizza != 0) printf("Pizza: %d\n", num_of_Pizza);
    else printf("No order in Pizza\n");

    if (num_of_burgger != 0) printf("Burger: %d\n", num_of_burgger);
    else printf("No order in Burger\n");

    if (num_of_GrilledChicken != 0) printf("Grilled Chicken: %d\n", num_of_GrilledChicken);
    else printf("No order in Grilled Chicken\n");

    if (num_of_cheescake != 0) printf("Cheesecake: %d\n", num_of_cheescake);
    else printf("No order in Cheesecake\n");

    if (num_of_icecream != 0) printf("Ice Cream: %d\n", num_of_icecream);
    else printf("No order in Ice Cream\n");

    if (num_of_Redbull != 0) printf("Redbull: %d\n", num_of_Redbull);
    else printf("No order in Redbull\n");

    printf("Your total items count is %d\n", total);

    printf("Select your payment method\n");

    while (1){
        printf("1) Online Payment, 2) Cash, 3) Crypto : ");
        getchar();  // consume leftover newline
        int c = getchar();

        switch (c){
            case '1':
                printf("Scan QR and pay the amount %d\n", total);
                break;
            case '2':
                printf("You can pay %d dollars at the counter\n", total);
                break;
            case '3':
                printf("Need to pay %d crypto for your order\n", total);
                break;
            default:
                printf("Transaction failed! Please select preferred payment method\n");
                continue;
        }
        break;
    }

    printf("Payment success\n");
    thank_for_your_order();

    return 0;
}
