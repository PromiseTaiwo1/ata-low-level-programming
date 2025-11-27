#!/bin/bash

wc -l < 1-input_data.txt

cat 1-file_does_not_exist.txt 2> 1-error_only.log

ls /this/path/is/fake > 1-all_output.log 2>&1

#echo "-- Content of 1-error_only.log --"
cat 1-error_only.log

#echo "-- Content of 1-all_output.log --"
cat 1-all_output.log
