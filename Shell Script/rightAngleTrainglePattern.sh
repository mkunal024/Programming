>>comm
Write a Shell Script to display a pattern like a right angle triangle with a number. 

The pattern like :

1
12
123
1234
comm


 #! /bin/bash
for i in {1..5}
do
for ((  j=1; j<=i; j++ ))
do
	echo -n "$j"
done
    echo ""
done
