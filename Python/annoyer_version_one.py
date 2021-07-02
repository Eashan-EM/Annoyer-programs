from os import system
#Imports system from os
inp = input("Enter text: ")
#Takes a input string
times = int(input("How many times: "))
#Takes the number of times to print
_ = system("clear")
#Clears the screen
while times!=0:
	#While times is not equal to 0
	print(inp)
	#Print the input string
	times -= 1
	#Times variable decremented by 1
