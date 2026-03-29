# Hospital Appointment Management System

A C++ program for managing hospital appointments using priority queues implemented with linked lists. This system allows hospitals to efficiently manage patient appointments based on the severity of their medical conditions.

## Features

- **Add Patient**: Register new patients with their personal details and medical condition priority
- **Delete Patient**: Remove the highest priority patient after appointment
- **Display Appointments**: View all scheduled appointments in priority order
- **Priority-Based Queue**: Patients are automatically sorted by medical urgency (1-9 scale)
- **Patient Details**: Store registration number, name, age, blood group, and disease type

## Disease Priority Levels

1. Heart attack (Highest Priority)
2. Severe wound/Bleeding
3. Cancer
4. Chest pain
5. Fracture
6. Diabetes Checkup
7. Infection
8. Viral Fever
9. Common Cold/Headache (Lowest Priority)

## Requirements

- C++ Compiler (GCC, Visual Studio, etc.)
- Standard C++ libraries (included with compiler)

## How to Compile and Run

### Using GCC (Linux/Mac):
```bash
g++ "Hospital Appointment Management System.cpp" -o hospital_system
./hospital_system
```

### Using Visual Studio (Windows):
1. Create a new C++ Console Application project
2. Copy the code into the main source file
3. Build and run the project

### Using Command Prompt (Windows):
```cmd
g++ "Hospital Appointment Management System.cpp" -o hospital_system.exe
hospital_system.exe
```

## Usage

1. Run the compiled program
2. Choose from the menu options:
   - **1. Add a patient**: Enter patient details and disease priority
   - **2. Delete a record**: Remove the next patient in queue
   - **3. Display all appointments**: View current appointment queue
   - **4. Exit**: Close the program

## Data Structure Used

- **Linked List**: For implementing the priority queue
- **Priority Queue**: Patients are ordered by medical urgency
- **Node Structure**: Contains patient information (name, age, priority, registration number, blood group)

## Academic Information

- **Subject**: Data Structures
- **Subject Code**: 202040301
- **Project Type**: Mini Project
- **Developed By**: HARSHIL PATEL (12202040501026)

## Contributing

This is an academic project. For educational purposes only.

## License

This project is for educational use only.</content>
<parameter name="filePath">d:\Harshil College\sem 3\DS\README.md
