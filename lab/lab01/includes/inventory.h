#include "product.h"
#include <limits>


const int MAX_PRODUCTS = 100;


class Inventory {
  private:
    Product products[MAX_PRODUCTS];
    int productCount;

  public:
    Inventory() : productCount(0) {};
    
    int getProductCount();
    int findIndex(int productID);
    bool emptyInventory(int productCount);
    void addProduct(Product product);
    void removeProduct(int productID);
    void updateProduct(int productID);
    void displayInventory();
    double calculateTotalValue(int index);
    Product searchProduct(int productID);
};


#define GET(name, var) \
  do { \
    cout << name << " = "; \
    if (typeid(var) == typeid(string)) { \
      cin >> var; \
    } else { \
      while (true) { \
        if (cin >> var) { \
          break; \
        } else { \
          cout << "Invalid Input. Please enter a valid value for " << name << "." << endl; \
          cout << name << " = "; \
          cin.clear(); \
          cin.ignore(numeric_limits<streamsize>::max(), '\n'); \
        } \
      } \
    } \
  } while (0)


int Inventory::getProductCount() {
  return productCount;
}


int Inventory::findIndex(int productID) {
  for (int i = 0; i < productCount; i++) {
    if (products[i].getProductID() == productID) {
      return i;
    } 
  }

  return -1;
}


bool Inventory::emptyInventory(int productCount) {
  return (productCount == 0) ? (cout << "Inventory is empty" << endl, true) : false;
}


void Inventory::addProduct(Product product) {
  if (findIndex(product.getProductID()) != -1) {
    cout << "Product ID used. Please try again." << endl;
    return;
  }

  if (productCount >= MAX_PRODUCTS) {
    cout << "Inventroy full. Please remove products." << endl;
    return;
  }

  products[productCount] = product;
  productCount++;

  cout << "Product added successfully" << endl;
}
 

void Inventory::removeProduct(int productID) {
  if (emptyInventory(productCount)) {
    return;
  }

  int index = findIndex(productID);

  if (index == -1) {
    cout << "Product not found." << endl;
    return;
  }

  for (int j = index; j < productCount; j++) {
    products[j] = products[j + 1];
  }

  productCount--;
  cout << "Product removed successfully" << endl;
}


void Inventory::updateProduct(int productID) {
  if (emptyInventory(productCount)) {
    return;
  }

  int index = findIndex(productID);

  if (index == -1) {
    cout << "Product not found." << endl;
    return;
  }

  int newQuantity;
  double newPrice;
  GET("New Quantity", newQuantity);
  GET("New Price", newPrice);

  products[index].setQuantity(newQuantity);
  products[index].setPrice(newPrice);

  cout << "Product updated successfully." << endl;          
}


void Inventory::displayInventory() {
  if (emptyInventory(productCount)) {
    return;
  }

  for (int i = 0; i < productCount; i++) {
    products[i].displayProduct();
  }
}


double Inventory::calculateTotalValue(int index) {   
  if (emptyInventory(productCount)) {
    return 0;
  }

  if (index == productCount) {
    cout << " = ";
    return 0;
  }

  double price = products[index].getPrice();
  int quantity = products[index].getQuantity();

  cout << fixed << setprecision(2);
  cout << price << " * " << quantity;

  if (index != (productCount - 1)) {
    cout << " + ";
  }

  index++;
  return (price * quantity) + calculateTotalValue(index);
}


Product Inventory::searchProduct(int productID) {
  if (emptyInventory(productCount)) {
    Product none;
    return none;
  }

  int index = findIndex(productID);

  if (index == -1) {
    cout << "Product not found." << endl;
    Product none;
    return none;
  }

  products[index].displayProduct();
  return products[index];
}