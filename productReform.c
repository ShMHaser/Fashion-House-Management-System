#include <stdio.h>

struct product{

    int id;
    char name[20];
    char size[5];
    char color[10];
    int quantity;
    float price;

};

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

        //fprintf(fp2,"%s", p[i].quantity);
        fprintf(fp2,"%.2f", p[i].price);


    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void main(){

    int n, id, quantity;

    printf("Enter a number= ");
    scanf("%d", &n);
    printf("Id= ");
    scanf("%d", &id);
    printf("Q= ");
    scanf("%d", &quantity);

    if(n == 1){
        printf("Any");
        update(id, quantity);
    }
    else{
        printf("pffft");
    }


}
