#include "includes/helper.h"

int main() {
  char choice;
  Inventory inventory;

  while (true) {
    system("clear");
    printMenu();
    getChoice(choice);

    manageInventory(choice, inventory);
    contProgram();
  }

  return 0;
}