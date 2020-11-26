#include <stdio.h>

struct product{

    int id;
    char name[20];
    char size[5];
    char color[10];
    int quantity;
    float price;

};

void addProduct(){

    FILE *fp, *fp2, *tf;

    int i, n, id, q;
    char product_name[20], s[5], c[10];
    float pr;

    //Checking if the ID is unique or not

    tf = fopen("Products.txt", "r");

    fscanf(tf, "%d", &n);

    struct product t[n];

    for(i=0; i<n; i++){

        fscanf(tf, "%d", &t[i].id);
        fscanf(tf, "%s", t[i].name);
        fscanf(tf, "%s", t[i].size);
        fscanf(tf, "%s", t[i].color);
        fscanf(tf, "%d", &t[i].quantity);
        fscanf(tf, "%f", &t[i].price);

    }

    printf("Input products ID= ");
    scanf("%d", &id);

    for(i=0; i<n; i++){

            //printf("i= %d; t[i].id= %d", i, t[i].id);

            while(id == t[i].id){

                    printf("Sorry! The ID of the product should be unique. Try again.");
                    printf("Input products ID= ");
                    scanf("%d", &id);

            }

    }

    fclose(tf);

    //Ending

    printf("Enter product name= ");
    scanf("%s", product_name);
    printf("Enter size= ");
    scanf("%s", s);
    printf("Enter the color (Only one color can be added)= ");
    scanf("%s", c);
    printf("Enter the quantity= ");
    scanf("%d", &q);
    printf("Enter the price (Excluding VAT)= ");
    scanf("%f", &pr);

    //Opening the real files
    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    fscanf(fp, "%d", &n);
    n++;

    fprintf(fp2, "%d ", n);

    struct product p[n];

    //Reading from the existing file
    for(i=0; i<n; i++){

        fscanf(fp, "%d", &p[i].id);
        fscanf(fp, "%s", p[i].name);
        fscanf(fp, "%s", p[i].size);
        fscanf(fp, "%s", p[i].color);
        fscanf(fp, "%d", &p[i].quantity);
        fscanf(fp, "%f", &p[i].price);

    }

    //Adding the product and copying product to a temporary file
    for(i=0; i<n; i++){

        if(i == (n-1)){

            fprintf(fp2,"\n%d ", id);
            fprintf(fp2,"%s ", product_name);
            fprintf(fp2,"%s ", s);
            fprintf(fp2,"%s ", c);
            fprintf(fp2,"%d ", q);
            fprintf(fp2,"%.2f", pr);
            break;

        }

        fprintf(fp2,"\n%d ", p[i].id);
        fprintf(fp2,"%s ", p[i].name);
        fprintf(fp2,"%s ", p[i].size);
        fprintf(fp2,"%s ", p[i].color);
        fprintf(fp2,"%d ", p[i].quantity);
        fprintf(fp2,"%.2f", p[i].price);

    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void main(){

    int n;

    printf("Enter a number= ");
    scanf("%d", &n);

    if(n == 1)
        addProduct();
    else
        printf("pffft");


}
