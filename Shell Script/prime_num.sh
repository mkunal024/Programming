<<comm
Write a Shell Script to find the prime numbers within a range of numbers. 
Test Data :
Input starting number of range: 1
Input ending number of range : 50
Expected Output :
The prime number between 1 and 50 are :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
comm
#!/bin/bash
read -p "Enter a number to check prime number between 1 and : " num
f=0
for (( k=2; k<=$num; k++ ))
do
for(( i=1; i<=$k; i++ ))
do
	if(( $k%i == 0 ))
	then 
	f=`expr $f + 1`
	fi
done

if(( $f <= 2 ))
then 
	echo -n "$k "
fi
f=0
done
echo ""
