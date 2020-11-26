#include <stdio.h>

struct product{

    int id;
    char name[20];
    char size[5];
    char color[10];
    int quantity;
    float price;

};

void deleteProduct(){

FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int i, n, id;

    printf("Input products ID which should be deleted= ");
    scanf("%d", &id);

    fscanf(fp, "%d", &n);

    //fprintf(fp2, "%d ", n);

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

    //Deleting the product and copying product to a temporary file
    fprintf(fp2, "%d", (n-1));
    for(i=0; i<n; i++){

        if(id == (p[i].id)){

            fprintf(fp2,"");
            fprintf(fp2,"");
            fprintf(fp2,"");
            fprintf(fp2,"");
            fprintf(fp2,"");
            fprintf(fp2,"");

        }

        else{

            fprintf(fp2,"\n%d ", p[i].id);
            fprintf(fp2,"%s ", p[i].name);
            fprintf(fp2,"%s ", p[i].size);
            fprintf(fp2,"%s ", p[i].color);
            fprintf(fp2,"%d ", p[i].quantity);
            fprintf(fp2,"%.2f", p[i].price);

        }

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
        deleteProduct();
    else
        printf("pffft");


}
