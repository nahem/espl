#!/usr/bin/python
import csv
import sys
average = 0
input = file(sys.argv[1])
num_of_students = 0
print input.next(),
for line in input:
  print line,
  array = line.split(',')
  average = average + int(array[2])
  num_of_students += 1
average = float(average)/num_of_students
print average


  
  
  
  
    
    
  
  