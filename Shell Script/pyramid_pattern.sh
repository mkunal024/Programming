<<comm
Write a Shell Script to make a pyramid pattern with numbers increased by 1. 

   1 
  2 3 
 4 5 6 
7 8 9 10 
comm
#! /bin/bash
a=1
j=3
for i in {1..4}
do
for (( k=4-i; k>=1; k--  )) 
do 
	echo -n " "
done 
for ((j=1 ; j <=i; j++ ))
do
       echo -n "$a "
	a=`expr $a + 1`
done
	echo ""
done
