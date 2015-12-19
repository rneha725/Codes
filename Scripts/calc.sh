#!/bin/sh

i='y'
while [ $i = 'y' ]
do
	read ch
	case $ch in
		1) echo "neha";;
		*) echo "nopes";;
	esac
	read i
done
