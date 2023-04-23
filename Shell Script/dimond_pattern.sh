<<comm
 Write a Shell Script to display a pattern like a diamond. 

    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 
comm

#!/bin/bash
for (( i=1; i<=5; i++ ))
do
	for (( j=1; j<=5-i; j++ ))
	do
	echo -n " "
	done
	for (( k=1; k<=i ; k++ ))
	do
	echo -n "* "
	done
	echo ""
done

for (( i=5; i>=1; i-- ))
do
	for (( j=1; j<=5-i; j++ )) 
	do
	echo -n " "
	done
	for (( k=1; k<=i; k++ ))
do
	echo -n "* "
done
	echo ""
done
 
