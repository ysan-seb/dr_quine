import sys

def quine(string):
	print(string%(10,10,10,9,37,10,10,10,10,10,9,10,9,34,string,34,10,10,10,9))

# comment

def main():
	# comment
	quine("import sys%c%cdef quine(string):%c%cprint(string%c(10,10,10,9,37,10,10,10,10,10,9,10,9,34,string,34,10,10,10,9))%c%c# comment%c%cdef main():%c%c# comment%c%cquine(%c%s%c)%c%cif __name__ == '__main__':%c%cmain()")

if __name__ == '__main__':
	main()
