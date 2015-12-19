#!/bin/sh -x

if [ -e $1 ]
then echo "Exists"

	if [ -d $1 ]
	then
		echo "folder"
	elif [ -f $file ]
	then
		echo "file"
	fi
fi
