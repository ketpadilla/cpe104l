#include "inventory.h"
#include <cstdlib>

void inputProductID(Inventory inventory, int& productID) {
  if (inventory.getProductCount() != 0) {
    GET("Product ID", productID);
  }

  return;
}

char getChoice(char& choice) {
  cin >> choice;
  cout << endl;

  return tolower(choice);
}

void contProgram() {
  cout << endl << "Press Enter to continue.";
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cin.get(); 
}

void printMenu() {
  cout << "Inventory Management System" << endl;
  cout << "a. Add a product" << endl;
  cout << "b. Remove a product" << endl;
  cout << "c. Update product information" << endl;
  cout << "d. View all products" << endl;
  cout << "e. Calculate total inventory value" << endl;
  cout << "f. Search for a product by ID" << endl;
  cout << "g. Exit" << endl << endl;
  cout << "Enter your choice: ";
}

Inventory manageInventory(char choice, Inventory &inventory) {
  int productID, quantity;
  string name;
  double price;

  Product product;

  switch (choice) {
    case 'a':
      GET("Product ID", productID);
      GET("Name", name);
      GET("Quantity", quantity);
      GET("Price", price);

      product.setProductID(productID);
      product.setName(name);
      product.setQuantity(quantity);
      product.setPrice(price);

      inventory.addProduct(product);
      break;
    case 'b':
      inputProductID(inventory, productID);
      inventory.removeProduct(productID);

      break;
    case 'c':
      inputProductID(inventory, productID);
      inventory.updateProduct(productID);
    
      break;
    case 'd':
      inventory.displayInventory();

      break;
    case 'e':
      price = inventory.calculateTotalValue(0);
      cout << price << endl;
    
      break;
    case 'f':
      inputProductID(inventory, productID);
      inventory.searchProduct(productID);
    
      break;
    case 'g':
      system("clear");
      cout << "Exiting Program." << endl;
      exit(0);
    
      break;
  }

  return inventory;
}