#include <stdio.h>

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

    printf("\n\nNumber of products available in store= %d\n", n);

}

void main(){

    int n;

    printf("Enter a number= ");
    scanf("%d", &n);

    if(n == 1)
        showProducts();
    else
        printf("pffft");


}
