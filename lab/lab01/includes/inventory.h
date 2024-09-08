#include "product.h"
#include <limits>

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
          cin.clear(); \
          cin.ignore(numeric_limits<streamsize>::max(), '\n'); \
        } \
      } \
    } \
  } while (0)

const int MAX_PRODUCTS = 100;

class Inventory {
  private:
    Product products[MAX_PRODUCTS];
    int productCount;

  public:
    Inventory() : productCount(0) {};

    int findIndex(int productID) {
      for (int i = 0; i < productCount; i++) {
        if (products[i].getProductID() == productID) {
          return i;
        } 
      }

      return -1;
    }

    void addProduct(Product product) {
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

    void removeProduct(int productID) {
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

    void updateProduct(int productID) {
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

    void displayInventory() {
      for (int i = 0; i < productCount; i++) {
        products[i].displayProduct();
      }
    }

    double calculateTotalValue(int index) {      
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

    Product searchProduct(int productID) {
      int index = findIndex(productID);

      if (index == -1) {
        cout << "Product not found." << endl;
        Product none;
        return none;
      }

      products[index].displayProduct();
      return products[index];
    }
};