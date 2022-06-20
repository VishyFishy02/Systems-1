/*
BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>

struct Cost {
  float wholesalePrice;
  float retailPrice;
  int wholesaleQuantity;
  int retailQuantity;
};
struct Data {
  char item[50];
  char department[30];
  int stockNumber;
  struct Cost pricing;
};
typedef struct Node {
  struct Data grocery_item;
  struct Node *next;
} Node;

#define IntCharMax 10
#define FloatCharMax 20

int leap(int year);
Node *promptFunctions(Node *head);
int getDay(int month, int day, int *monthsPtr);

Node *readFile(const char* fName1, FILE *inputFile, int today, int year, Node *head);
Node *readItems(FILE *inputFile);
Node *readOneItem(FILE *inputFile);
struct Data setData(FILE* inputFile);

Node *insert(Node *head, Node *item);
void printItems(Node *head, FILE *outputFile);
int countItems(Node *head);

Node *promptForUserOption(Node *head);
int getFuncChoice();
void printTotalRev(Node *head);
float totalRev(Node *head);
void printTotalWholesaleCost(Node *head);
float wholesaleCost(Node *head);
void printCurrentInvestment(Node *head);
float currentInvestment(Node *head);
void printCurrentProfit(Node *head);
float profit(Node *head);
void printItemsSold(Node *head);
int itemsSold(Node *head);
void printAverageProfit(Node *head);
float averageProfit(Node *head);
void printInStock(Node *head);
void printOutOfStock(Node *head);
void printInDepartment(Node *head);
void addItem(Node **ptr2head);
struct Data getItem();
void removeItem(Node **ptr2head);
Node *deleteItem(Node *head, int stockNum);
void freeItems(Node *head);
