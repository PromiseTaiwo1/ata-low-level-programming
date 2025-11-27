#!/bin/bash

# Print to stdout
echo "Hello, World!"

# Overwrite the file with the first line
echo "First line" > 0-first_output.txt

# Append the second line to the file
echo "Second line" >> 0-first_output.txt

# Display the content of the file
cat 0-first_output.txt
