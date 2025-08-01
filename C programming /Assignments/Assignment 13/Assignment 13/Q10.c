typedef struct {
    int id;
    char name[20];
    int quantity;
    float price;
} Product;
Product storeProduct();   
void displayProduct(Product); 
void main() {
    Product p;

    p=storeProduct();  
    displayProduct(p);   
}
Product  storeProduct() {
	Product p;
    printf("Enter Product ID: ");
    scanf("%d", &p.id);

    printf("Enter Product Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);
    return p;
}

void displayProduct(Product p) {
    printf("\nProduct Details:\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2f\n", p.price);
}
