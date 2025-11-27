#!/bin/bash

# Use a pipeline to process the data
cat 2-data.txt | sort | uniq -i | wc -l
