# Write a Shell Script to print Floyd's Triangle. 
#    1 
#    01
#    101 
#    0101 
#    10101 


#! /bin/bash
echo "Floyd's triangle"
for(( i=1; i<=5; i++ ))
do
	for(( j=1; j<=i; j++ ))
	do    
		if(( $j%2 == $i%2 ))
		then
		echo -n "1"
		else	
		echo -n "0"
		fi

	done
	echo ""
done
