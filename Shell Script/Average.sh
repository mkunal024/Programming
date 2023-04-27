>>comm
Write a Shell Script to read 10 numbers from the keyboard and find their sum and average.
comm

#!/bin/bash
sum=0
echo "Enter 10  intergers to find the sum of those Number : "
for i in {1..10}
do
	read -p "Enter $i number : " num
	sum=`expr $sum + $num`
done
echo  $sum
