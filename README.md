# 📘 Aadhaar Directory – CSV-Based Lookup in C++

A simple C++ project to manage and query Aadhaar data using a CSV input file. This tool supports basic search and filter operations on Aadhaar directory data, with efficient lookup using a Trie.

![image](https://github.com/user-attachments/assets/65cdf129-1425-468e-8bad-708c4e077442)

## 🚀 Features

- Read Aadhaar data from a CSV file  
- Store data in appropriate data structures (Trie)  
- Search by Aadhaar number  
- Filter by city or state  
- Validate data entries  
- High performance using standard C++ STL

## ⚙️ How to Run

### 1. Clone the Repository

git clone https://github.com/yourusername/aadhaar-directory.git  
cd aadhaar-directory

### 2. Build the Project

g++ main.cc -o aadhaar_lookup

### 3. Run with a CSV File

./aadhaar_lookup

## 🧠 Example Queries

- Search by Aadhaar Number  
- Filter by City or State  
- List all entries over a certain age

## 🛠 Tech Stack

- Language: C++12  
- Libraries: STL (fstream, string)  
- Data Structure: Trie for fast Aadhaar number lookup

## 📁 Project Structure

aadhaar-directory/  
├── main.cpp        # Main logic  
├── AadhaarNumbers.csv        # Sample Aadhaar data  
└── README.md       # Project documentation


