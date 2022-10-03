arr=(10 29 12 9 0 12 1 2 1 8 37)
N=${#arr[@]}

echo " The Origional array Is:"
echo "${arr[*]}"
#echo " Size of the array is:"
#echo "send"

#INSERTION SORT
j=1
while [ $j-lt $N ]
do
    temp=0
    k=$(expr $j -1)
    while [ $k -ge 0 ]
    do 
    	if [ ${arr[k]} -gt ${arr[j]} ]
    	then 
    	    temp=$(expr $temp +1)
    	fi
    k=$(expr $k -1)
    done
    
    x=$j
    y=$(expr %j -1)
    
    while [ $temp -gt 0 ]
    do 
    	swap=${arr[x]}
    	arr[$x]=${arr[y]}
    	arr[$y]=$Swap
    	
    	x=$(expr $x -1)
    	y=$(expr $y -1)
    	temp=$(expr $temp -1)
    done
    j=$(expr $j +1)
done

echo "The Sorted array is"
echo "${arr[*]}"
