#include "inventory.h"


void inputProductID(Inventory inventory, int& productID) {
  if (inventory.getProductCount() != 0) {
    GET("Product ID", productID);
  }

  return;
}


void getChoice(int& choice) {
  string input;
  getline(cin, input);

  if (!input.empty()) {
    choice = int(input[0] - '0');
  } else {
    choice = -1;
  }
}


void contProgram() {
  cout << endl << "Press Enter to continue.";
  cin.get(); 
}


void printMenu() {
  cout << "Inventory Management System" << endl;
  cout << "\033[31m 1. \033[0m Add a product" << endl;
  cout << "\033[31m 2. \033[0m Remove a product" << endl;
  cout << "\033[31m 3. \033[0m Update product information" << endl;
  cout << "\033[31m 4. \033[0m View all products" << endl;
  cout << "\033[31m 5. \033[0m Calculate total inventory value" << endl;
  cout << "\033[31m 6. \033[0m Search for a product by ID" << endl;
  cout << "\033[31m 7. \033[0m Exit" << endl << endl;
  cout << "Enter your choice: ";
}


Inventory manageInventory(int choice, Inventory &inventory) {
  int productID, quantity;
  string name;
  double price;

  Product product;

  switch (choice) {
    case 1:
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
    case 2:
      inputProductID(inventory, productID);
      inventory.removeProduct(productID);

      break;
    case 3:
      inputProductID(inventory, productID);
      inventory.updateProduct(productID);
    
      break;
    case 4:
      inventory.displayInventory();

      break;
    case 5:
      price = inventory.calculateTotalValue(0);
      cout << price << endl;
    
      break;
    case 6:
      inputProductID(inventory, productID);
      inventory.searchProduct(productID);
    
      break;
    case 7:
      system("clear");
      cout << "Exiting Program." << endl;
      exit(0);
    
      break;
  }

  return inventory;
}