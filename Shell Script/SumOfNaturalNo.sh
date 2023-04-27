#Write a Shell Script to compute the sum of the first 10 natural numbers. 

#!/bin/bash
sum=0
for i in {1..10}
do 
	sum=`expr $sum + $i`
	
done
	echo $sum
