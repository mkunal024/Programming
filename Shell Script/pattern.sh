>>comm
Write a Shell Script to display a pattern like a right angle triangle using an asterisk. 

The pattern like :

*
**
***
****
comm


 #! /bin/bash
for i in {1..5}
do
for ((  j=0; j<i; j++ ))
do
	echo -n "*"
done
    echo ""
done
