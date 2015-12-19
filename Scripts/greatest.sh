#!/bin/sh

biggest=$1

if [ $2 -gt $biggest ]
then 
	biggest=$2
fi

if [ $3 -gt $biggest ]
then 
	biggest=$3
fi

echo "Biggest is: $biggest"
