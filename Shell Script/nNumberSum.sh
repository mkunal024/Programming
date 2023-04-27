<<comm
 Write a Shell Script to display n terms of natural numbers and their sum. 
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
comm


#!/bin/bash
read -p "Enter the number to find the natural sum : " num
sum=0
echo -n "The first $num natural number is : "
for i in $(seq $num)
do 
	sum=`expr $sum + $i`
	echo -n "$i "
done
	
         echo -e "\n Sum = $sum"   
