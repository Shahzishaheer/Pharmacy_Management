# Pharmacy Management System

## Overview

This is a simple console-based Pharmacy Management System implemented in C++. It provides basic functionalities for managing medicines, viewing records, and generating bills.

## Features

* **Medicine Management:**
    * Display a list of available medicines with their IDs, types, names, and prices.
    * Allow users to input medicine names and check for availability.
* **Medicine Records:**
    * Display a record of medicines, including their IDs, names, manufacturing dates (MFD), and expiry dates (EXP).
* **Bill Generation:**
    * Generate bills for customer purchases.
    * Calculate the total amount, apply discounts based on purchase thresholds, and display the final amount.

## How to Use

1. **Compile the Code:**
   - Make sure you have a C++ compiler installed (e.g., g++).
   - Compile the `Pharmacymanagement.cpp` file:
     ```bash
     g++ "Pharmacymanagement.cpp" -o pharmacy_management
     ```

2. **Run the Program:**
   - Execute the compiled file:
     ```bash
     ./pharmacy_management
     ```

3. **Navigate the Menu:**
   - The program will present a menu with the following options:
     - Enter medicine and baby food
     - Medicine record
     - Bill generate
     - To EXIT....
   - Choose an option by entering the corresponding number.

## Example Usage

1. **View Available Medicines:**
   - Select option 1 from the main menu.
   - The program will display a list of available medicines.

2. **Generate a Bill:**
   - Select option 3 from the main menu.
   - Enter the bill number.
   - Enter the names, quantities, and prices of medicines and other products.
   - The program will generate a bill with the total amount, any applicable discounts, and the final amount.

## Future Improvements

* **Data Persistence:** Implement a way to store medicine data and records persistently (e.g., using files or a database).
* **User Authentication:** Add user login and authentication to restrict access to certain features.
* **Inventory Management:** Include features to track medicine stock levels, reorder points, and generate inventory reports.
* **Graphical User Interface (GUI):** Develop a user-friendly graphical interface instead of the console-based interface.

## Contributing

Contributions are welcome! If you find any bugs or have suggestions for improvements, please feel free to open an issue or submit a pull request.

