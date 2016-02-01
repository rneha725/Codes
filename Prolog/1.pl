position(nancy, stu1).
position(neha, stu2).
position(tanvi, stu3).
position(ayushi,stu4).
%% father(pa,c1,c2,c3).
father(n,neha).
male(n).


com(X,Y):- X<Y,write("X <Y");X>Y,write("X>Y");X=:=Y,write("hi"). 

go:-
write('Enter Two numbers'),nl,
read(X),read(Y),nl,
com(X,Y),nl.

father:-
father(X,Y),male(X),write(X),nl.
