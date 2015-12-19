#!/bin/sh -x

read file

user=$(id -u)
owner=$(stat -f $file)

if [ $user -eq $owner ]
then
	echo "yes, mine"
fi
