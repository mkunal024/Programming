>>comm
Write a Shell Script to display the multiplication table for a given integer. 
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
comm


#!/bin/bash
read -p "Enter the integer to get  the table of : " a
for i in {1..10}
do
	sum=`expr $a \* $i`
	echo "$a * $i = $sum"
done
 
