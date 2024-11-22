# Motorcycle Inventory and Purchase Management Project
This C++ project provides a solution to manage an inventory of electric and gasoline motorcycles, search for specific models, check stock, and allow customers to make purchases. It implements object-oriented programming (OOP) principles, focusing on modular and organized design.

The main functionalities of this project include
Inventory management for electric and gasoline motorcycles, with functions to add, remove, and search.
Stock verification for specific motorcycles.
Making purchases and calculating the total.
Displaying inventory and purchase details.

# Context: 
This project simulates a motorcycle dealership system where administrators can manage their inventory of motorcycles, and customers can browse available motorcycles, verify stock, and make purchases. The system aims to streamline inventory management and ensure an organized approach to tracking motorcycle sales.

The project leverages Object-Oriented Programming (OOP) principles in C++ to demonstrate key concepts such as inheritance, encapsulation, polymorphism, and modularity. It is designed as a console-based application, serving as a foundation for more complex dealership management systems, such as web or desktop applications.

# Goals:
The primary goal of this project is to design and implement a motorcycle dealership management system using C++ that provides a simple yet robust way to:

Organize and maintain an inventory of electric and gasoline motorcycles.
Streamline the sales process by associating purchases with customers and tracking sold motorcycles.
Serve as a learning tool for Object-Oriented Programming (OOP) concepts such as inheritance, encapsulation, polymorphism, and modularity.
This project aims to:

Simulate real-world dealership operations, such as tracking stock, searching for products, and handling transactions.
Provide an educational foundation for creating inventory-based systems in any domain.
Promote clean and modular programming practices.

# Features:
-Inventory Management
Add and remove motorcycles (electric and gasoline) from the inventory.
Search for specific motorcycle models by their name.
List all available motorcycles in the inventory.
Verify stock availability for a particular model.
-Store Management
Log purchases made by customers, including the motorcycles purchased.
Calculate the total purchase amount dynamically based on selected motorcycles.
Display detailed purchase information, including customer details and the motorcycles purchased.

# Project design 
MotorcycleInventory/
│
│
├── Moto.h             # Base class Moto
├── Moto.cpp           # Moto implementation
│
├── MotoElectrica.h    # Electric motorcycle class definition
├── MotoElectrica.cpp  # Electric motorcycle class implementation
│
├── MotoGasolina.h     # Gasoline motorcycle class definition
├── MotoGasolina.cpp   # Gasoline motorcycle class implementation
│
├── Inventario.h       # Inventory class definition
├── Inventario.cpp     # Inventory class implementation
│
├── Compra.h           # Purchase class definition
├── Compra.cpp         # Purchase class implementation
│
├── main.cpp           # Main program to execute the project
│
└── README.md          # Project documentation


![imagen](https://github.com/user-attachments/assets/76b703e0-e368-44c1-b366-ba2731220513)
