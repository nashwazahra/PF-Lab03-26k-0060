#include <stdio.h>

int main() {

    int choice;

    do {
        
        printf("         POWERFIT GYM SYSTEM        \n");

        printf("1.  Slot Availability Check\n");
        printf("2.  Membership Eligibility\n");
        printf("3.  Membership Plan Selection\n");
        printf("4.  Discount Offer\n");
        printf("5.  Personal Trainer Option\n");
        printf("6.  Trainer Rating\n");
        printf("7.  Diet Consultation Service\n");
        printf("8.  Monthly Bill\n");
        printf("9.  Supplement Menu\n");
        printf("10. Late Payment Penalty\n");
        printf("11. Corporate Member Handling\n");
        printf("12. Multiple Member Age Check\n");
        printf("13. Payment Confirmation\n");
        printf("14. Feedback Reward\n");
        printf("15. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            
            case 1: {
                int totalSlots, bookedSlots;

                printf("\nSlot Availability\n");

                printf("Enter total slots: ");
                scanf("%d", &totalSlots);

                printf("Enter booked slots: ");
                scanf("%d", &bookedSlots);

                if (bookedSlots < totalSlots) {
                    printf("Gym slot is available.\n");
                }
                else {
                    printf("No gym slot is available.\n");
                }

                break;
            }
            
            case 2: {
                int age;

                printf("\n Membership Eligibility\n");

                printf("Enter your age: ");
                scanf("%d", &age);

                if (age >= 16) {
                    printf("Membership allowed.\n");
                }
                else {
                    printf("Membership denied.\n");
                }

                break;
            }
            
            case 3: {
                int plan;

                printf("\nMembership Plans\n");

                printf("1. Basic\n");
                printf("2. Premium\n");
                printf("3. VIP\n");

                printf("Enter your choice: ");
                scanf("%d", &plan);

                switch (plan) {

                    case 1:
                        printf("You selected Basic Plan.\n");
                        break;

                    case 2:
                        printf("You selected Premium Plan.\n");
                        break;

                    case 3:
                        printf("You selected VIP Plan.\n");
                        break;

                    default:
                        printf("Invalid plan choice.\n");
                }

                break;
            }
            
            case 4: {
                int months;
                float price, discount, finalPrice;

                printf("\nDiscount Offer\n");

                printf("Enter number of months: ");
                scanf("%d", &months);

                printf("Enter price: ");
                scanf("%f", &price);

                if (months >= 6) {

                    discount = price * 0.10;
                    finalPrice = price - discount;

                    printf("10%% discount applied.\n");
                    printf("Final price = Rs. %.2f\n", finalPrice);
                }
                else {

                    printf("No discount applied.\n");
                    printf("Final price = Rs. %.2f\n", price);
                }

                break;
            }
            
            case 5: {
                char trainer;
                float bill;

                printf("\nPersonal Trainer\n");

                printf("Enter current bill: ");
                scanf("%f", &bill);

                printf("Do you want a personal trainer? (Y/N): ");
                scanf(" %c", &trainer);

                if (trainer == 'Y' || trainer == 'y') {

                    bill = bill + 2000;

                    printf("Personal trainer added.\n");
                    printf("Rs. 2000 added to bill.\n");
                }
                else {

                    printf("Personal trainer not selected.\n");
                }

                printf("Current bill = Rs. %.2f\n", bill);

                break;
            }
            
            case 6: {
                int rating;

                printf("\nTrainer Rating\n");

                printf("Enter rating (1-5): ");
                scanf("%d", &rating);

                if (rating == 5) {
                    printf("Excellent\n");
                }
                else if (rating == 4) {
                    printf("Good\n");
                }
                else if (rating == 3) {
                    printf("Average\n");
                }
                else if (rating == 2) {
                    printf("Poor\n");
                }
                else if (rating == 1) {
                    printf("Very Poor\n");
                }
                else {
                    printf("Invalid rating.\n");
                }

                break;
            }
            
            case 7: {
                char diet;
                float bill;

                printf("\nDiet Consultation \n");

                printf("Enter current bill: ");
                scanf("%f", &bill);

                printf("Do you want diet consultation? (Y/N): ");
                scanf(" %c", &diet);

                if (diet == 'Y' || diet == 'y') {

                    bill = bill + 1000;

                    printf("Diet consultation selected.\n");
                    printf("Rs. 1000 added to bill.\n");
                }
                else {

                    printf("No diet consultation selected.\n");
                }

                printf("Current bill = Rs. %.2f\n", bill);

                break;
            }
            
            case 8: {
                int months;
                float planRate, bill, tax, finalBill;

                printf("\nMonthly Bill\n");

                printf("Enter number of months: ");
                scanf("%d", &months);

                printf("Enter monthly plan rate: ");
                scanf("%f", &planRate);

                bill = months * planRate;

                tax = bill * 0.10;

                finalBill = bill + tax;

                printf("Bill before tax = Rs. %.2f\n", bill);
                printf("10%% tax = Rs. %.2f\n", tax);
                printf("Final bill = Rs. %.2f\n", finalBill);

                break;
            }
            
            case 9: {
                int supplement;

                printf("\n Supplement Menu \n");

                printf("1. Protein\n");
                printf("2. Creatine\n");
                printf("3. BCAA\n");

                printf("Enter your choice: ");
                scanf("%d", &supplement);

                switch (supplement) {

                    case 1:
                        printf("You selected Protein.\n");
                        break;

                    case 2:
                        printf("You selected Creatine.\n");
                        break;

                    case 3:
                        printf("You selected BCAA.\n");
                        break;

                    default:
                        printf("Invalid supplement choice.\n");
                }

                break;
            }
            
            case 10: {
                int day;
                float bill;

                printf("\n Late Payment n");

                printf("Enter current bill: ");
                scanf("%f", &bill);

                printf("Enter payment day: ");
                scanf("%d", &day);

                if (day > 10) {

                    bill = bill + 300;

                    printf("Late payment penalty added.\n");
                    printf("Rs. 300 penalty added.\n");
                }
                else {

                    printf("No penalty.\n");
                }

                printf("Final bill = Rs. %.2f\n", bill);

                break;
            }
            
            case 11: {
                char corporate;
                float bill, discount, finalBill;

                printf("\n Corporate Member \n");

                printf("Enter bill: ");
                scanf("%f", &bill);

                printf("Are you a corporate employee? (Y/N): ");
                scanf(" %c", &corporate);

                if (corporate == 'Y' || corporate == 'y') {

                    discount = bill * 0.20;

                    finalBill = bill - discount;

                    printf("20%% corporate discount applied.\n");
                    printf("Final bill = Rs. %.2f\n", finalBill);
                }
                else {

                    printf("No corporate discount.\n");
                    printf("Final bill = Rs. %.2f\n", bill);
                }

                break;
            }
            
            case 12: {
                int age1, age2, age3;

                printf("\nGroup Membership\n");

                printf("Enter age of applicant 1: ");
                scanf("%d", &age1);

                printf("Enter age of applicant 2: ");
                scanf("%d", &age2);

                printf("Enter age of applicant 3: ");
                scanf("%d", &age3);

                if (age1 >= 16 && age2 >= 16 && age3 >= 16) {

                    printf("Group membership allowed.\n");
                }
                else {

                    printf("Group membership denied.\n");
                }

                break;
            }
            
            case 13: {
                char payment;

                printf("\nPayment Confirmation\n");

                printf("Has payment been made? (Y/N): ");
                scanf(" %c", &payment);

                if (payment == 'Y' || payment == 'y') {

                    printf("Membership confirmed.\n");
                }
                else {

                    printf("Membership status: Pending.\n");
                }

                break;
            }
            
            case 14: {
               int rating;

               printf("\nFeedback Reward\n");

               printf("Enter your rating (1-5): ");
               scanf("%d", &rating);

               if (rating >= 4 && rating <= 5) {
                  printf("Congratulations!\n");
                  printf("You get a free protein shake voucher.\n");
               }
               else if (rating >= 1 && rating <= 3) {
                  printf("We will improve service.\n");
               }
               else {
                  printf("Invalid rating. Please enter a rating between 1 and 5.\n");
               }

            break;
          }
            
            case 15:
                printf("\nThank you for using PowerFit Gym System!\n");
                break;
                
            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 15);


    return 0;
}