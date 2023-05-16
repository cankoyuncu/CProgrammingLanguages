#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    1 - show balance
    2 - deposit money
    3 - withdraw money
    4 - buy stock
    5 - exit
    */

    int i, j, choice, choice2, money=1000, amount, old_amount;

    for(i=0;i<5;i++){
        
        printf("1 - Show balance\n2 - Deposit money\n3 - Withdraw money\n4 - Buy stock\n5 - Exit\n\nYour Choice: ");      
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                system("CLS"); 
                printf("Your balance: %d $\n\n",money);
                i=0;
                break;

            case 2: 
                system("CLS");
                printf("Amount deposited: ");
                scanf("%d", &amount);
                old_amount = money;
                money = money + amount;

                system("CLS");

                printf("--------------------------------\n");
                printf("Old Amount: %d\n", old_amount);
                printf("Amount deposited: %d\n",amount);
                printf("Deposit money: %d\n", money);
                printf("--------------------------------\n");
                break;

            case 3: 
                printf("Amount withdrawn: ");
                scanf("%d", &amount);
                money = money - amount;

                system("CLS");

                printf("--------------------------------\n");
                printf("Old Amount: %d\n", old_amount);
                printf("Amount withdrawn: %d\n", amount);
                printf("Current Balance: %d\n", money);
                printf("--------------------------------\n");
                i=0;
                break;

            case 4:
                    system("CLS");
                    for(j=0; j<2; j++){

                    printf("1 - Buy GOOGL Stock\n2 - Buy META Stock\n3 - Buy TSLA Stock\n4 - Back\n\n");
                    printf("Please choose the stock you want to buy: ");
                    scanf("%d", &choice2);
                        switch (choice2)
                            {
                                case 1: 
                                    money = money - 105;
                                    printf("Transaction successful.\nYour current balance: %d\n", money);
                                    j=0;
                                    break;

                                case 2: 
                                    money = money - 212;
                                    printf("Transaction successful.\nYour current balance: %d\n", money);
                                    j=0;
                                    break;
                                    
                                case 3: 
                                    money = money - 165;
                                    printf("Transaction successful.\nYour current balance: %d\n", money);
                                    j=0;
                                    break;

                                case 4:    
                                    j=5; 
                                    break;

                                default:
                                    printf("Wrong Choice! PLease Try Again\n");
                                    j=0;
                                    break;
                
                            }
                        break;
                    
                }
            //i=0;

            case 5:
                i=10;
                system("CLS");
                printf("We are waiting for you again!");
                break;

            default:
                system("CLS");
                printf("--------------------------------\n");
                printf("Wrong Choice! PLease Try Again\n");
                printf("--------------------------------\n");
                i=0;
                break;
            }
        }          

    //system("pause");

    return 0;
}