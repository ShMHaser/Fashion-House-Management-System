#include <stdio.h>
#include <string.h>

struct product{

    int id;
    char name[20];
    char size[5];
    char color[10];
    int quantity;
    float price;

};

void showProducts(){

    FILE *fp;

    int n, i;

    fp = fopen("Products.txt", "r");

    fscanf(fp, "%d", &n);

    struct product p[n];

    for(i=0; i<n; i++){

        fscanf(fp, "%d", &p[i].id);
        fscanf(fp, "%s", p[i].name);
        fscanf(fp, "%s", p[i].size);
        fscanf(fp, "%s", p[i].color);
        fscanf(fp, "%d", &p[i].quantity);
        fscanf(fp, "%f", &p[i].price);

    }

    fclose(fp);

    printf("The available products==>\n\n");
    printf("ID\tName\tSize\tColor\tQuantity\tPrice\n");
    printf("__\t____\t____\t_____\t________\t_____\n");
    for(i=0; i<n; i++){

        printf("\n%d.\t", p[i].id);
        printf("%s\t ", p[i].name);
        printf("%s\t", p[i].size);
        printf("%s\t  ", p[i].color);
        printf("%d\t\t", p[i].quantity);
        printf("%.2f", p[i].price);

    }

    printf("\n");

}

void update(int id, int quantity){

    FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int n, i;

    fscanf(fp, "%d", &n);

    struct product p[n];

    for(i=0; i<n; i++){

        fscanf(fp, "%d", &p[i].id);
        fscanf(fp, "%s", p[i].name);
        fscanf(fp, "%s", p[i].size);
        fscanf(fp, "%s", p[i].color);
        fscanf(fp, "%d", &p[i].quantity);
        fscanf(fp, "%f", &p[i].price);

    }

    fprintf(fp2,"%d ", n);

    for(i=0; i<n; i++){

        fprintf(fp2,"\n%d ", p[i].id);
        fprintf(fp2,"%s ", p[i].name);
        fprintf(fp2,"%s ", p[i].size);
        fprintf(fp2,"%s ", p[i].color);

        if(p[i].id == id)
            fprintf(fp2,"%d ", quantity);
        else
            fprintf(fp2,"%d ", p[i].quantity);

        fprintf(fp2,"%.2f", p[i].price);

    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void sellProducts(){

    FILE *fp;
    FILE *fp2;

    int n, i, product_quantity;
    char product_name[20], product_color[10], product_size[5];
    float price;

    fp = fopen("Products.txt", "r");

    fscanf(fp, "%d", &n);

    struct product p[n];

    for(i=0; i<n; i++){

        fscanf(fp, "%d", &p[i].id);
        fscanf(fp, "%s", p[i].name);
        fscanf(fp, "%s", p[i].size);
        fscanf(fp, "%s", p[i].color);
        fscanf(fp, "%d", &p[i].quantity);
        fscanf(fp, "%f", &p[i].price);

    }

    fclose(fp);

    printf("Enter the name of the product customer chose= ");
    scanf("%s", product_name);

    for(i=0; i<n; i++){

        //temp = 0;
        if(strcmp(product_name, p[i].name)==0){

            printf("Choose color= ");
            scanf("%s", product_color);

            if(strcmp(product_color, p[i].color)==0){

                printf("Choose a size (S  M  L  XL  XXL  XXXL)= ");
                scanf("%s", product_size);

                if(strcmp(product_size, p[i].size)==0){

                    printf("Quantity= ");
                    scanf("%d", &product_quantity);

                    if(product_quantity <= p[i].quantity){

                        price = (p[i].price * (float)product_quantity) + ((p[i].price * (float)product_quantity) * (7.5/100.0));
                        printf("Your total amount including VAT= %.2f", price);

                        update(p[i].id, (p[i].quantity - product_quantity));

                    }
                    else{

                        printf("Sorry product is unavailable.");
                        break;

                    }

                }
                else{

                    printf("Sorry product is unavailable.");
                    break;

                }

            }
            else{

                printf("Sorry product is unavailable.");
                break;

            }

        }

        else{

            if(i == (n-1)){
              //printf("Sorry product is unavailable.");
              break;
            }
            //temp = 1; was using it so that if the product is unavailable it will send a message.
            //printf("Sorry! The product is unavailable;");
            //break;

        }

    }

}

void main(){

    int n;

    printf("Enter a number= ");
    scanf("%d", &n);

    if(n == 1){
        sellProducts();
        //showProducts();
    }

}
