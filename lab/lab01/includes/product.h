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

    int getProductID();
    string getName();
    int getQuantity();
    double getPrice();
    void setProductID(int productID);
    void setName(string name);
    void setQuantity(int quantity);
    void setPrice(double price);
    void displayProduct();
};


int Product::getProductID() {
  return productID;
}

string Product::getName() {
  return name;
}

int Product::getQuantity() {
  return quantity;
}

double Product::getPrice() {
  return price;
}

void Product::setProductID(int productID) {
  this->productID = productID;
}

void Product::setName(string name) {
  this->name = name;
}

void Product::setQuantity(int quantity) {
  this->quantity = quantity;
}

void Product::setPrice(double price) {
  this->price = price;
}

void Product::displayProduct() {
  cout << fixed << setprecision(2);
  cout << "Product ID: " << productID << ", Name: " << name << ", Quantity: " << quantity << ", Price: " << price << endl;
}