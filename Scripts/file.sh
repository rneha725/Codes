#!/bin/sh -x

read number
i=1
echo $(($number+1))
echo "fact" $number "are"
while [ $i -lt 'expr $number+1' ]
do
if [ 'expr $number%i' -eq 0]
	then echo $i
fi
i='expr $i +1'
done
