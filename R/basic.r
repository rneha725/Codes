# a <- 42
# A <- a*2

# neha <- function(x)
# {
# 	return(x*x)
# }


# print(neha(4))
# print(neha(x=4))
# invisible(neha(3))
# print(a)

# cat(A,"\n")

# print(A)
# if(A>a)
{
	# cat(A,">",a,"\n")
}

# print(print)


## COUNTDOWN

# countdown <- function(x)
# {
# 	print(x)
# 	while(x!=0)
# 	{
# 		Sys.sleep(0.1)
# 		x<-x-1
# 		print(x)
# 	}
# }

# countdown(5)


## Checking SLEEP(x)
#ERROR

# cpuTime <- function(x)
# {
# 	p<-proc.time()
# 	Sys.sleep(x)
# 	print(proc.time-p)
# 	# print(p)
# }

# cpuTime(2)

## INPUT

# args<-commandArgs(TRUE)
# readInt <-function()
# {
# 	n <- readline(prompt="Enter an integer:")
# 	return(as.integer(n))
# }
# print(as.integer(args[1]))
# print(readInt())

##Using REGEXP

# matchInteger <- function(z)
# {
# 	if(grepl("^[0-9]+$",z))
# 	print("Integer")
# 	else print("Not an integer")
# }

# matchInteger(90.789)
## RANDOM NUMBER GAME

# n<-commandArgs(TRUE)

# readGuess <- function()
# {
# 	if(grepl("^[0-9]+$",n)){return(as.integer(n))}
# 	else {return(readGuess())}
# }

# num <- round(runif(1)*100,0)
# guess<--1

# print("Guess a number from 0 to 100")

# guess<-readGuess()
# if(guess!=num) 
# {
# 	print("You are loooser and I am rude.")
# 	print("Because my number was")
# 	print(num)
# }
# else
# {
# 	print("You are still a looser.")
# }


##LIST
# sum(0:10) #prints on terminal
# c(1,2,"neha") #also prints. c:combine
# varCom<-c(1,2)
# length(varCom) #prints
# varSeq<-seq(from=9, to=12, by=0.1)
# seq(from=9, to=12, by=0.1) #prints
# print(varSeq)
# varAppend <- append(LETTERS[0:9], letters[8:6])
# append(LETTERS[0:9], letters[8:6]) #prints
# print(varAppend)
# a <- 1:4
# append(a,2.4,after=2)









































































































