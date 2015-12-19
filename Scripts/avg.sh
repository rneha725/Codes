#!/bin/sh

avg=0
sum=0
for i in $*
do
	sum=$(($sum+$i))
done
echo "Sum is" $sum "and average is" $(($sum/$#))

