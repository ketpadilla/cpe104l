#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Product {
  private:
    int productID;
    string name;
    int quantity;
    double price;
    
  public:
    Product(int productID = 0, string name = "", int quantity = 0, double price = 0.0) : productID(productID), name(name), quantity(quantity), price(price) {};

    int getProductID() {
      return productID;
    }

    string getName() {
      return name;
    }

    int getQuantity() {
      return quantity;
    }

    double getPrice() {
      return price;
    }

    void setProductID(int productID) {
      this->productID = productID;
    }

    void setName(string name) {
      this->name = name;
    }

    void setQuantity(int quantity) {
      this->quantity = quantity;
    }

    void setPrice(double price) {
      this->price = price;
    }

    void displayProduct() {
      cout << fixed << setprecision(2);
      cout << "Product ID: " << productID << ", Name: " << name << ", Quantity: " << quantity << ", Price: " << price << endl;
    }
};