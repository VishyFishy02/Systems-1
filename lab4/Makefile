# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED
# TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH
# RESPECT TO THIS ASSIGNMENT.

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c

all: lab4.zip lab4

lab4.zip: Makefile lab4.h lab4readme main.c addItem.c averageProfit.c countItems.c currentInvestment.c currentProfit.c getDay.c getFuncChoice.c insert.c itemsSold.c leap.c printInDepartment.c printInStock.c printItems.c printOutOfStock.c promptFunctions.c readFile.c readItems.c readOneItem.c removeItem.c setData.c totalRev.c totalWholesaleCost.c freeItems.c
	zip Makefile lab4.h lab4readme main.c addItem.c averageProfit.c countItems.c currentInvestment.c currentProfit.c getDay.c getFuncChoice.c insert.c itemsSold.c leap.c printInDepartment.c printInStock.c printItems.c printOutOfStock.c promptFunctions.c readFile.c readItems.c readOneItem.c removeItem.c setData.c totalRev.c totalWholesaleCost.c freeItems.c

lab4: main.o addItem.o averageProfit.o countItems.o currentInvestment.o currentProfit.o getDay.o getFuncChoice.o insert.o itemsSold.o leap.o printInDepartment.o printInStock.o printItems.o printOutOfStock.o promptFunctions.o readFile.o readItems.o readOneItem.o removeItem.o setData.o totalRev.o totalWholesaleCost.o freeItems.o
	gcc main.o addItem.o averageProfit.o countItems.o currentInvestment.o currentProfit.o getDay.o getFuncChoice.o insert.o itemsSold.o leap.o printInDepartment.o printInStock.o printItems.o printOutOfStock.o promptFunctions.o readFile.o readItems.o readOneItem.o removeItem.o setData.o totalRev.o totalWholesaleCost.o freeItems.o -o lab4

main.o: main.c lab4.h
	gcc $(gcc_opt) main.c

printInStock.o: printInStock.c lab4.h
	gcc $(gcc_opt) printInStock.c

addItem.o: addItem.c lab4.h
	gcc $(gcc_opt) addItem.c

averageProfit.o: averageProfit.c lab4.h
	gcc $(gcc_opt) averageProfit.c

countItems.o: countItems.c lab4.h
	gcc $(gcc_opt) countItems.c

currentInvestment.o: currentInvestment.c lab4.h
	gcc $(gcc_opt) currentInvestment.c

currentProfit.o: currentProfit.c lab4.h
	gcc $(gcc_opt) currentProfit.c

getDay.o: getDay.c lab4.h
	gcc $(gcc_opt) getDay.c

getFuncChoice.o: getFuncChoice.c lab4.h
	gcc $(gcc_opt) getFuncChoice.c

insert.o: insert.c lab4.h
	gcc $(gcc_opt) insert.c

itemsSold.o: itemsSold.c lab4.h
	gcc $(gcc_opt) itemsSold.c

leap.o: leap.c lab4.h
	gcc $(gcc_opt) leap.c

printInDepartment.o: printInDepartment.c lab4.h
	gcc $(gcc_opt) printInDepartment.c

printItems.o: printItems.c lab4.h
	gcc $(gcc_opt) printItems.c

printOutOfStock.o: printOutOfStock.c lab4.h
	gcc $(gcc_opt) printOutOfStock.c

promptFunctions.o: promptFunctions.c lab4.h
	gcc $(gcc_opt) promptFunctions.c

readFile.o: readFile.c lab4.h
	gcc $(gcc_opt) readFile.c

readItems.o: readItems.c lab4.h
	gcc $(gcc_opt) readItems.c

readOneItem.o: readOneItem.c lab4.h
	gcc $(gcc_opt) readOneItem.c

removeItem.o: removeItem.c lab4.h
	gcc $(gcc_opt) removeItem.c

setData.o: setData.c lab4.h
	gcc $(gcc_opt) setData.c

totalRev.o: totalRev.c lab4.h
	gcc $(gcc_opt) totalRev.c

totalWholesaleCost.o: totalWholesaleCost.c lab4.h
	gcc $(gcc_opt) totalWholesaleCost.c

freeItems.o: freeItems.c lab4.h
	gcc $(gcc_opt) freeItems.c

clean:
	rm -rf *.o lab4 lab4.zip
