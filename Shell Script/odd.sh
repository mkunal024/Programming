>>comm
Write a Shell Script to display the n terms of odd natural numbers and their sum. 
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
comm


#!/bin/bash
read -p "Enter the interger to find the sum of odd numbers : " num
sum=0
count=0
for (( j=0 ; count<=num ; j++ ))
do
	if (( $j%2 != 0 ))
	then
		sum=`expr $sum + $j`
		echo "$j is odd number"
		count=`expr $count+1`
	fi
done
echo "Sum of the odd numbers upto $num is $sum"

