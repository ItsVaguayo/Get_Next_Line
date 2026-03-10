# get_next_line

**get_next_line** is a project I developed as part of my journey through 42, with the goal of implementing a C function able to read from a file descriptor line by line. This function returns a new line on each call, efficiently managing memory and intermediate buffers. One of the main challenges was handling partial reads and preserving leftover data between successive calls, ensuring that each line is delivered completely.

My solution is designed to work correctly with any valid file descriptor and properly handles special cases such as end-of-file (EOF) and various errors. I achieved all this while respecting strict constraints on allowed functions. Through this project, I deepened my understanding of static variables, buffer management, and low-level file I/O operations in C.

---

## 📁 Project Structure

- [`get_next_line.c`](https://github.com/ItsVaguayo/Get_Next_Line/blob/main/get_next_line.c): Contains the main implementation of the line reading function.
- [`get_next_line.h`](https://github.com/ItsVaguayo/Get_Next_Line/blob/main/get_next_line.h): Header file with definitions, declarations, and required libraries.
- [`get_next_line_utils.c`](https://github.com/ItsVaguayo/Get_Next_Line/blob/main/get_next_line_utils.c): Auxiliary functions that support the main functionality.

---

## ⚙️ Compilation

To manually compile the files for this project, I usually use the following command:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c -o gnl
```
> You can change the value of `BUFFER_SIZE` to suit your needs.

---

## 🚀 Usage

Include the header file in your own program and use the `get_next_line` function by passing an open file descriptor in read mode.  
Each time you call the function, you will receive the next available line, until you reach the end of the file.

---

This project was completed as part of the 42 curriculum.
