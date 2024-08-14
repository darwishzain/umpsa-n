#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

struct StockDetail
{
    int stockcode;
    char stock[50];

    struct StockDetail *ptrnext2;
};

struct stockcode *headptr2, *newptr2, *currentptr2, *previousptr2;

struct Admin
{
    char name[20];
    char password[10];
};

struct Stock
{
    int productId;
    char productName[50];
    int productQuantity;
    float productPrice;
    int searchId;
    int searchQuantity;
    float searchPrice;
    struct Admin admin;
    struct Stock *ptrnext;
};

struct Stock *front, *headptr, *rear, *currentptr, *newptr, *lowest, *step;


void enqueueStock();  //add stock
void dequeueStock();   //delete stock
void updateStock();  //update stock
void sortStock(); //sort stock
void searchStock();  //search stock
void displayStock();  //display stock


int main()
{

    start:
    newptr=(struct Stock*)(malloc(sizeof(struct Stock)));

    printf("\t\t              LOGIN ADMINISTRATOR STATIONARY INVENTORY SYSTEM         ");
    printf("\n\t\t ------------------------------------------------------------------------- \n");

    fflush(stdin);
    printf("\t\t\t\t\tUsername:");
    gets(newptr->admin.name);
    printf("\t\t\t\t\tPassword:");
    scanf("%s",&newptr->admin.password);
    printf("\n\t\t ------------------------------------------------------------------------- \n");

    if(strcmp(newptr->admin.password, "password123")==0)
    {
         system("cls");
    }
    else
    {
        printf("\n\t\t\t\t\t   WRONG PASSWORD!!...\n\n");
        goto start;
    }

    int option;
    int selection=TRUE;
    front=(struct Stock *)NULL;

    while(selection==TRUE)
    {

        start2:
        printf("\n\t\t ------------------------------------------------------------------------- \n");
        printf("\t\t|                         STATIONARY INVENTORY SYSTEM                      | ");
        printf("\n\t\t ------------------------------------------------------------------------- \n");
        printf("\n\t\t\t\t                      WELCOME!                                    ");
        printf("\n\t\t    =========================================================================");
        printf("\n\t\t\t   1. ADD STOCK");
        printf("\n\t\t\t   2. DELETE STOCK");
        printf("\n\t\t\t   3. UPDATE STOCK");
        printf("\n\t\t\t   4. SORT STOCK");
        printf("\n\t\t\t   5. SEARCH STOCK");
        printf("\n\t\t\t   6. DISPLAY STOCK");
        printf("\n\t\t\t   7. Exit");
        printf("\n\t\t    =========================================================================\n");

        printf("\n\t\t      Enter OPTION [1,2,3,4,5,6,7]: ");
        scanf("%d", &option);

        switch(option)

        {
            case 1: enqueueStock();
            goto start2;
            break;

            case 2: dequeueStock();
            goto start2;
            break;

            case 3: updateStock();
            goto start2;
            break;

            case 4: sortStock();
            goto start2;
            break;

            case 5: searchStock();
            goto start2;
            break;

            case 6: displayStock();
            goto start2;
            break;

            case 7: exit(0);
            break;

            default: printf("\n\t\t RE-ENTER THE OPTION!!\n");
            goto start2;
        }
    }
}

void enqueueStock()
{
    newptr=(struct Stock*)malloc(sizeof(struct Stock));
    printf("\n\t\t    =========================================================================\n");
    printf("\t\t       ITEM DETAILS       ");

    printf("\n\n\t\t       PRODUCT ID:");
    scanf("%d",&newptr->productId);
    fflush(stdin);

    printf("\t\t       PRODUCT NAME:");
    scanf("%s",&newptr->productName);
    fflush(stdin);

    printf("\t\t       QUANTITY:");
    scanf("%d",&newptr->productQuantity);
    fflush(stdin);

    printf("\t\t       PRICE:");
    scanf("%f",&newptr->productPrice);
    fflush(stdin);

    printf("\n\t\t    =========================================================================\n");


    if(headptr==NULL)
    {
        headptr=newptr;
        newptr->ptrnext=(struct Stock *)NULL;

    }
    else
    {
        currentptr=headptr;
		while(currentptr->ptrnext !=(struct Stock *)NULL)
        {
            currentptr=currentptr->ptrnext;
        }
        currentptr->ptrnext=newptr;
        newptr->ptrnext= NULL;
    }
}

void dequeueStock()
{
    if (headptr==(struct Stock *)NULL)
    {
        printf("\t\t       The Stock Empty!!!\n");//the list is empty
    }
    else
    {
        currentptr=headptr;
        headptr=headptr->ptrnext;
        free(currentptr);
        printf("\t\t       The Stock Delete!!!\n");
    }
}

void updateStock()
{
    struct Stock* headptr;
    int searchproductId;
    if(headptr==NULL)
    {
        printf("\n\n\t\t      The list is empty!!!\n");

    }
    else
    {
        printf("\n\n\t\t      Enter product ID: ");
        scanf("%d",&searchproductId);

        currentptr=headptr;
        while (currentptr->ptrnext!=NULL)
        {
            if(currentptr->productId == searchproductId)
            {
                printf("\n\n\t\t      THE PRODUCT IS FOUND");
                printf("\n\t\t      PRODUCT ID        : %d", currentptr->productId);
                printf("\n\t\t      NEW PRODUCT NAME        : ");
                scanf("%s", &currentptr->productName);
                printf("\n\t\t      NEW PRODUCT QUANTITY    : ");
                scanf("%d", &currentptr->productQuantity);
                printf("\n\t\t      NEW PRODUCT PRICE       : ");
                scanf("%f", &currentptr->productPrice);
                return;
            }
            else
            {
                 currentptr=currentptr->ptrnext;
            }
        }
        if(currentptr->productId != searchproductId)
        {
            printf("\n\t\t      THE PRODUCT IS NOT FOUND");
        }
    }
}

