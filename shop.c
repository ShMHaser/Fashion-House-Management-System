#include <stdio.h>

struct product{

    int id;
    char name[20];
    char size[5];
    char color[10];
    int quantity;
    float price;

};

void updateProductPrice(){

    FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int n, i, id;
    float price;

    printf("Input product ID= ");
    scanf("%d", &id);
    printf("Input the updated product price= ");
    scanf("%f", &price);

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
        fprintf(fp2,"%d ", p[i].quantity);
        if(p[i].id == id){
            fprintf(fp2,"%.2f", price);
        }
        else{
            fprintf(fp2,"%.2f", p[i].price);
        }

    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void updateProductQuantity(){

    FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int n, i, id;
    int quantity;

    printf("Input product ID= ");
    scanf("%d", &id);
    printf("Input the updated product quantity= ");
    scanf("%d", &quantity);

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
        if(p[i].id == id){
            fprintf(fp2,"%d ", quantity);
        }
        else{
            fprintf(fp2,"%d ", p[i].quantity);
        }
        fprintf(fp2,"%.2f", p[i].price);

    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void updateProductColor(){

    FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int n, i, id;
    char color[10];

    printf("Input product ID= ");
    scanf("%d", &id);
    printf("Input the updated product color= ");
    scanf("%s", color);

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
        if(p[i].id == id){
            fprintf(fp2,"%s ", color);
        }
        else{
            fprintf(fp2,"%d ", p[i].color);
        }
        fprintf(fp2,"%d ", p[i].quantity);
        fprintf(fp2,"%.2f", p[i].price);

    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void updateProductSize(){

    FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int n, i, id;
    char size[5];

    printf("Input product ID= ");
    scanf("%d", &id);
    printf("Input the updated product size= ");
    scanf("%s", size);

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
        if(p[i].id == id){
            fprintf(fp2,"%s ", size);
        }
        else{
            fprintf(fp2,"%d ", p[i].size);
        }
        fprintf(fp2,"%s ", p[i].color);
        fprintf(fp2,"%d ", p[i].quantity);
        fprintf(fp2,"%.2f", p[i].price);

    }

    fclose(fp);
    fclose(fp2);

    remove("Products.txt");
    rename("temp.txt", "Products.txt");

}

void updateProductName(){

    FILE *fp, *fp2;

    fp = fopen("Products.txt", "r");
    fp2 = fopen("temp.txt", "w");

    int n, i, id;
    char name[20];

    printf("Input product ID= ");
    scanf("%d", &id);
    printf("Input the updated product name= ");
    scanf("%s", name);

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
        if(p[i].id == id){
            fprintf(fp2,"%s ", name);
        }
        else{
            fprintf(fp2,"%d ", p[i].name);
        }
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
                    printf("\nInput products ID= ");
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

void updateInventory(int id, int quantity){

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

                        updateInventory(p[i].id, (p[i].quantity - product_quantity));

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

void showProducts(){

    FILE *fp;

    int n, i, sum=0;
    float sum2=0.0;

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
    printf("ID\tName\t\tSize\t\tColor\t\tQuantity\t\tPrice\n");
    printf("__\t____\t\t____\t\t_____\t\t________\t\t_____\n");
    for(i=0; i<n; i++){

        printf("\n%d.\t", p[i].id);
        printf("%s\t\t", p[i].name);
        printf("%s\t\t", p[i].size);
        printf("%s\t\t", p[i].color);
        printf("%d\t\t", p[i].quantity);
        printf("\t%.2f", p[i].price);

    }

    printf("\n\nNumber of types of products available in store= %d\n", n);

    for(i=0; i<n; i++){

        sum = sum + p[i].quantity;

    }
    printf("Total number of products available in store= %d\n", sum);

    for(i=0; i<n; i++){

        sum2 = sum2 + (p[i].price * p[i].quantity);

    }
    printf("Gross amount of total products= %.2f\n", sum2);

}

int Exit(){
    return 0;
}

void Sell(){

    sellProducts();
    printf("\nSale successful!\n");

    int op;
    printf("\nPress 1 to return to menu or 2 to exit\n");
    scanf("%d",&op);
    switch(op){
        case 1: Menu();
        break;

        case 2: Exit();
        break;
    }
}

void Show(){

    showProducts();

    int op;
    printf("\nPress 1 to return to menu or 2 to Inventory or 3 to Exit\n");
    scanf("%d",&op);
    switch(op){
        case 1: Menu();
        break;

        case 2: Inventory();
        break;

        case 3: Exit();
        break;

    }
}
void Menu(){
    int op;
    printf("Menu:\n");
    printf("\t1: Show Products\n\t2: Sell Products\n\t3: Inventory\n\t4: Exit\n");
    printf("Choose an option,Please:\n");
    scanf("%d",&op);
    switch(op){
        case 1: Show();
        break;

        case 2: Sell();
        break;

        case 3: Inventory();
        break;

        case 4: Exit();
        break;

    }
}

void Add(){

    addProduct();
    printf("\nA new product has been added to your inventory.\n");

    printf("\nPress 1 to return to Inventory or 2 to exit\n");
    int op;
    scanf("%d",&op);
    switch(op){
        case 1: Inventory();
        break;

        case 2: Exit();
        break;
    }

}

void Delete(){

    deleteProduct();
    printf("\nYour product has been deleted.\n");

    int op;
    printf("\nPress 1 to return to Inventory or 2 to exit\n");
    scanf("%d",&op);
    switch(op){
        case 1: Inventory();
        break;

        case 2: Exit();
        break;
    }
}

void productUpdate(){

    int op2;

    printf("\nChoose what do you want to upgrade:\n");
    printf("\t1: Product Name\n\t2: Product Size\n\t3: Product Color\n\t4: Product Quantity\n\t5: Product Prize\n");
    scanf("%d",&op2);
    switch(op2){
        case 1: updateProductName();
        break;

        case 2: updateProductSize();
        break;

        case 3: updateProductColor();
        break;

        case 4: updateProductQuantity();
        break;

        case 5: updateProductPrice();
        break;

    }

    printf("\nYour product has been updated.\n");
    int op;
    printf("\nPress 1 to return to Inventory or 2 to exit\n");
    scanf("%d",&op);
    switch(op){
        case 1: Inventory();
        break;

        case 2: Exit();
        break;
    }
}

void Inventory(){
    int op;
    printf("Choose your options,Please:\n");
    printf("\t1: Add Product\n\t2: Delete Product\n\t3: Update Product Info\n\t4: Menu\n\t5: Exit\n");
    scanf("%d",&op);
    switch(op){
        case 1: Add();
        break;
        case 2: Delete();
        break;
        case 3: productUpdate();
        break;
        case 4: Menu();
        break;
        case 5: Exit();
        break;
        default:
        Exit();
    }
}

int main()
{

    printf("\t\t\t***Welcome To Shop Management System***\n");
    printf("________________________________________________________________________________\n");

    int option;
    printf("Choose your options,Please:\n\t");
    printf("1: Menu\n\t2: Inventory\n\t3: Exit\n");
    scanf("%d",&option);

    switch(option){
        case 1: Menu();
        break;
        case 2: Inventory();
        break;
        case 3: Exit();
        break;
        default:
        Exit();
    }
    return 0;

}
