🚆 Train Reservation System
A simple console-based C++ application to manage train ticket reservations. This project demonstrates file handling, basic OOP concepts, and a command-line user interface for booking and managing train reservations.

✨ Features
✅ Book Tickets

Enter passenger details and book seats on available trains.

✅ View Reservation Records

See all reservations stored in the system.

✅ Cancel Tickets

Cancel previously booked tickets by entering the relevant details.

✅ Secure File Storage

Uses simple file handling to persist reservation data.

🛠 Technologies Used
C++

Standard Library (<iostream>, <fstream>, <cstdio>, etc.)

Windows console (uses system("cls") for clearing screen)

🚀 Getting Started
✅ Prerequisites
A C++ compiler (like g++ / MinGW on Windows)

Basic familiarity with compiling & running C++ programs

🔧 How to Run
Clone the repository

```bash
Copy
Edit
git clone https://github.com/Jayadityas/Train_reservation_system.git
cd Train_reservation_system
```
Compile the source

```bash
Copy
Edit
g++ Source.cpp -o train_reservation
```
Run the executable

```bash
Copy
Edit
./train_reservation
```

📁 How Data is Stored
Reservation data is saved in a text file called Record.txt in the same directory.

Each booking appends a new record to this file.

When you view records, it reads directly from this file.

🚀 Future Improvements
Add unique booking IDs to simplify cancellations.

Improve file handling (use CSV or JSON formats for easier parsing).

Add seat availability tracking (prevent overbooking).

GUI version (maybe with Qt or a simple web interface).

🤝 Contributing
Pull requests are welcome. For significant changes, please open an issue first to discuss what you would like to change.

⭐ Acknowledgements
Inspired by basic C++ console applications often built as starter projects for learning file I/O and OOP concepts.

📜 License
This project is open-source and available under the MIT License (or update if you use a different license).

