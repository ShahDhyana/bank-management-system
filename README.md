This C++ program is a Bank Management System that demonstrates the fundamental concepts of Object-Oriented Programming (OOP), specifically inheritance, classes, and encapsulation.

The system allows users to manage two types of bank accounts: Saving and Current.

Key Features
Account Categorization: Users can choose between a Saving or Current account at the start of the session.

Deposit & Interest:

Saving Accounts: Automatically calculate and add a 2% interest to the balance upon every deposit.

Current Accounts: Standard deposit functionality without interest.

Withdrawal Rules:

Saving Accounts: Requires a minimum balance of 500 to perform a withdrawal.

Current Accounts: Requires a minimum balance of 1000 to perform a withdrawal.

Search Functionality: Transactions (Deposit, Withdraw, Display) are performed by searching for a specific account number within the system.

Data Display: Ability to view individual account balances or list all registered account details at once.

Class Structure
The program uses a hierarchical structure to organize data:

Base Class (account): Stores general information shared by all accounts, such as Customer Name, Account Number, and Account Type.

Derived Class (saving_account): Inherits from account and adds specific logic for interest calculation and saving-specific withdrawal limits.

Derived Class (current_account): Inherits from account and handles business-style transactions with a higher minimum balance requirement.

Technical Implementation
Language: C++

Concepts Used: * Inheritance (Single Inheritance)

Arrays of Objects (to store multiple customers)

Access Specifiers (Private/Public)

Switch-case menus for user interaction

How to Use
Run the program and choose the account type (S for Saving, C for Current).

Input details for 3 initial customers.

Use the menu to deposit money, withdraw funds, or check your balance by entering the unique Account Number.