void sortStock()
{
    struct Stock* temp=headptr;
    printf("\t\tStart sorting....");
    while(temp!=NULL)
    {
        struct Stock* min = temp;
        struct Stock* r=temp->ptrnext;

        while(r!=NULL)
        {
            if(min->productPrice > r->productPrice)
            {
                min=r;
            }
            r=r->ptrnext;
        }
        //swap id
        int newId;
        newId=temp->productId;
        temp->productId=min->productId;
        min->productId=newId;
        //swap name
        char newName[50];
        strcpy(newName,temp->productName);
        strcpy(temp->productName,min->productName);
        strcpy(min->productName,newName);
        //swap quantity
        int newQ = temp->productQuantity; 
        temp->productQuantity = min->productQuantity; 
        min->productQuantity = newQ; 
        //swap price
        float newP = temp->productPrice; 
        temp->productPrice = min->productPrice; 
        min->productPrice = newP;

        temp = temp->ptrnext; 
    }
}
void searchStock()
{
    struct Stock* headptr;
    int category;

    printf("\n\n\t\t\t   SEARCH BY CATEGORY");
    printf("\n\t\t\t   1. PRODUCT ID");
    printf("\n\t\t\t   2. QUANTITY OF PRODUCT");
    printf("\n\t\t\t   3. PRODUCT PRICE");
    printf("\n\t\t\t   4. EXIT");
    printf("\n\t\t      Enter Category [1,2,3,4]: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
        if(headptr==NULL)
        {
            printf("\n\t\t      The list is empty!!!\n");

        }
        else
         {
             printf("\n\t\t      Enter product ID: ");
             scanf("%d",&newptr->productId);
             fflush(stdin);

             currentptr=headptr;
              if (currentptr->ptrnext!=NULL)
              {
                      printf("\n\t\t      The product is found");
                      printf("\n\t\t      Product ID  : %d", currentptr->productId);
                      printf("\n\t\t      Name        : %s", currentptr->productName);
                      printf("\n\t\t      Price       : %2.f", currentptr->productPrice);
                      printf("\n\t\t      Quantity    : %d", currentptr->productQuantity);
                      return;
              }
              else
              {
                 printf("\n\n\t\t      The product is not found");
              }
         }

        break;

        case 2:  if(headptr==NULL)
        {
            printf("\n\n\t\t      The list is empty!!!\n");

        }
        else
         {
             printf("\n\t\t      Enter quantity of product : ");
             scanf("%d",&newptr->productQuantity);
             fflush(stdin);

             currentptr=headptr;
             if (currentptr->ptrnext!=NULL)
              {
                      printf("\n\n\t\t      The quantity is found");
                      printf("\n\t\t      Info product");
                      printf("\n\t\t      Product ID  : %d", currentptr->productId);
                      printf("\n\t\t      Product Name: %s", currentptr->productName);
                      printf("\n\t\t      Price       : %2.f", currentptr->productPrice);
                      printf("\n\t\t      Quantity    : %d", currentptr->productQuantity);
                      return;
              }
              else
              {
                 printf("\n\t\t      The product is not found");
              }
         }

        break;

        case 3:  if(headptr==NULL)
        {
            printf("\n\n\t\t      The list is empty!!!\n");

        }
        else
         {
             printf("\n\t\t      Enter product price : ");
             scanf("%f",&newptr->productPrice);
             fflush(stdin);

             currentptr=headptr;
              if (currentptr->ptrnext!=NULL)
              {
                      printf("\n\n\t\t      The Product is found");
                      printf("\n\t\t      Product ID  : %d", currentptr->productId);
                      printf("\n\t\t      Product Name: %s", currentptr->productName);
                      printf("\n\t\t      Price       : %2.f",currentptr->productPrice);
                      printf("\n\t\t      Quantity    : %d", currentptr->productQuantity);
                      return;
              }
              else
              {
                 printf("\n\t\t      The product is not found");
              }
         }
        break;

        case 4: exit(0);
        default: printf("\n\t\t      Re-enter the category!!");
    }
}

void displayStock()
{
    printf("\n\t\t    =========================================================================\n");
    printf("\t\t\t       ITEM DETAILS       \n");
    int i=1;
    if (headptr==(struct Stock*)NULL)
    {//empty list
        printf("\n\t\t       Empty Stock");
        return;
    }
    else
    {
        currentptr=headptr;
        while(currentptr !=(struct Stock *)NULL)
        {
            printf("\n\t\t       PRODUCT ID: %d" ,currentptr->productId);
            printf("\n\t\t       PRODUCT NAME: %s" ,currentptr->productName);
            printf("\n\t\t       QUANTITY: %d" ,currentptr->productQuantity);
            printf("\n\t\t       PRICE: %.2f\n" ,currentptr->productPrice);
            currentptr=currentptr->ptrnext;
            i++;
        }
    }
}
