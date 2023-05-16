#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    V.1
    1 - show balance
    2 - deposit money
    3 - withdraw money
    4 - buy stock
    5 - exit
    */

   /*
   V.2
   6 - insufficient balance
   7 - take credit
   */

    int i, j, choice, choice2, money=1000, amount, old_amount;

    for(i=0;i<2;i++){
        if(money<0){
            printf("Insufficient balance. You can take a credit!\n\n");
        }
        
        printf("1 - Show balance\n2 - Deposit money\n3 - Withdraw money\n4 - Buy stock\n5 - Exit\n\nYour Choice: ");      
        scanf("%d", &choice);

            if(choice==1){
                system("CLS"); 
                printf("Your balance: %d $\n\n",money);
                i=0;
            }
                
            else if(choice==2){
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
                i=0;
            }
            else if(choice==3){
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
            }
            
            else if(choice==4){
                    system("CLS");
                    for(j=0; j<2; j++){

                    printf("1 - Buy GOOGL Stock\n2 - Buy META Stock\n3 - Buy TSLA Stock\n4 - Back\n\n");
                    printf("Please choose the stock you want to buy: ");
                    scanf("%d", &choice2);
                            
                                if(choice2==1){
                                    if(money<0){
                                        printf("Insufficient balance. You can take a credit!\n\n");
                                    }
                                    money = money - 105;
                                    printf("Transaction successful.\nYour current balance: %d\n", money);
                                    j=0;
                                }  

                                else if(choice2==2){
                                    if(money<0){
                                        printf("Insufficient balance. You can take a credit!\n\n");
                                    } 
                                    money = money - 212;
                                    printf("Transaction successful.\nYour current balance: %d\n", money);
                                    j=0;
                                }   
                                    
                                else if(choice2==3){
                                    if(money<0){
                                        printf("Insufficient balance. You can take a credit!\n\n");
                                    }
                                    money = money - 165;
                                    printf("Transaction successful.\nYour current balance: %d\n", money);
                                    j=0;
                                }    

                                else if(choice2==4){
                                    j=2;
                                }  
                                    
                                else{
                                    printf("Wrong Choice! PLease Try Again\n");
                                    j=0;
                                }
                                i=0;    
                    }
            }

            else if(choice==5){           
                system("CLS");
                printf("We are waiting for you again!");
                i=2;
            }
            else{
                system("CLS");
                printf("--------------------------------\n");
                printf("Wrong Choice! PLease Try Again\n");
                printf("--------------------------------\n");
                i=0;
            }
                  
    }
    
    return 0;
}