# Automated Trash Sorting System

## Project Overview
This C++ program simulates an automated system for sorting trash into three categories: recyclables, compost, and landfill. It utilizes object-oriented programming principles and function pointers to handle item addition to respective categories dynamically.

## Key Features
- **Dynamic Sorting**: Users can add items to specific categories using dedicated methods for recyclables, compost, and landfill.
- **Modular Design**: The system is designed with extensibility in mind, allowing for easy integration of new functionalities or adaptations to different types of waste.
- **Simplicity and Readability**: The codebase uses straightforward C++ constructs, making it accessible for beginners and intermediate developers alike.

## Compilation and Execution
To compile and run this project, you will need a C++ compiler that supports C++11 or higher. Here are the steps:

1. **Compile the Program**:
   Open a terminal or command prompt and navigate to the directory containing the `main.cpp` file. Compile the program using the following command:
   ```bash
   g++ -o TrashSorter main.cpp -std=c++11
   
2. **Running the Program**
   After compilations, run the program with the command ./TrashSorter. This executes the 'TrashSorter' application.

## How to Use
The program starts with an empty sorting system. Users need to interactively add items or modify the main function to instantiate Item objects and categorize them accordingly using the provided methods (addRecyclable, addCompost, addLandfill).

_Example code of adding items:_
        bin.addRecyclable("Plastic Bottle");
        bin.addCompost("Banana Peel");
        bin.addLandfill("Broken Glass");
        
After adding items, the displaySortedItems function can be called to view the categorized items.
