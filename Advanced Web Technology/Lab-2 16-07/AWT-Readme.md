# Advanced Web Technologies

This document provides a basic overview of the core technologies used in server-side web development, particularly focusing on **PHP**, **XAMPP**, **Apache Server**, and **MySQL**.

---

## 📌 What is PHP?

**PHP (Hypertext Preprocessor)** is a widely-used open-source server-side scripting language. It is embedded within HTML and is especially suited for web development.

### ✅ Key Features:
- Open-source and free to use
- Interpreted at runtime on the server
- Embedded into HTML
- Can interact with databases (commonly MySQL)
- Platform-independent (works on Windows, Linux, macOS)

### 🛠 How PHP Works:
1. The user sends a request via the browser.
2. The web server (like Apache) detects the `.php` file.
3. The PHP engine processes the code on the server.
4. Only the **output (HTML)** is sent back to the client, not the PHP code.
5. PHP can connect to a database (e.g., MySQL), fetch or store data, and generate dynamic content.

---

## 🔧 What is XAMPP?

**XAMPP** is a free and open-source cross-platform web server solution package. It provides an easy way to set up a local web server on your computer.

### ✨ Components of XAMPP:
- **X** = Cross-platform
- **A** = Apache (Web Server)
- **M** = MySQL (Database)
- **P** = PHP (Scripting Language)
- **P** = Perl (Optional scripting language)

### 🚀 How to Use XAMPP:
1. Download and install XAMPP from [apachefriends.org](https://www.apachefriends.org/).
2. Launch **XAMPP Control Panel**.
3. Start the **Apache** and **MySQL** modules.
4. Place your PHP files inside the `htdocs` folder (`C:/xampp/htdocs`).
5. Access your project in the browser using:  
   `http://localhost/yourprojectname/filename.php`

---

## 🌐 What is Apache Server?

**Apache HTTP Server** is an open-source web server software that serves web content over the internet or a local network.

### ✅ Why Use Apache?
- It processes client requests and delivers web pages.
- It interprets and runs `.php` files using the PHP engine.
- Compatible with various modules (PHP, SSL, etc.)
- Secure, reliable, and flexible

---

## 🗃️ What is MySQL?

**MySQL** is an open-source relational database management system (RDBMS).

### 🧩 Features:
- Structured storage of data in tables
- Uses SQL (Structured Query Language) for operations
- Can be accessed by PHP to perform **CRUD operations**:
  - Create
  - Read
  - Update
  - Delete

### 🔄 PHP + MySQL Workflow:
1. PHP script connects to the MySQL server using `mysqli` or `PDO`.
2. Sends SQL queries to the database.
3. Fetches the result and processes it.
4. Displays the result to the user via HTML.

---

## ✅ Summary

| Technology | Description |
|------------|-------------|
| PHP        | Server-side scripting language for dynamic websites |
| XAMPP      | Local server with PHP, MySQL, Apache |
| Apache     | Web server to serve PHP pages |
| MySQL      | Database system for storing website data |

---

⚡ **Tip**: Always restart Apache after editing your configuration or PHP files for changes to take effect.
