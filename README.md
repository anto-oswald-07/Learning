# Learning
This is where i deploy all my ultra mini projects i build in my learning process

## Console-Based Login and Registration System

A simple yet functional console-based login and registration system implemented in C++.

### Features
- User Registration: Create new user accounts with username and password
- User Login: Authenticate existing users
- User Display: View all registered usernames
- Persistent Storage: User data is saved to a file (users.dat)
- Input Validation: Handles empty inputs and duplicate usernames
- Clean Console Interface: Easy-to-use menu system

### Project Structure
```
.
├── main.cpp        # Main program with menu interface
├── user.h          # User class header
├── user.cpp        # User class implementation
├── auth.h          # Authentication class header
├── auth.cpp        # Authentication class implementation
├── Makefile        # Build configuration
└── README.md       # This file
```

### How to Build
```bash
make
```

### How to Run
```bash
make run
# or
./login_system
```

### How to Clean
```bash
make clean
```

### Usage
1. **Register**: Create a new account by providing a username and password
2. **Login**: Authenticate with your credentials
3. **Display All Users**: View list of all registered usernames
4. **Exit**: Close the application

### Technical Details
- Language: C++11
- Storage: File-based (users.dat)
- Compiler: g++
- Features: Object-oriented design with separate User and Authentication classes
