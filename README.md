<h1 align="center">Holberton School: Custom Printf Project</h1>
<h4 align="center"><i>Created by Elijah Poole and Courtney Graham</i></h4>
<p align="center"><i>Fall 2023</i></p>
<h3>Introduction:</h3>
<p>This project is intended to recreate a custom version of the C standard library function PRINTF which prints formatted output and returns the amount of bytes used to print to standard output.
It accomplishes this by utilizing an array of function pointers and loops to iterate through input, searching for format specifiers and then executing functions based on that specifier.</p>
<details>
  <summary><b>FILES:</b></summary>
  <ul>
    <li><b>MAIN.H</b> - header file for printf project. This header file includes the initialization of our structure data type and contains prototypes for all of our functions included in our array of function pointers.</li>
    <li><b><u>FUNCTIONS.C</b></u> - functions for converting certain special characters to and writing them to standard output</li>
    <li><b><u>PRINTDIG.C</b></u> - file for printdigit function that was too long to include in functions file</li>
    <li><b>SPEC_FUNCTIONS.C</b> - this file further identifies the structure full of pointer functions and executes the function depending on the special character</li>
    <li><b>_PRINTF.C</b> - this is our custom _printf function which should return the amount of bytes written to standard output</li>
  </ul>
</details>
<details>
  <summary><b>FORMAT SPECIFIERS:</b></summary>
  <ul>
    <li><code>%c</code>: print character</li>
    <li><code>%s</code>: print string</li>
    <li><code>%\0</code>: print null</li>
    <li><code>%i</code>: print digit</li>
    <li><code>%d</code>: print digit</li>
  </ul>
</details>
<h3 align="center">Flowchart (attempt)</h3>
<img src="https://github.com/grahacr/holbertonschool-printf/assets/132097902/e36c3fb2-290a-4c1a-80a7-1f73540bf1d1">
