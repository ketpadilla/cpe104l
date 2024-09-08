#include "includes/inventory.h"

void printMenu();

int main() {
  int productID, quantity;
  string name;
  double price;
  char choice;

  Inventory inventory;

  while (true) {
    system("clear");
    printMenu();
    cin >> choice;
    choice = tolower(choice);

    cout << endl;
    if (choice == 'g')
      break;

    if (choice == 'a') {
      GET("Product ID", productID);
      GET("Name", name);
      GET("Quantity", quantity);
      GET("Price", price);

      Product product(productID, name, quantity, price);
      inventory.addProduct(product);
    }

    if (choice == 'b') {
      GET("Product ID", productID);
      inventory.removeProduct(productID);
    }

    if (choice == 'c') {
      GET("Product ID", productID);
      inventory.updateProduct(productID);
    }

    if (choice == 'd') {
      inventory.displayInventory();
    }

    if (choice == 'e') {
      price = inventory.calculateTotalValue(0);
      cout << price << endl;
    }

    if (choice == 'f') {
      GET("Product ID", productID);
      inventory.searchProduct(productID);
    }

    cout << endl << "Press Enter to continue.";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get(); 
  }

  return 0;
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