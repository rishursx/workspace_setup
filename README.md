# workspace_setup

This repo is basically a collection of templates for competitive programming and some scripts that can be used to automate compilation and exectution of C++ programs with dedicated input and output files.

Here is how you can use this setup

first, either git clone this repo or download and extract the zip file.

the file "host_run.cpp" is the file in which you will write your code, "in.txt" will take the sample input(if any), and output will be produced in the file "out.txt".

After you populate the code file and input, execute "./run.sh". this will automatically compile the code, and execute the executable file by routing input to the executable from "in.txt" and pushing the output generated to the "out.txt".


When you are done with the program and you want to do some new code, "reset.sh" will come into picture, it will save your current code in "temp/backup_host.cpp" for accidental code recovery. And it will push a fresh copy of template into your "host_run.cpp".

In case you want to use your own custom template, just replace "temp/template_backup.cpp" with your own template.