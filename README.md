Library Management System
A simple C++ project to demonstrate how Inheritance and Code Reuse work.

Project Overview
This system manages different types of library items (Books and Magazines). It uses a parent class to store common data and child classes to store specific details.

Features
Base Class (Item): Stores ID, Title, and Availability.

Book Class: Inherits from Item; adds Author name.

Magazine Class: Inherits from Item; adds Issue Number.

Operations:

Display item details.

Issue an item (marks it unavailable).

Return an item (marks it available).

Fine System: Calculates a fine if the item is returned late.

Concepts Used
Inheritance: To avoid writing the same code for Books and Magazines.

Protected Access: To allow child classes to access parent data while keeping it private from the outside.

Member Initializers: Used in constructors for efficient variable setup.
